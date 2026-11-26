// Decompiled from classes.dex (SourceFile: lx$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class lx$a$a extends com.google.android.gms.internal.mb {
    // Fields
    private static volatile com.google.android.gms.internal.lx$a$a[] c;
    public int a;
    public com.google.android.gms.internal.lx$a$a$a b;

    // Methods
    public lx$a$a()
    {
      super();
      this.a = 1;
      this.b = null;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.lx$a$a b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
    
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            v4 = p0.e();
            switch ( v4 )
            {
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
              case 10:
              case 11:
              case 12:
              case 13:
              case 14:
              case 15:
                this.a = v4;
                break;
              default:
                continue;
            }
            continue;
          case 18:
            if ( this.b == null )
              this.b = new com.google.android.gms.internal.lx$a$a$a();
            p0.a(this.b);
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

    private com.google.android.gms.internal.lx$a$a d()
    {
      this.a = 1;
      this.b = null;
      this.r = null;
      this.s = -1;
      return this;
    }

    public static com.google.android.gms.internal.lx$a$a[] nt()
    {
      com.google.android.gms.internal.lx$a$a[] v0;
      Object v1;
      com.google.android.gms.internal.lx$a$a[] v2;
      v0 = c;
      if ( v0 != null )
        return c;
      v1 = md.a;
      synchronized ( v1 )
      {
        v2 = c;
        if ( v2 == null )
          c = new com.google.android.gms.internal.lx$a$a[0];
        return c;
      }
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      v1 = super.a() + ma.r(1, this.a);
      if ( this.b != null )
        v1 += ma.b(2, this.b);
      return v1;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
    
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            v4 = p0.e();
            switch ( v4 )
            {
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
              case 10:
              case 11:
              case 12:
              case 13:
              case 14:
              case 15:
                this.a = v4;
                break;
              default:
                continue;
            }
            continue;
          case 18:
            if ( this.b == null )
              this.b = new com.google.android.gms.internal.lx$a$a$a();
            p0.a(this.b);
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
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.lx$a$a v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.lx$a$a )
        {
          v4 = (com.google.android.gms.internal.lx$a$a)p0;
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
      v1 = 0;
      v2 = 31 * (this.a + 527);
      if ( this.b != null )
        v3 = this.b.hashCode();
      else
        v3 = 0;
      v4 = 31 * (v3 + v2);
      if ( this.r != null && !this.r.isEmpty() )
        v1 = this.r.hashCode();
      return v4 + v1;
    }

}
