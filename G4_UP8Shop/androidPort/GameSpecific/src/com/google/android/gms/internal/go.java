// Decompiled from classes.dex (SourceFile: go.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
import android.util.Log;
public class go {
    // Fields
    private static boolean a;
    private final java.lang.String b;
    private boolean c;
    private boolean d;
    private java.lang.String e;

    // Methods
    static
    {
      a = false;
    }

    public go(String p0)
    {
      this(p0, en());
    }

    private go(String p0, boolean p1)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = false;
    }

    private boolean a()
    {
      return this.c;
    }

    private boolean b()
    {
      return this.d;
    }

    private String e(String p0, Object[] p1)
    {
      String v3;
      v3 = String.format(p0, p1);
      if ( !TextUtils.isEmpty(this.e) )
        return this.e + v3;
      return v3;
    }

    public static boolean en()
    {
      return a;
    }

    public final void a(String p0)
    {
      String v2;
      Object[] v3;
      if ( TextUtils.isEmpty(p0) )
      {
        v2 = null;
      }
      else
      {
        v3 = new Object[1];
        v3[0] = p0;
        v2 = String.format("[%s] ", v3);
      }
      this.e = v2;
    }

    public final void a(String p0, Object[] p1)
    {
      if ( this.d )
        Log.v(this.b, this.e(p0, p1));
    }

    public final void a(Throwable p0, String p1, Object[] p2)
    {
      if ( this.c || a )
        Log.d(this.b, this.e(p1, p2), p0);
    }

    public final void b(String p0, Object[] p1)
    {
      if ( this.c || a )
        Log.d(this.b, this.e(p0, p1));
    }

    public final void c(String p0, Object[] p1)
    {
      Log.i(this.b, this.e(p0, p1));
    }

    public final void d(String p0, Object[] p1)
    {
      Log.w(this.b, this.e(p0, p1));
    }

}
