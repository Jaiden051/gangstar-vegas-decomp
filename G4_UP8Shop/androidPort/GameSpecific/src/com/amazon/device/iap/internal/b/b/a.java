// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.b;

import com.amazon.android.framework.task.pipeline.TaskPipelineId;
abstract class a extends com.amazon.device.iap.internal.b.i {
    // Fields
    private static final java.lang.String d;
    protected com.amazon.android.framework.task.TaskManager a;
    protected com.amazon.android.framework.context.ContextManager b;
    protected final java.lang.String c;

    // Methods
    static
    {
      d = com.amazon.device.iap.internal.b.b.a.class.getSimpleName();
    }

    a(com.amazon.device.iap.internal.b.b_e p0, String p1, String p2)
    {
      super(p0, "purchase_item", p1);
      this.c = p2;
      this.a("sku", this.c);
    }

    /* synthetic */ static String a()
    {
      return d;
    }

    /* synthetic */ static String a(com.amazon.device.iap.internal.b.b.a p0)
    {
      return p0.c();
    }

    protected boolean a(com.amazon.venezia.command.SuccessResult p0)
    {
      java.util.Map Data;
      Data = p0.getData();
      com.amazon.device.iap.internal.util.e.a(d, "data: " + Data);
      if ( Data.containsKey("purchaseItemIntent") )
      {
        com.amazon.device.iap.internal.util.e.a(d, "found intent");
        this.a.enqueueAtFront(TaskPipelineId.FOREGROUND, (com.amazon.android.framework.task.Task)new com.amazon.device.iap.internal.b.b.a$1(this, (android.content.Intent)Data.remove("purchaseItemIntent")));
        return true;
      }
      else
      {
        com.amazon.device.iap.internal.util.e.b(d, "did not find intent");
        return false;
      }
    }

}
