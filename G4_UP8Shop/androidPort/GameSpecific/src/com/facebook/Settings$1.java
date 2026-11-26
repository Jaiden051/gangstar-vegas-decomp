// Decompiled from classes.dex (SourceFile: Settings$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class Settings$1 implements java.util.concurrent.ThreadFactory {
    // Fields
    private final java.util.concurrent.atomic.AtomicInteger counter;

    // Methods
    Settings$1()
    {
      super();
      this.counter = new java.util.concurrent.atomic.AtomicInteger(0);
    }

    public final Thread newThread(Runnable p0)
    {
      return new Thread(p0, "FacebookSdk #" + this.counter.incrementAndGet());
    }

}
