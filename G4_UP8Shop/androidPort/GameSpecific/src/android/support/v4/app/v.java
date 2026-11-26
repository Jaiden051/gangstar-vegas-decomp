// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class v implements java.lang.Runnable {
    // Fields
    final android.support.v4.app.FragmentManagerImpl a;

    // Methods
    v(android.support.v4.app.FragmentManagerImpl p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      this.a.a((String)null, -1, 0);
    }

}
