// Decompiled from classes.dex (SourceFile: c$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$e extends com.google.android.gms.internal.mb {
    // Fields
    private static volatile com.google.android.gms.internal.c$e[] c;
    public int a;
    public int b;

    // Methods
    public c$e()
    {
      super();
      this.a = 0;
      this.b = 0;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.c$e b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me {
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
          case 16:
            this.b = p0.e();
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

    private com.google.android.gms.internal.c$e d()
    {
      this.a = 0;
      this.b = 0;
      this.r = null;
      this.s = -1;
      return this;
    }

    public static com.google.android.gms.internal.c$e[] i()
    {
      com.google.android.gms.internal.c$e[] v0;
      Object v1;
      com.google.android.gms.internal.c$e[] v2;
      v0 = c;
      if ( v0 != null )
        return c;
      v1 = md.a;
      synchronized ( v1 )
      {
        v2 = c;
        if ( v2 == null )
          c = new com.google.android.gms.internal.c$e[0];
        return c;
      }
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      return super.a() + ma.r(1, this.a) + ma.r(2, this.b);
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me {
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
          case 16:
            this.b = p0.e();
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
      p0.a(2, this.b);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.c$e v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$e )
        {
          v4 = (com.google.android.gms.internal.c$e)p0;
          if ( this.a == v4.a )
          {
            if ( this.b == v4.b )
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
      return v2;
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      v1 = 31 * (31 * (this.a + 527) + this.b);
      if ( this.r != null && !this.r.isEmpty() )
        v2 = this.r.hashCode();
      else
        v2 = 0;
      return v2 + v1;
    }

}
