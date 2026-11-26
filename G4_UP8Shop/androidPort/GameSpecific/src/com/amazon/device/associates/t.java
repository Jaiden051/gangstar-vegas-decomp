// Decompiled from classes.dex (SourceFile: t.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class t implements com.amazon.device.associates.bg {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.associates.t.class.getSimpleName();
    }

    t()
    {
      super();
    }

    public final void a(android.content.Context p0, android.content.Intent p1, com.amazon.device.associates.ay p2)
    {
      android.os.Bundle Extras;
      String String;
      x.b(a, "handleResponse");
      try
      {
        Extras = p1.getExtras();
        String = Extras.getString("notifyType");
        if ( String.equalsIgnoreCase("physical_purchase_done") )
          p2.a(ay$a.f, RequestId.a(Extras.getString("requestId")), null);
        else
          x.a(a, "unknown notifyType: " + String);
      }
      catch ( Exception v6 )
      {
        x.a(a, "Error in handleResponse: " + v6);
      }
    }

}
