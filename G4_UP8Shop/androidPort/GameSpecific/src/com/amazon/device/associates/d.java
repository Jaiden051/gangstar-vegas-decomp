// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
final class d extends com.amazon.device.associates.ao {
    // Fields
    private static final java.lang.String b;
    private final java.util.Set c;
    private boolean d;
    private boolean e;

    // Methods
    static
    {
      b = com.amazon.device.associates.d.class.getSimpleName();
    }

    d(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      super("get_userData", "1.0", p0, p1);
      this.c = new java.util.HashSet();
      this.c.add(PurchaseExperience.DIRECT_WITH_DETAIL);
      this.c.add(PurchaseExperience.DIRECT_WITH_PREVIEW);
      this.d = false;
      this.e = false;
      this.a(false);
    }

    protected final void a()
    {
      this.a.a(ay$a.a, new com.amazon.device.associates.ServiceStatusResponse(this.b(), null, this.c, this.d, this.e));
    }

    protected final void onSuccess(com.amazon.venezia.command.SuccessResult p0)
    {
      String v2;
      java.util.Map Data;
      String v4;
      String v5;
      com.amazon.device.associates.ServiceStatusResponse v6 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v2 = b;
            x.b(v2, "onSuccess");
            try
            {
            Data = p0.getData();
            x.b(b, "data: " + Data);
            if ( Data.containsKey("errorMessage") )
            Log.e(b, (String)Data.get("errorMessage"));
            if ( ((String)Data.get("requestStatus")).equals("SUCCESSFUL") )
            {
            v4 = (String)Data.get("userId");
            v5 = (String)Data.get("marketplace");
            if ( ((java.util.Set)Data.get("availableProductTypes")).contains("PHYSICAL") )
            {
            this.c.add(PurchaseExperience.IN_APP);
            this.d = true;
            this.e = true;
            }
            v6 = new com.amazon.device.associates.ServiceStatusResponse(this.b(), new com.amazon.device.associates.UserData(v4, v5), this.c, this.d, this.e);
            { _pc = 1; continue _sm; }
            }
            v6 = new com.amazon.device.associates.ServiceStatusResponse(this.b(), new com.amazon.device.associates.UserData((String)null, (String)null), this.c, this.d, this.e);
            }
            catch ( Exception v7 )
            {
            x.a(b, "error in onSuccess: " + v7);
            v6 = null;
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            this.a.a(ay$a.a, v6);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

}
