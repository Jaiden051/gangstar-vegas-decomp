// Decompiled from classes.dex (SourceFile: Downloader.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
public final class Downloader implements com.gameloft.android.GAND.GloftGGSS.installer.utils.c {
    // Fields
    public static boolean g;
    public java.lang.String a;
    public java.lang.String b;
    public long c;
    public int d;
    public boolean e;
    public boolean f;
    java.util.ArrayList h;
    java.util.Vector i;
    private int j;
    private int k;
    private final int l;

    // Methods
    public Downloader(
            String p0,
            String p1,
            java.util.Vector<com.gameloft.android.GAND.GloftGGSS.installer.utils.i> p2,
            int p3,
            long p4)
    {
      super();
      this.a = "";
      this.b = "";
      this.c = 0;
      this.d = 0;
      this.j = 0;
      this.k = 0;
      this.l = 0x100000;
      this.d = p3;
      this.i = p2;
      this.a = p0;
      this.b = p1;
      this.c = p4;
      try
      {
        this.a();
      }
      catch ( Exception e )
      {
        GameInstaller.addErrorNumber(551);
        this.f = true;
      }
    }

    private void a(int p0)
    {
      this.d = p0;
    }

    private void a(long p0)
    {
      java.util.Vector v2;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7; // RETVAL
      int i;
      int j;
      this.h = new java.util.ArrayList();
      this.j = 0;
      if ( this.i.size() != 0 )
      {
        v2 = new java.util.Vector();
        v3 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(0)).h();
        v4 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(0)).f();
        v2.add(this.i.get(0));
        v5 = 1;
        v6 = v3;
        while ( v5 < this.i.size() )
        {
          if ( v6 + 1 == ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v5)).h() && v4 < p0 )
          {
            v2.add(this.i.get(v5));
            v4 += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v5)).f();
          }
          else
          {
            this.h.add(new com.gameloft.android.GAND.GloftGGSS.installer.utils.Section(this.a, this.b, v2, this.d, this.h.size()));
            ++this.j;
            v2 = new java.util.Vector();
            v2.add(this.i.get(v5));
            v4 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v5)).f();
          }
          v7 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v5++)).h();
          v6 = v7;
        }
        this.h.add(new com.gameloft.android.GAND.GloftGGSS.installer.utils.Section(this.a, this.b, v2, this.d, this.h.size()));
        ++this.j;
        for ( i = 0; i < this.j; ++i )
        {
          for ( j = 0; j < ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(i)).g().size(); ++j )
            ;
        }
      }
    }

    private void f()
    {
      long v1;
      long v2;
      java.util.Vector v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8; // RETVAL
      int i;
      int j;
      this.k = 0;
      v1 = this.c / 5;
      if ( v1 <= 20971520 )
        v2 = v1;
      else
        v2 = 20971520;
      this.h = new java.util.ArrayList();
      this.j = 0;
      if ( this.i.size() != 0 )
      {
        v3 = new java.util.Vector();
        v4 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(0)).h();
        v5 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(0)).f();
        v3.add(this.i.get(0));
        v6 = 1;
        v7 = v4;
        while ( v6 < this.i.size() )
        {
          if ( v7 + 1 == ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v6)).h() && v5 < v2 )
          {
            v3.add(this.i.get(v6));
            v5 += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v6)).f();
          }
          else
          {
            this.h.add(new com.gameloft.android.GAND.GloftGGSS.installer.utils.Section(this.a, this.b, v3, this.d, this.h.size()));
            ++this.j;
            v3 = new java.util.Vector();
            v3.add(this.i.get(v6));
            v5 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v6)).f();
          }
          v8 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v6++)).h();
          v7 = v8;
        }
        this.h.add(new com.gameloft.android.GAND.GloftGGSS.installer.utils.Section(this.a, this.b, v3, this.d, this.h.size()));
        ++this.j;
        for ( i = 0; i < this.j; ++i )
        {
          for ( j = 0; j < ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(i)).g().size(); ++j )
            ;
        }
      }
    }

    private String g()
    {
      return this.b + "/joinedFile.zip";
    }

    private int h()
    {
      int v1;
      int v2;
      v1 = 0;
      v2 = 0;
      while ( v1 < this.j )
        v2 += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(v1++)).f();
      return v2;
    }

    private static void pause()
    {
      g = true;
    }

    private static void resume()
    {
      g = false;
    }

    public final void a()
 throws Exception {
      long v1;
      long v2;
      java.util.Vector v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8; // RETVAL
      int i;
      int j;
      if ( this.i == null || this.i.size() <= 0 )
        throw new Exception();
      this.k = 0;
      v1 = this.c / 5;
      if ( v1 <= 20971520 )
        v2 = v1;
      else
        v2 = 20971520;
      this.h = new java.util.ArrayList();
      this.j = 0;
      if ( this.i.size() != 0 )
      {
        v3 = new java.util.Vector();
        v4 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(0)).h();
        v5 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(0)).f();
        v3.add(this.i.get(0));
        v6 = 1;
        v7 = v4;
        while ( v6 < this.i.size() )
        {
          if ( v7 + 1 == ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v6)).h() && v5 < v2 )
          {
            v3.add(this.i.get(v6));
            v5 += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v6)).f();
          }
          else
          {
            this.h.add(new com.gameloft.android.GAND.GloftGGSS.installer.utils.Section(this.a, this.b, v3, this.d, this.h.size()));
            ++this.j;
            v3 = new java.util.Vector();
            v3.add(this.i.get(v6));
            v5 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v6)).f();
          }
          v8 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.i.get(v6++)).h();
          v7 = v8;
        }
        this.h.add(new com.gameloft.android.GAND.GloftGGSS.installer.utils.Section(this.a, this.b, v3, this.d, this.h.size()));
        ++this.j;
        for ( i = 0; i < this.j; ++i )
        {
          for ( j = 0; j < ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(i)).g().size(); ++j )
            ;
        }
      }
      this.e = false;
      g = false;
    }

    public final void a(java.util.Vector<com.gameloft.android.GAND.GloftGGSS.installer.utils.i> p0)
    {
      this.i = p0;
      this.f = false;
      try
      {
        this.a();
      }
      catch ( Exception e )
      {
        GameInstaller.addErrorNumber(552);
        this.f = true;
      }
    }

    public final void b()
    {
      int j;
      int i;
      j = 5;
      if ( this.f )
        return;
      try
      {
        if ( this.j < 5 )
          j = this.j;
        for ( i = 0; i < j; ++i )
        {
          ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(i)).start();
          ++this.k;
        }
      }
      catch ( Exception e )
      {
        GameInstaller.addErrorNumber(553);
        this.f = true;
      }
    }

    public final void c()
    {
      int v1;
      int v2;
      int v3;
      if ( this.f )
      {
        this.d();
      }
      else
      {
        v1 = 0;
        v2 = 0;
        v3 = 0;
        while ( v1 < this.j )
        {
          if ( ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(v1)).c() )
          {
            if ( ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(v1)).d() )
            {
              ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(v1)).a();
              this.h.set(v1, new com.gameloft.android.GAND.GloftGGSS.installer.utils.Section((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(v1)));
              ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(v1)).start();
            }
            else
            {
              ++v2;
            }
          }
          else if ( ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(v1)).b() )
          {
            ++v3;
          }
          ++v1;
        }
        if ( v2 > 0 && v2 + v3 == this.j )
        {
          this.f = true;
          this.d();
        }
        else
        {
          if ( this.k - (v2 + v3) < 5 && this.k < this.j )
          {
            ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(this.k)).start();
            ++this.k;
          }
          if ( v2 + v3 >= this.j )
            this.e = true;
        }
      }
    }

    public final void d()
    {
      int v1;
      v1 = 0;
      try
      {
        while ( true )
        {
        if ( true )
        {
          if ( v1 >= this.h.size() )
            return;
          if ( this.h.get(v1) != null )
            ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(v1)).a();
          ++v1;
          continue;
        }
        break;
      }
      }
      catch ( Throwable _ehEx )
      {
        if ( (_ehEx instanceof Exception) )
        {
GameInstaller.addErrorNumber(554);
          this.f = true;
        }
      if ( _ehEx instanceof Error ) throw (Error)_ehEx;
      if ( _ehEx instanceof RuntimeException ) throw (RuntimeException)_ehEx;
}
    }

    public final long e()
    {
      long v1;
      int i;
      v1 = 0;
      for ( i = 0; i < this.j; ++i )
        v1 += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.Section)this.h.get(i)).e();
      return v1;
    }

}
