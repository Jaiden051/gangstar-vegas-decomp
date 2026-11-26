// Decompiled from classes.dex (SourceFile: x.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.util.Log;
class x implements com.google.android.gms.tagmanager.bi {
    // Fields
    private int a;

    // Methods
    x()
    {
      super();
      this.a = 5;
    }

    public final void a(int p0)
    {
      this.a = p0;
    }

    public final void a(String p0)
    {
      if ( this.a <= 6 )
        Log.e("GoogleTagManager", p0);
    }

    public final void a(String p0, Throwable p1)
    {
      if ( this.a <= 6 )
        Log.e("GoogleTagManager", p0, p1);
    }

    public final void b(String p0)
    {
      if ( this.a <= 5 )
        Log.w("GoogleTagManager", p0);
    }

    public final void b(String p0, Throwable p1)
    {
      if ( this.a <= 5 )
        Log.w("GoogleTagManager", p0, p1);
    }

    public final void c(String p0)
    {
      if ( this.a <= 4 )
        Log.i("GoogleTagManager", p0);
    }

    public final void d(String p0)
    {
      if ( this.a <= 3 )
        Log.d("GoogleTagManager", p0);
    }

    public final void e(String p0)
    {
      if ( this.a <= 2 )
        Log.v("GoogleTagManager", p0);
    }

}
