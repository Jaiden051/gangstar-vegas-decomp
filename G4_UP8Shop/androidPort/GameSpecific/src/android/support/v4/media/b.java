// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.media;

import android.os.SystemClock;
final class b implements android.support.v4.media.d {
    // Fields
    final android.support.v4.media.TransportMediator a;

    // Methods
    b(android.support.v4.media.TransportMediator p0)
    {
      super();
      this.a = p0;
    
    }

    public final long a()
    {
      return this.a.b.e();
    }

    public final void a(int p0)
    {
      int v2;
      long v3; // RETVAL
    
      v2 = 0;
      if ( p0 == -1 )
        v2 = 127;
      if ( v2 != 0 )
      {
        v3 = SystemClock.uptimeMillis();
        new android.view.KeyEvent(v3, v3, 0, 127, 0);
        new android.view.KeyEvent(v3, v3, 1, 127, 0);
      }
    }

    public final void a(long p0)
    {
      ;
    }

    public final void a(android.view.KeyEvent p0)
    {
      p0.dispatch(this.a.t);
    }

}
