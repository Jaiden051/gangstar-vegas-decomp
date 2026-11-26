// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.media;

final class f implements android.view.ViewTreeObserver.OnWindowAttachListener {
    // Fields
    final android.support.v4.media.e a;

    // Methods
    f(android.support.v4.media.e p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onWindowAttached()
    {
      this.a.c();
    }

    public final void onWindowDetached()
    {
      this.a.i();
    }

}
