// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

import android.os.Looper;
final class c implements java.util.concurrent.Executor {
    // Methods
    private c()
    {
      super();
    }

    /* synthetic */ c(int p0)
    {
      this();
    }

    public final void execute(Runnable p0)
    {
      new android.os.Handler(Looper.getMainLooper()).post(p0);
    }

}
