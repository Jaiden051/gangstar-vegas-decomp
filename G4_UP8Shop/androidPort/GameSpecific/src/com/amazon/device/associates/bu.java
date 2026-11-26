// Decompiled from classes.dex (SourceFile: bu.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
class bu extends com.amazon.device.associates.ao {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.associates.bu.class.getSimpleName();
    }

    bu(com.amazon.device.associates.RequestId p0, String p1, String p2, com.amazon.device.associates.ay p3)
    {
      super("submit_metric", "1.0", p0, p3);
      this.a("metricName", p1);
      this.a("metricAttributes", p2);
      this.a(false);
    }

    protected void a()
    {
      ;
    }

    protected void onSuccess(com.amazon.venezia.command.SuccessResult p0)
    {
      java.util.Map Data;
      x.b(b, "onSuccess");
      try
      {
        Data = p0.getData();
        x.b(b, "data: " + Data);
        if ( Data.containsKey("errorMessage") )
          Log.e(b, (String)Data.get("errorMessage"));
      }
      catch ( Exception v3 )
      {
        x.a(b, "error in onSuccess: " + v3.getMessage());
      }
    }

}
