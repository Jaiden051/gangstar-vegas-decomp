// Decompiled from classes.dex (SourceFile: iw$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class iw$a$a extends com.google.android.gms.internal.mb {
    // Fields
    private static volatile com.google.android.gms.internal.iw$a$a[] d;
    public java.lang.String a;
    public java.lang.String b;
    public int c;

    // Methods
    public iw$a$a()
    {
      super();
      this.a = "";
      this.b = "";
      this.c = 0;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.iw$a$a b(com.google.android.gms.internal.lz p0)
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
          case 18:
            this.b = p0.g();
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

    private com.google.android.gms.internal.iw$a$a d()
    {
      this.a = "";
      this.b = "";
      this.c = 0;
      this.r = null;
      this.s = -1;
      return this;
    }

    public static com.google.android.gms.internal.iw$a$a[] iM()
    {
      com.google.android.gms.internal.iw$a$a[] v0;
      Object v1;
      com.google.android.gms.internal.iw$a$a[] v2;
      v0 = d;
      if ( v0 != null )
        return d;
      v1 = md.a;
      synchronized ( v1 )
      {
        v2 = d;
        if ( v2 == null )
          d = new com.google.android.gms.internal.iw$a$a[0];
        return d;
      }
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      v1 = super.a();
      if ( !this.a.equals("") )
        v1 += ma.h(1, this.a);
      if ( !this.b.equals("") )
        v1 += ma.h(2, this.b);
      if ( this.c != 0 )
        v1 += ma.r(3, this.c);
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
          case 18:
            this.b = p0.g();
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
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.ma$a, com.google.android.gms.internal.me {
      if ( !this.a.equals("") )
        p0.a(1, this.a);
      if ( !this.b.equals("") )
        p0.a(2, this.b);
      if ( this.c != 0 )
        p0.a(3, this.c);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.iw$a$a v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.iw$a$a )
        {
          v4 = (com.google.android.gms.internal.iw$a$a)p0;
          if ( this.a != null )
          {
            if ( !this.a.equals(v4.a) )
              return false;
          }
          else if ( v4.a != null )
          {
            return false;
          }
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
      v1 = 0;
      if ( this.a != null )
        v2 = this.a.hashCode();
      else
        v2 = 0;
      v3 = 31 * (v2 + 527);
      if ( this.b != null )
        v4 = this.b.hashCode();
      else
        v4 = 0;
      v5 = 31 * (31 * (v4 + v3) + this.c);
      if ( this.r != null && !this.r.isEmpty() )
        v1 = this.r.hashCode();
      return v5 + v1;
    }

}
