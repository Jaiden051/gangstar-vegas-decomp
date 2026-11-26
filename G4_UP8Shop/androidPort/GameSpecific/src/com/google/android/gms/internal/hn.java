// Decompiled from classes.dex (SourceFile: hn.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Looper;
import android.text.TextUtils;
public final class hn {
    // Methods
    public static void A(boolean p0)
    {
      if ( !p0 )
        throw new IllegalStateException();
    }

    public static void C(boolean p0)
    {
      if ( !p0 )
        throw new IllegalArgumentException();
    }

    public static void a(boolean p0, Object p1)
    {
      if ( !p0 )
        throw new IllegalStateException(String.valueOf(p1));
    }

    public static void a(boolean p0, String p1, Object[] p2)
    {
      if ( !p0 )
        throw new IllegalStateException(String.format(p1, p2));
    }

    public static String aE(String p0)
    {
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("Given String is empty or null");
      return p0;
    }

    public static void ay(String p0)
    {
      if ( Looper.myLooper() != Looper.getMainLooper() )
        throw new IllegalStateException(p0);
    }

    public static void az(String p0)
    {
      if ( Looper.myLooper() == Looper.getMainLooper() )
        throw new IllegalStateException(p0);
    }

    public static <T> T b(T p0, Object p1)
    {
      if ( p0 == null )
        throw new NullPointerException(String.valueOf(p1));
      return p0;
    }

    public static String b(String p0, Object p1)
    {
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException(String.valueOf(p1));
      return p0;
    }

    public static void b(boolean p0, Object p1)
    {
      if ( !p0 )
        throw new IllegalArgumentException(String.valueOf(p1));
    }

    public static void b(boolean p0, String p1, Object[] p2)
    {
      if ( !p0 )
        throw new IllegalArgumentException(String.format(p1, p2));
    }

    public static <T> T f(T p0)
    {
      if ( p0 == null )
        throw new NullPointerException("null reference");
      return p0;
    }

}
