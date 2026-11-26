// Decompiled from classes.dex (SourceFile: c$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$a extends com.google.android.gms.internal.mb {
    // Fields
    public int a;
    public int b;
    public int c;

    // Methods
    public c$a()
    {
      super();
      this.a = 1;
      this.b = 0;
      this.c = 0;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.c$a b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me {
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
                this.a = v4;
                break;
              default:
                continue;
            }
            continue;
          case 16:
            this.b = p0.e();
            continue;
          case 24:
            this.c = p0.e();
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

    private com.google.android.gms.internal.c$a d()
    {
      this.a = 1;
      this.b = 0;
      this.c = 0;
      this.r = null;
      this.s = -1;
      return this;
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      v1 = super.a();
      if ( this.a != 1 )
        v1 += ma.r(1, this.a);
      if ( this.b != 0 )
        v1 += ma.r(2, this.b);
      if ( this.c != 0 )
        v1 += ma.r(3, this.c);
      return v1;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me {
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
                this.a = v4;
                break;
              default:
                continue;
            }
            continue;
          case 16:
            this.b = p0.e();
            continue;
          case 24:
            this.c = p0.e();
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
      if ( this.a != 1 )
        p0.a(1, this.a);
      if ( this.b != 0 )
        p0.a(2, this.b);
      if ( this.c != 0 )
        p0.a(3, this.c);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.c$a v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$a )
        {
          v4 = (com.google.android.gms.internal.c$a)p0;
          if ( this.a == v4.a )
          {
            if ( this.b == v4.b )
            {
              if ( this.c == v4.c )
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
      return v2;
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      v1 = 31 * (31 * (31 * (this.a + 527) + this.b) + this.c);
      if ( this.r != null && !this.r.isEmpty() )
        v2 = this.r.hashCode();
      else
        v2 = 0;
      return v2 + v1;
    }

}
