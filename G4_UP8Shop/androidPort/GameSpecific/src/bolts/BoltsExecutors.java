// Decompiled from classes.dex (SourceFile: BoltsExecutors.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

import java.util.Locale;
import java.util.concurrent.Executors;
final class BoltsExecutors {
    // Fields
    private static final bolts.BoltsExecutors a;
    private final java.util.concurrent.ExecutorService b;
    private final java.util.concurrent.Executor c;

    // Methods
    static
    {
      a = new bolts.BoltsExecutors();
    }

    private BoltsExecutors()
    {
      super();
      java.util.concurrent.ExecutorService v1;
      if ( isAndroidRuntime() )
        v1 = AndroidExecutors.newCachedThreadPool();
      else
        v1 = Executors.newCachedThreadPool();
      this.b = v1;
      this.c = (java.util.concurrent.Executor)new bolts.j(0);
    
    }

    public static java.util.concurrent.ExecutorService background()
    {
      return a.b;
    }

    static java.util.concurrent.Executor immediate()
    {
      return a.c;
    }

    private static boolean isAndroidRuntime()
    {
      String Property; // RETVAL
    
      Property = System.getProperty("java.runtime.name");
      return Property != null && Property.toLowerCase(Locale.US).contains("android");
    }

}
