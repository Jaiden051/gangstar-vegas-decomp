// Decompiled from classes.dex (SourceFile: r.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
import com.amazon.android.framework.task.pipeline.TaskPipelineId;
final class r extends com.amazon.device.associates.ao {
    // Fields
    private static final java.lang.String b;
    private com.amazon.android.framework.context.ContextManager c;
    private com.amazon.android.framework.task.TaskManager d;

    // Methods
    static
    {
      b = com.amazon.device.associates.r.class.getSimpleName();
    }

    r(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.PurchaseRequest p1,
            com.amazon.device.associates.ay p2)
    {
      super("physical_purchase", "1.0", p0, p2);
      java.util.ArrayList v4;
      v4 = new java.util.ArrayList();
      v4.add(p1.getProductId());
      this.a("productIds", v4);
      this.a("receiveReceipt", Boolean.valueOf(p1.getReceiveReceipt()));
      this.a(true);
    
    }

    /* synthetic */ static com.amazon.android.framework.context.ContextManager a(com.amazon.device.associates.r p0)
    {
      return p0.c;
    }

    /* synthetic */ static String c()
    {
      return b;
    }

    protected final void a()
    {
      this.a.a(ay$a.e, new com.amazon.device.associates.PurchaseResponse(this.b(), PurchaseResponse$Status.FAILED));
    }

    protected final void onSuccess(com.amazon.venezia.command.SuccessResult p0)
    {
      String v2;
      java.util.Map Data;
      com.amazon.device.associates.PurchaseResponse$Status v4;
      android.content.Intent v5;
      com.amazon.device.associates.PurchaseResponse v7;
      v2 = b;
      x.b(v2, "onSuccess");
      try
      {
        Data = p0.getData();
        x.b(b, "data: " + Data);
        if ( Data.containsKey("errorMessage") )
          Log.e(b, (String)Data.get("errorMessage"));
        v4 = PurchaseResponse$Status.valueOf((String)Data.get("requestStatus"));
        if ( v4 == PurchaseResponse$Status.SUCCESSFUL )
        {
          v5 = (android.content.Intent)Data.get("purchaseIntent");
          if ( v5 == null )
            throw new IllegalArgumentException("purchaseIntent is null.");
          this.d.enqueueAtFront(TaskPipelineId.FOREGROUND, (com.amazon.android.framework.task.Task)new com.amazon.device.associates.r$1(this, v5));
          v7 = null;
        }
        else
        {
          v7 = new com.amazon.device.associates.PurchaseResponse(this.b(), v4);
        }
      }
      catch ( Exception v6 )
      {
        x.a(b, "error in onSuccess: " + v6.getMessage());
        v7 = new com.amazon.device.associates.PurchaseResponse(this.b(), PurchaseResponse$Status.FAILED);
      }
      if ( v7 != null )
        this.a.a(ay$a.e, v7);
    }

}
