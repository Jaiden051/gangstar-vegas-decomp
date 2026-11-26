// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.media;

final class g implements android.view.ViewTreeObserver.OnWindowFocusChangeListener {
    // Fields
    final android.support.v4.media.e a;

    // Methods
    g(android.support.v4.media.e p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onWindowFocusChanged(boolean p0)
    {
      if ( p0 )
        this.a.d();
      else
        this.a.h();
    }

}
