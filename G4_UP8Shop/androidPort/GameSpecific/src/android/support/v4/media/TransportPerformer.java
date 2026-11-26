// Decompiled from classes.dex (SourceFile: TransportPerformer.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.media;

import android.os.SystemClock;
public abstract class TransportPerformer {
    // Fields
    static int a;
    static int b;
    static int c;
    static int d;
    static int e;
    static int f;

    // Methods
    public TransportPerformer()
    {
      super();
    }

    public static int onGetBufferPercentage()
    {
      return 100;
    }

    public static int onGetTransportControlFlags()
    {
      return 60;
    }

    public static boolean onMediaButtonUp$4765ad2()
    {
      return true;
    }

    public abstract void a();

    public final boolean a(int p0)
    {
      return true;
    }

    public abstract void b();

    public final void b(int p0)
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

    public abstract void c();

    public abstract long d();

    public abstract long e();

    public abstract void f();

    public abstract boolean g();

}
