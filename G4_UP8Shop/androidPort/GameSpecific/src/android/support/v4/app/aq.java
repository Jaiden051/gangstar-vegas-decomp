// Decompiled from classes.dex (SourceFile: aq.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class aq implements android.support.v4.app.ap {
    // Methods
    aq()
    {
      super();
    }

    public final android.app.Notification a(android.support.v4.app.an p0)
    {
      android.app.Notification r;
      r = p0.r;
      com.gameloft.android.DecompRT.setLatestEventInfo(r, p0.a, p0.b, p0.c, p0.d);
      if ( p0.j > 0 )
        r.flags |= 0x80;
      return r;
    }

}
