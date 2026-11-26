// Decompiled from classes.dex (SourceFile: eo$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class eo$2 implements java.util.concurrent.ThreadFactory {
    // Fields
    private final java.util.concurrent.atomic.AtomicInteger a;

    // Methods
    eo$2()
    {
      super();
      this.a = new java.util.concurrent.atomic.AtomicInteger(1);
    }

    public final Thread newThread(Runnable p0)
    {
      return new Thread(p0, "AdWorker #" + this.a.getAndIncrement());
    }

}
