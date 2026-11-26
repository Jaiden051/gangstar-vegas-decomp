// Decompiled from classes.dex (SourceFile: aa.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
final class aa extends com.amazon.device.associates.ao {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.associates.aa.class.getSimpleName();
    }

    aa(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      super("physical_notify_receiptReceived", "1.0", p0, p1);
      this.a(false);
    }

    protected final void a()
    {
      ;
    }

    protected final void onSuccess(com.amazon.venezia.command.SuccessResult p0)
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
