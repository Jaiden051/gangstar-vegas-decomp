// Decompiled from classes.dex (SourceFile: bh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.content.Intent;
import com.facebook.Response;
final class bh implements com.amazon.device.associates.bg {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.associates.bh.class.getSimpleName();
    }

    bh()
    {
      super();
    }

    private void a(com.amazon.device.associates.ay p0, com.amazon.device.associates.RequestId p1)
    {
      java.util.HashSet v3;
      v3 = new java.util.HashSet();
      v3.add(PurchaseExperience.DIRECT_WITH_DETAIL);
      v3.add(PurchaseExperience.DIRECT_WITH_PREVIEW);
      p0.a(ay$a.a, new com.amazon.device.associates.ServiceStatusResponse(p1, null, v3, false, false));
    }

    private void b(com.amazon.device.associates.ay p0, com.amazon.device.associates.RequestId p1)
    {
      p0.a(ay$a.e, new com.amazon.device.associates.PurchaseResponse(p1, PurchaseResponse$Status.SUCCESSFUL));
    }

    public final void a(android.content.Context p0, android.content.Intent p1, com.amazon.device.associates.ay p2)
    {
      String Action;
      com.amazon.device.associates.RequestId v5;
      p.c(a, "handleResponse");
      try
      {
        p.c(a, "Intent action received from Dummy Response Receiver:" + p1.getAction());
        Action = p1.getAction();
        v5 = RequestId.a(p1.getStringExtra("requestId"));
        if ( Action.equalsIgnoreCase("com.amazon.device.iap.physical.get_serviceStatus") )
        {
          this.a(p2, v5);
        }
        else if ( Action.equalsIgnoreCase("com.amazon.device.iap.physical.physical_purchase") )
        {
          this.b(p2, v5);
        }
        else
        {
          p.c(a, "response with unknown command: " + Action);
        }
      }
      catch ( Exception v6 )
      {
        p.c(a, "error in handleResponse: " + v6);
      }
    }

}
