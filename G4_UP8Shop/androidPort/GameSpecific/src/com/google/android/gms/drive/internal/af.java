// Decompiled from classes.dex (SourceFile: af.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.internal.ma;
import com.google.android.gms.internal.mf;
public final class af extends com.google.android.gms.internal.mb {
    // Fields
    public int a;
    public java.lang.String b;
    public long c;
    public long d;

    // Methods
    public af()
    {
      super();
      this.a = 1;
      this.b = "";
      this.c = -1;
      this.d = -1;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.drive.internal.af b(com.google.android.gms.internal.lz p0)
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
            this.a = p0.e();
            continue;
          case 18:
            this.b = p0.g();
            continue;
          case 24:
            this.c = p0.j();
            continue;
          case 32:
            this.d = p0.j();
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

    private com.google.android.gms.drive.internal.af d()
    {
      this.a = 1;
      this.b = "";
      this.c = -1;
      this.d = -1;
      this.r = null;
      this.s = -1;
      return this;
    }

    public static com.google.android.gms.drive.internal.af g(byte[] p0)
 throws com.google.android.gms.internal.me {
      return (com.google.android.gms.drive.internal.af)mf.a(new com.google.android.gms.drive.internal.af(), p0);
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      return super.a() + ma.r(1, this.a) + ma.h(2, this.b) + ma.e(3, this.c) + ma.e(4, this.d);
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
            this.a = p0.e();
            continue;
          case 18:
            this.b = p0.g();
            continue;
          case 24:
            this.c = p0.j();
            continue;
          case 32:
            this.d = p0.j();
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
      p0.a(1, this.a);
      p0.a(2, this.b);
      p0.b(3, this.c);
      p0.b(4, this.d);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.drive.internal.af v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.drive.internal.af )
        {
          v4 = (com.google.android.gms.drive.internal.af)p0;
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
            if ( this.c == v4.c )
            {
              if ( this.d == v4.d )
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
      int v3;
      int v4;
      v1 = 0;
      v2 = 31 * (this.a + 527);
      if ( this.b != null )
        v3 = this.b.hashCode();
      else
        v3 = 0;
      v4 = (int)(31 * (31 * (31 * (v3 + v2) + (this.c ^ com.gameloft.android.DecompRT.hi32(this.c))) + (this.d ^ com.gameloft.android.DecompRT.hi32(this.d))));
      if ( this.r != null && !this.r.isEmpty() )
        v1 = this.r.hashCode();
      return v4 + v1;
    }

}
