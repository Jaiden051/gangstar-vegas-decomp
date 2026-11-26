// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class o extends android.os.Handler {
    // Fields
    final android.support.v4.app.FragmentActivity a;

    // Methods
    o(android.support.v4.app.FragmentActivity p0)
    {
      super();
      this.a = p0;
    
    }

    public final void handleMessage(android.os.Message p0)
    {
      switch ( p0.what )
      {
        case 1:
          if ( this.a.i )
            this.a.a(false);
          break;
        case 2:
          this.a.b_();
          this.a.e.h();
          break;
        default:
          super.handleMessage(p0);
          break;
      }
    }

}
