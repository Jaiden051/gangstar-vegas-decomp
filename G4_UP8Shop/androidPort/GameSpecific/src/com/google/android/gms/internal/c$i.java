// Decompiled from classes.dex (SourceFile: c$i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$i extends com.google.android.gms.internal.mb {
    // Fields
    private static volatile com.google.android.gms.internal.c$i[] d;
    public java.lang.String a;
    public com.google.android.gms.internal.d$a b;
    public com.google.android.gms.internal.c$d c;

    // Methods
    public c$i()
    {
      super();
      this.a = "";
      this.b = null;
      this.c = null;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.c$i b(com.google.android.gms.internal.lz p0)
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
            if ( this.b == null )
              this.b = new com.google.android.gms.internal.d$a();
            p0.a(this.b);
            continue;
          case 26:
            if ( this.c == null )
              this.c = new com.google.android.gms.internal.c$d();
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

    private com.google.android.gms.internal.c$i d()
    {
      this.a = "";
      this.b = null;
      this.c = null;
      this.r = null;
      this.s = -1;
      return this;
    }

    public static com.google.android.gms.internal.c$i[] o()
    {
      com.google.android.gms.internal.c$i[] v0;
      Object v1;
      com.google.android.gms.internal.c$i[] v2;
      v0 = d;
      if ( v0 != null )
        return d;
      v1 = md.a;
      synchronized ( v1 )
      {
        v2 = d;
        if ( v2 == null )
          d = new com.google.android.gms.internal.c$i[0];
        return d;
      }
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      v1 = super.a();
      if ( !this.a.equals("") )
        v1 += ma.h(1, this.a);
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
          case 10:
            this.a = p0.g();
            continue;
          case 18:
            if ( this.b == null )
              this.b = new com.google.android.gms.internal.d$a();
            p0.a(this.b);
            continue;
          case 26:
            if ( this.c == null )
              this.c = new com.google.android.gms.internal.c$d();
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
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.ma$a, com.google.android.gms.internal.me {
      if ( !this.a.equals("") )
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
      com.google.android.gms.internal.c$i v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$i )
        {
          v4 = (com.google.android.gms.internal.c$i)p0;
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
      int v7;
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
      v5 = 31 * (v4 + v3);
      if ( this.c != null )
        v6 = this.c.hashCode();
      else
        v6 = 0;
      v7 = 31 * (v6 + v5);
      if ( this.r != null && !this.r.isEmpty() )
        v1 = this.r.hashCode();
      return v7 + v1;
    }

}
