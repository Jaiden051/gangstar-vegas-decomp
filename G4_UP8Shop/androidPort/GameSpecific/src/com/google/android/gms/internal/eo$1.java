// Decompiled from classes.dex (SourceFile: eo$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Process;
final class eo$1 implements java.lang.Runnable {
    // Fields
    final java.lang.Runnable a;

    // Methods
    eo$1(Runnable p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      Process.setThreadPriority(10);
      this.a.run();
    }

}
