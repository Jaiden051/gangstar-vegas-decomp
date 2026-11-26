// Decompiled from classes.dex (SourceFile: x.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class x implements java.lang.Runnable {
    // Fields
    final int a;
    final int b;
    final android.support.v4.app.FragmentManagerImpl c;

    // Methods
    x(android.support.v4.app.FragmentManagerImpl p0, int p1, int p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void run()
    {
      this.c.a((String)null, this.a, this.b);
    }

}
