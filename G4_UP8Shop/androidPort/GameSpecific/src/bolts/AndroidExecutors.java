// Decompiled from classes.dex (SourceFile: AndroidExecutors.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

import android.os.Build;
import java.util.concurrent.TimeUnit;
final class AndroidExecutors {
    // Fields
    static final int a;
    static final int b;
    static long c;
    static int d;
    private static final bolts.AndroidExecutors e;
    private static final int g;
    private final java.util.concurrent.Executor f;

    // Methods
    static
    {
      int v0; // RETVAL
    
      e = new bolts.AndroidExecutors();
      v0 = Runtime.getRuntime().availableProcessors();
      g = v0;
      a = v0 + 1;
      b = 2 * g + 1;
    }

    private AndroidExecutors()
    {
      super();
      this.f = (java.util.concurrent.Executor)new bolts.c(0);
    }

    public static void allowCoreThreadTimeout(java.util.concurrent.ThreadPoolExecutor p0, boolean p1)
    {
      if ( Build.VERSION.SDK_INT >= 9 )
        p0.allowCoreThreadTimeOut(p1);
    }

    public static java.util.concurrent.ExecutorService newCachedThreadPool()
    {
      java.util.concurrent.ThreadPoolExecutor v0;
      v0 = new java.util.concurrent.ThreadPoolExecutor(a, b, 1, TimeUnit.SECONDS, new java.util.concurrent.LinkedBlockingQueue(128));
      allowCoreThreadTimeout(v0, true);
      return v0;
    }

    public static java.util.concurrent.ExecutorService newCachedThreadPool(
            java.util.concurrent.ThreadFactory p0)
    {
      java.util.concurrent.ThreadPoolExecutor v1;
      v1 = new java.util.concurrent.ThreadPoolExecutor(a, b, 1, TimeUnit.SECONDS, new java.util.concurrent.LinkedBlockingQueue(128), p0);
      allowCoreThreadTimeout(v1, true);
      return v1;
    }

    public static java.util.concurrent.Executor uiThread()
    {
      return e.f;
    }

}
