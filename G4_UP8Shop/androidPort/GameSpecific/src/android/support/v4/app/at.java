// Decompiled from classes.dex (SourceFile: at.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class at implements android.support.v4.app.ap {
    // Methods
    at()
    {
      super();
    }

    public final android.app.Notification a(android.support.v4.app.an p0)
    {
      android.support.v4.app.av v2;
      java.util.Iterator v3;
      android.support.v4.app.ak v4;
      android.support.v4.app.am v5;
      android.support.v4.app.ao v7;
      android.support.v4.app.al v8;
      v2 = new android.support.v4.app.av(p0.a, p0.r, p0.b, p0.c, p0.h, p0.f, p0.i, p0.d, p0.e, p0.g, p0.n, p0.o, p0.p, p0.k, p0.j, p0.m);
      v3 = p0.q.iterator();
      while ( v3.hasNext() )
      {
        v4 = (android.support.v4.app.ak)v3.next();
        v2.a(v4.a, v4.b, v4.c);
      }
      if ( p0.l != null )
      {
        if ( p0.l instanceof android.support.v4.app.am )
        {
          v5 = (android.support.v4.app.am)p0.l;
          v2.a(v5.e, v5.g, v5.f, v5.a);
        }
        else if ( p0.l instanceof android.support.v4.app.ao )
        {
          v7 = (android.support.v4.app.ao)p0.l;
          v2.a(v7.e, v7.g, v7.f, v7.a);
        }
        else if ( p0.l instanceof android.support.v4.app.al )
        {
          v8 = (android.support.v4.app.al)p0.l;
          v2.a(v8.e, v8.g, v8.f, v8.a, v8.b, v8.c);
        }
      }
      return v2.a();
    }

}
