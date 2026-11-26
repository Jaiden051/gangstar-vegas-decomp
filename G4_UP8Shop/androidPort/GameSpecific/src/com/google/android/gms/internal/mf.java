// Decompiled from classes.dex (SourceFile: mf.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class mf {
    // Fields
    protected volatile int s;

    // Methods
    public mf()
    {
      super();
      this.s = -1;
    }

    public static final <T extends com.google.android.gms.internal.mf> T a(T p0, byte[] p1)
 throws com.google.android.gms.internal.me {
      return b(p0, p1, 0, p1.length);
    }

    public static final void a(com.google.android.gms.internal.mf p0, byte[] p1, int p2, int p3)
 {
      com.google.android.gms.internal.ma v4; // RETVAL
    
      try
      {
        v4 = ma.b(p1, p2, p3);
        p0.a(v4);
        v4.b();
      }
      catch ( java.io.IOException v5 )
      {
        throw new RuntimeException("Serializing to a byte array threw an IOException (should never happen).", v5);
      }
    }

    public static final <T extends com.google.android.gms.internal.mf> T b(T p0, byte[] p1, int p2, int p3)
 throws com.google.android.gms.internal.me {
      com.google.android.gms.internal.lz v4;
      try
      {
        v4 = lz.a(p1, p2, p3);
        p0.a(v4);
        v4.a(0);
        return p0;
      }
      catch ( com.google.android.gms.internal.me v6 )
      {
        throw v6;
      }
      catch ( java.io.IOException e )
      {
        throw new RuntimeException("Reading from a byte array threw an IOException (should never happen).");
      }
    }

    public static final byte[] d(com.google.android.gms.internal.mf p0)
    {
      try
      {
        byte[] v1;
        v1 = new byte[p0.c()];
        a(p0, v1, 0, v1.length);
        return (byte[])v1;
      }
      catch ( java.io.IOException e )
      {
        throw new RuntimeException(e);
      }
    }

    protected int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      return 0;
    }

    public abstract com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0) throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException;

    public void a(com.google.android.gms.internal.ma p0)
 throws com.google.android.gms.internal.ma$a, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      ;
    }

    public final int b()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int s;
      s = this.s;
      if ( s < 0 )
        this.c();
      return this.s;
    }

    public final int c()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int result; // RETVAL
    
      result = this.a();
      this.s = result;
      return result;
    }

    public String toString()
    {
      return mg.e(this);
    }

}
