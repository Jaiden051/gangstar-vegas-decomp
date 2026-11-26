// Decompiled from classes.dex (SourceFile: ModernAsyncTask$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

final class ModernAsyncTask$1 implements java.util.concurrent.ThreadFactory {
    // Fields
    private final java.util.concurrent.atomic.AtomicInteger mCount;

    // Methods
    ModernAsyncTask$1()
    {
      super();
      this.mCount = new java.util.concurrent.atomic.AtomicInteger(1);
    }

    public final Thread newThread(Runnable p0)
    {
      return new Thread(p0, "ModernAsyncTask #" + this.mCount.getAndIncrement());
    }

}
