// Decompiled from classes.dex (SourceFile: da.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class da {
    // Fields
    private final java.lang.String a;

    // Methods
    public da(String p0)
    {
      super();
      this.a = p0;
    }

    public static String bh()
    {
      return ep.bO();
    }

    public final boolean a(String p0, android.content.Intent p1)
    {
      boolean v3;
      String v5;
      String v6; // RETVAL
      String v7;
      v3 = false;
      if ( p0 != null && p1 != null )
      {
        v5 = cz.d(p1);
        v6 = cz.e(p1);
        v7 = v6;
        if ( v5 != null && v6 != null )
        {
          if ( p0.equals(cz.p(v5)) )
          {
            if ( this.a == null || db.b(this.a, v5, v7) )
              return true;
            else
              ev.D("Fail to verify signature.");
          }
          else
          {
            ev.D("Developer payload not match.");
          }
        }
      }
      return v3;
    }

}
