// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.util.Log;
class l implements com.google.android.gms.analytics.Logger {
    // Fields
    private int a;

    // Methods
    l()
    {
      super();
      this.a = 1;
    }

    private static String L(String p0)
    {
      return Thread.currentThread().toString() + ": " + p0;
    }

    public final int a()
    {
      return this.a;
    }

    public final void a(int p0)
    {
      this.a = p0;
    }

    public final void a(Exception p0)
    {
      if ( this.a <= 3 )
        Log.e("GAV4", null, p0);
    }

    public final void a(String p0)
    {
      if ( this.a <= 0 )
        Log.v("GAV4", L(p0));
    }

    public final void b(String p0)
    {
      if ( this.a <= 1 )
        Log.i("GAV4", L(p0));
    }

    public final void c(String p0)
    {
      if ( this.a <= 2 )
        Log.w("GAV4", L(p0));
    }

    public final void d(String p0)
    {
      if ( this.a <= 3 )
        Log.e("GAV4", L(p0));
    }

}
