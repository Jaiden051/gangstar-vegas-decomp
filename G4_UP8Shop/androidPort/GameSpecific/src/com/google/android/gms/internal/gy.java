// Decompiled from classes.dex (SourceFile: gy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Looper;
import android.util.Log;
public final class gy {
    // Methods
    public static void A(boolean p0)
    {
      if ( !p0 )
        throw new IllegalStateException();
    }

    public static void a(boolean p0, Object p1)
    {
      if ( !p0 )
        throw new IllegalStateException(String.valueOf(p1));
    }

    public static void ay(String p0)
    {
      if ( Looper.getMainLooper().getThread() != Thread.currentThread() )
      {
        Log.e(
          "Asserts",
          "checkMainThread: current thread "
        + Thread.currentThread()
        + " IS NOT the main thread "
        + Looper.getMainLooper().getThread()
        + "!");
        throw new IllegalStateException(p0);
      }
    }

    public static void az(String p0)
    {
      if ( Looper.getMainLooper().getThread() == Thread.currentThread() )
      {
        Log.e(
          "Asserts",
          "checkNotMainThread: current thread "
        + Thread.currentThread()
        + " IS the main thread "
        + Looper.getMainLooper().getThread()
        + "!");
        throw new IllegalStateException(p0);
      }
    }

    public static void c(Object p0)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("null reference");
    }

}
