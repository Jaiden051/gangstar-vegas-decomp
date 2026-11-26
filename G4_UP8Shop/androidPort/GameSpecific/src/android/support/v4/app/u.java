// Decompiled from classes.dex (SourceFile: u.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class u implements java.lang.Runnable {
    // Fields
    final android.support.v4.app.FragmentManagerImpl a;

    // Methods
    u(android.support.v4.app.FragmentManagerImpl p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      this.a.h();
    }

}
