// Decompiled from classes.dex (SourceFile: eo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.concurrent.TimeUnit;
public final class eo {
    // Fields
    private static final java.util.concurrent.ThreadFactory a;
    private static final java.util.concurrent.ThreadPoolExecutor b;

    // Methods
    static
    {
      a = (java.util.concurrent.ThreadFactory)new com.google.android.gms.internal.eo$2();
      b = new java.util.concurrent.ThreadPoolExecutor(0, 10, 65, TimeUnit.SECONDS, new java.util.concurrent.SynchronousQueue(true), a);
    }

    public static void execute(Runnable p0)
    {
      try
      {
        b.execute((Runnable)new com.google.android.gms.internal.eo$1(p0));
      }
      catch ( java.util.concurrent.RejectedExecutionException v1 )
      {
        ev.c("Too many background threads already running. Aborting task.  Current pool size: " + getPoolSize(), v1);
      }
    }

    public static int getPoolSize()
    {
      return b.getPoolSize();
    }

}
