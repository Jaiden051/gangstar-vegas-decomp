// Decompiled from classes.dex (SourceFile: hg.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
public final class hg {
    // Fields
    private final java.lang.String a;

    // Methods
    public hg(String p0)
    {
      super();
      this.a = (String)hn.f(p0);
    }

    private boolean a(int p0)
    {
      return Log.isLoggable(this.a, p0);
    }

    public final void a(String p0, String p1)
    {
      if ( this.a(2) )
        Log.v(p0, p1);
    }

    public final void a(String p0, String p1, Throwable p2)
    {
      if ( this.a(4) )
        Log.i(p0, p1, p2);
    }

    public final void b(String p0, String p1)
    {
      if ( this.a(5) )
        Log.w(p0, p1);
    }

    public final void b(String p0, String p1, Throwable p2)
    {
      if ( this.a(6) )
        Log.e(p0, p1, p2);
    }

    public final void c(String p0, String p1)
    {
      if ( this.a(6) )
        Log.e(p0, p1);
    }

}
