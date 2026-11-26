// Decompiled from classes.dex (SourceFile: Crockford.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.billing.common;

public class Crockford {
    // Fields
    static final boolean a;
    private final char[] b;

    // Methods
    static
    {
      a = !com.gameloft.android.GAND.GloftGGSS.billing.common.Crockford.class.desiredAssertionStatus();
    }

    public Crockford()
    {
      super();
      this.b = "0123456789ABCDEFGHJKMNPQRSTVWXYZ".toCharArray();
    }

    private char[] a(byte[] p0)
    {
      char[] v2;
      int v3;
      int v4;
      long v5;
      long v6;
      long v8;
      long v9;
      byte v10;
      if ( !a && p0 == null )
        throw new AssertionError();
      if ( !a && p0.length > 1342177271 )
        throw new AssertionError();
      v2 = new char[(8 * ((p0.length + 4) / 5))];
      v3 = 0;
      v4 = 0;
      while ( v3 + 4 < p0.length )
      {
        v5 = ((long)(int)p0[v3] << 32)
           | ((long)(int)p0[v3 + 1] << 24)
           | ((long)(int)p0[v3 + 2] << 16)
           | ((long)(int)p0[v3 + 3] << 8)
           | (int)p0[v3 + 4];
        v2[v4] = this.b[(int)(v5 >> 35)];
        v2[v4 + 1] = this.b[(int)((v5 >> 30) & 0x1F)];
        v2[v4 + 2] = this.b[(int)((v5 >> 25) & 0x1F)];
        v2[v4 + 3] = this.b[(int)((v5 >> 20) & 0x1F)];
        v2[v4 + 4] = this.b[(int)((v5 >> 15) & 0x1F)];
        v2[v4 + 5] = this.b[(int)((v5 >> 10) & 0x1F)];
        v2[v4 + 6] = this.b[(int)((v5 >> 5) & 0x1F)];
        v2[v4 + 7] = this.b[(int)(v5 & 0x1F)];
        v3 += 5;
        v4 += 8;
      }
      if ( v3 + 4 == p0.length )
      {
        v6 = ((long)(int)p0[v3] << 32)
           | ((long)(int)p0[v3 + 1] << 24)
           | ((long)(int)p0[v3 + 2] << 16)
           | ((long)(int)p0[v3 + 3] << 8);
        v2[v4] = this.b[(int)(v6 >> 35)];
        v2[v4 + 1] = this.b[(int)((v6 >> 30) & 0x1F)];
        v2[v4 + 2] = this.b[(int)((v6 >> 25) & 0x1F)];
        v2[v4 + 3] = this.b[(int)((v6 >> 20) & 0x1F)];
        v2[v4 + 4] = this.b[(int)((v6 >> 15) & 0x1F)];
        v2[v4 + 5] = this.b[(int)((v6 >> 10) & 0x1F)];
        v2[v4 + 6] = this.b[(int)((v6 >> 5) & 0x1F)];
        v2[v4 + 7] = '=';
      }
      else if ( v3 + 3 == p0.length )
      {
        v8 = ((long)(int)p0[v3] << 32)
           | ((long)(int)p0[v3 + 1] << 24)
           | ((long)(int)p0[v3 + 2] << 16);
        v2[v4] = this.b[(int)(v8 >> 35)];
        v2[v4 + 1] = this.b[(int)((v8 >> 30) & 0x1F)];
        v2[v4 + 2] = this.b[(int)((v8 >> 25) & 0x1F)];
        v2[v4 + 3] = this.b[(int)((v8 >> 20) & 0x1F)];
        v2[v4 + 4] = this.b[(int)((v8 >> 15) & 0x1F)];
        v2[v4 + 5] = '=';
        v2[v4 + 6] = '=';
        v2[v4 + 7] = '=';
      }
      else if ( v3 + 2 == p0.length )
      {
        v9 = ((long)(int)p0[v3] << 32) | ((long)(int)p0[v3 + 1] << 24);
        v2[v4] = this.b[(int)(v9 >> 35)];
        v2[v4 + 1] = this.b[(int)((v9 >> 30) & 0x1F)];
        v2[v4 + 2] = this.b[(int)((v9 >> 25) & 0x1F)];
        v2[v4 + 3] = this.b[(int)((v9 >> 20) & 0x1F)];
        v2[v4 + 4] = '=';
        v2[v4 + 5] = '=';
        v2[v4 + 6] = '=';
        v2[v4 + 7] = '=';
      }
      else if ( v3 + 1 == p0.length )
      {
        v10 = p0[v3];
        v2[v4] = this.b[(int)((v10 & 0xFF) >> 3)];
        v2[v4 + 1] = this.b[(int)((4 * (v10 & 0xFF)) & 0x1F)];
        v2[v4 + 2] = '=';
        v2[v4 + 3] = '=';
        v2[v4 + 4] = '=';
        v2[v4 + 5] = '=';
        v2[v4 + 6] = '=';
        v2[v4 + 7] = '=';
      }
      return (char[])v2;
    }

}
