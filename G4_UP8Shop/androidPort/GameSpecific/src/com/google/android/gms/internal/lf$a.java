// Decompiled from classes.dex (SourceFile: lf$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class lf$a extends com.google.android.gms.internal.mb {
    // Fields
    public long a;
    public com.google.android.gms.internal.c$f b;
    public com.google.android.gms.internal.c$j c;

    // Methods
    public lf$a()
    {
      super();
      this.a = 0;
      this.b = null;
      this.c = null;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.lf$a b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
    
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            this.a = p0.d();
            continue;
          case 18:
            if ( this.b == null )
              this.b = new com.google.android.gms.internal.c$f();
            p0.a(this.b);
            continue;
          case 26:
            if ( this.c == null )
              this.c = new com.google.android.gms.internal.c$j();
            p0.a(this.c);
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

    private com.google.android.gms.internal.lf$a d()
    {
      this.a = 0;
      this.b = null;
      this.c = null;
      this.r = null;
      this.s = -1;
      return this;
    }

    public static com.google.android.gms.internal.lf$a l(byte[] p0)
 throws com.google.android.gms.internal.me {
      return (com.google.android.gms.internal.lf$a)mf.a(new com.google.android.gms.internal.lf$a(), p0);
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      v1 = super.a() + ma.d(1, this.a);
      if ( this.b != null )
        v1 += ma.b(2, this.b);
      if ( this.c != null )
        v1 += ma.b(3, this.c);
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
          case 8:
            this.a = p0.d();
            continue;
          case 18:
            if ( this.b == null )
              this.b = new com.google.android.gms.internal.c$f();
            p0.a(this.b);
            continue;
          case 26:
            if ( this.c == null )
              this.c = new com.google.android.gms.internal.c$j();
            p0.a(this.c);
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
 throws com.google.android.gms.internal.ma$a, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      p0.a(1, this.a);
      if ( this.b != null )
        p0.a(2, this.b);
      if ( this.c != null )
        p0.a(3, this.c);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.lf$a v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.lf$a )
        {
          v4 = (com.google.android.gms.internal.lf$a)p0;
          if ( this.a == v4.a )
          {
            if ( this.b != null )
            {
              if ( !this.b.equals(v4.b) )
                return false;
            }
            else if ( v4.b != null )
            {
              return false;
            }
            if ( this.c != null )
            {
              if ( !this.c.equals(v4.c) )
                return false;
            }
            else if ( v4.c != null )
            {
              return false;
            }
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
      return v2;
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      v1 = 0;
      v2 = (int)(31 * ((this.a ^ com.gameloft.android.DecompRT.hi32(this.a)) + 527));
      if ( this.b != null )
        v3 = this.b.hashCode();
      else
        v3 = 0;
      v4 = 31 * (v3 + v2);
      if ( this.c != null )
        v5 = this.c.hashCode();
      else
        v5 = 0;
      v6 = 31 * (v5 + v4);
      if ( this.r != null && !this.r.isEmpty() )
        v1 = this.r.hashCode();
      return v6 + v1;
    }

}
