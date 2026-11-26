// Decompiled from classes.dex (SourceFile: ad.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class ad implements java.lang.Runnable {
    // Fields
    final android.support.v4.app.ListFragment a;

    // Methods
    ad(android.support.v4.app.ListFragment p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      this.a.e.focusableViewAvailable(this.a.e);
    }

}
