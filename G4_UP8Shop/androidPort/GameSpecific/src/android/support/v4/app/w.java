// Decompiled from classes.dex (SourceFile: w.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class w implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final int b;
    final android.support.v4.app.FragmentManagerImpl c;

    // Methods
    w(android.support.v4.app.FragmentManagerImpl p0, String p1, int p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void run()
    {
      this.c.a(this.a, -1, this.b);
    }

}
