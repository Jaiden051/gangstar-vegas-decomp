// Decompiled from classes.dex (SourceFile: ev.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
public final class ev {
    // Methods
    public static void A(String p0)
    {
      if ( p(6) )
        Log.e("Ads", p0);
    }

    public static void B(String p0)
    {
      if ( p(4) )
        Log.i("Ads", p0);
    }

    public static void C(String p0)
    {
      if ( p(2) )
        Log.v("Ads", p0);
    }

    public static void D(String p0)
    {
      if ( p(5) )
        Log.w("Ads", p0);
    }

    public static void a(String p0, Throwable p1)
    {
      if ( p(3) )
        Log.d("Ads", p0, p1);
    }

    public static void b(String p0, Throwable p1)
    {
      if ( p(6) )
        Log.e("Ads", p0, p1);
    }

    public static void c(String p0, Throwable p1)
    {
      if ( p(5) )
        Log.w("Ads", p0, p1);
    }

    public static boolean p(int p0)
    {
      return (p0 >= 5 || Log.isLoggable("Ads", p0)) && p0 != 2;
    }

    public static void z(String p0)
    {
      if ( p(3) )
        Log.d("Ads", p0);
    }

}
