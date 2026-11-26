// Decompiled from classes.dex (SourceFile: iw$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class iw$a extends com.google.android.gms.internal.mb {
    // Fields
    public com.google.android.gms.internal.iw$a$a[] a;

    // Methods
    public iw$a()
    {
      super();
      this.a = iw$a$a.iM();
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.iw$a b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      com.google.android.gms.internal.iw$a$a[] v6;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            v4 = mi.b(p0, 10);
            if ( this.a != null )
              v5 = this.a.length;
            else
              v5 = 0;
            v6 = new com.google.android.gms.internal.iw$a$a[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.a, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = new com.google.android.gms.internal.iw$a$a();
              p0.a(v6[v5]);
              p0.a();
              ++v5;
            }
            v6[v5] = new com.google.android.gms.internal.iw$a$a();
            p0.a(v6[v5]);
            this.a = (com.google.android.gms.internal.iw$a$a[])v6;
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

    private com.google.android.gms.internal.iw$a d()
    {
      this.a = iw$a$a.iM();
      this.r = null;
      this.s = -1;
      return this;
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      int i;
      com.google.android.gms.internal.iw$a$a v3;
      v1 = super.a();
      if ( this.a != null && this.a.length > 0 )
      {
        for ( i = 0; i < this.a.length; ++i )
        {
          v3 = this.a[i];
          if ( v3 != null )
            v1 += ma.b(1, v3);
        }
      }
      return v1;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      com.google.android.gms.internal.iw$a$a[] v6;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            v4 = mi.b(p0, 10);
            if ( this.a != null )
              v5 = this.a.length;
            else
              v5 = 0;
            v6 = new com.google.android.gms.internal.iw$a$a[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.a, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = new com.google.android.gms.internal.iw$a$a();
              p0.a(v6[v5]);
              p0.a();
              ++v5;
            }
            v6[v5] = new com.google.android.gms.internal.iw$a$a();
            p0.a(v6[v5]);
            this.a = (com.google.android.gms.internal.iw$a$a[])v6;
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
      int i;
      com.google.android.gms.internal.iw$a$a v3;
      if ( this.a != null && this.a.length > 0 )
      {
        for ( i = 0; i < this.a.length; ++i )
        {
          v3 = this.a[i];
          if ( v3 != null )
            p0.a(1, v3);
        }
      }
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.iw$a v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.iw$a )
        {
          v4 = (com.google.android.gms.internal.iw$a)p0;
          if ( md.equals(this.a, v4.a) )
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
      return v2;
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      v1 = 31 * (md.hashCode(this.a) + 527);
      if ( this.r != null && !this.r.isEmpty() )
        v2 = this.r.hashCode();
      else
        v2 = 0;
      return v2 + v1;
    }

}
