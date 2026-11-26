// Decompiled from classes.dex (SourceFile: c$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$c extends com.google.android.gms.internal.mb {
    // Fields
    private static volatile com.google.android.gms.internal.c$c[] f;
    public java.lang.String a;
    public long b;
    public long c;
    public boolean d;
    public long e;

    // Methods
    public c$c()
    {
      super();
      this.a = "";
      this.b = 0;
      this.c = 0x7FFFFFFF;
      this.d = false;
      this.e = 0;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.c$c b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
    
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            this.a = p0.g();
            continue;
          case 16:
            this.b = p0.d();
            continue;
          case 24:
            this.c = p0.d();
            continue;
          case 32:
            this.d = p0.f();
            continue;
          case 40:
            this.e = p0.d();
            continue;
          default:
            if ( this.a(p0, v2) )
              continue;
            break;
        }
        break;
      }
      return this;
    }

    private com.google.android.gms.internal.c$c d()
    {
      this.a = "";
      this.b = 0;
      this.c = 0x7FFFFFFF;
      this.d = false;
      this.e = 0;
      this.r = null;
      this.s = -1;
      return this;
    }

    public static com.google.android.gms.internal.c$c[] f()
    {
      com.google.android.gms.internal.c$c[] v0;
      Object v1;
      com.google.android.gms.internal.c$c[] v2;
      v0 = f;
      if ( v0 != null )
        return f;
      v1 = md.a;
      synchronized ( v1 )
      {
        v2 = f;
        if ( v2 == null )
          f = new com.google.android.gms.internal.c$c[0];
        return f;
      }
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      v1 = super.a();
      if ( !this.a.equals("") )
        v1 += ma.h(1, this.a);
      if ( this.b != 0 )
        v1 += ma.d(2, this.b);
      if ( this.c != 0x7FFFFFFF )
        v1 += ma.d(3, this.c);
      if ( this.d )
        v1 += ma.b(4, this.d);
      if ( this.e != 0 )
        v1 += ma.d(5, this.e);
      return v1;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
    
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            this.a = p0.g();
            continue;
          case 16:
            this.b = p0.d();
            continue;
          case 24:
            this.c = p0.d();
            continue;
          case 32:
            this.d = p0.f();
            continue;
          case 40:
            this.e = p0.d();
            continue;
          default:
            if ( this.a(p0, v2) )
              continue;
            break;
        }
        break;
      }
      return this;
    }

    public final void a(com.google.android.gms.internal.ma p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.ma$a, com.google.android.gms.internal.me {
      if ( !this.a.equals("") )
        p0.a(1, this.a);
      if ( this.b != 0 )
        p0.a(2, this.b);
      if ( this.c != 0x7FFFFFFF )
        p0.a(3, this.c);
      if ( this.d )
        p0.a(4, this.d);
      if ( this.e != 0 )
        p0.a(5, this.e);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.c$c v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$c )
        {
          v4 = (com.google.android.gms.internal.c$c)p0;
          if ( this.a != null )
          {
            if ( !this.a.equals(v4.a) )
              return false;
          }
          else if ( v4.a != null )
          {
            return false;
          }
          if ( this.b == v4.b )
          {
            if ( this.c == v4.c )
            {
              if ( this.d == v4.d )
              {
                if ( this.e == v4.e )
                {
                  if ( this.r != null && !this.r.isEmpty() )
                  {
                    return this.r.equals(v4.r);
                  }
                  else if ( v4.r != null && !v4.r.isEmpty() )
                  {
                    return false;
                  }
                }
                else
                {
                  return false;
                }
              }
              else
              {
                return false;
              }
            }
            else
            {
              return false;
            }
          }
          else
          {
            return false;
          }
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      int v3;
      int v4;
      int v5;
      v1 = 0;
      if ( this.a != null )
        v2 = this.a.hashCode();
      else
        v2 = 0;
      v3 = (int)(31 * (31 * (31 * (v2 + 527) + (this.b ^ com.gameloft.android.DecompRT.hi32(this.b))) + (this.c ^ com.gameloft.android.DecompRT.hi32(this.c))));
      if ( this.d )
        v4 = 1231;
      else
        v4 = 1237;
      v5 = (int)(31 * (31 * (v4 + v3) + (this.e ^ com.gameloft.android.DecompRT.hi32(this.e))));
      if ( this.r != null && !this.r.isEmpty() )
        v1 = this.r.hashCode();
      return v5 + v1;
    }

}
