// Decompiled from classes.dex (SourceFile: ly.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ly {
    // Fields
    private final byte[] a;
    private int b;
    private int c;

    // Methods
    public ly(byte[] p0)
    {
      super();
      int i;
      int v3;
      int j;
      this.a = new byte[256];
      for ( i = 0; i < 256; ++i )
        this.a[i] = (byte)i;
      v3 = (0);
      for ( j = 0; j < 256; ++j )
      {
        v3 = (int)(v3 + this.a[j] + p0[j % p0.length]);
        this.a[j] = this.a[v3];
        this.a[v3] = this.a[j];
      }
      this.b = 0;
      this.c = 0;
    
    }

    public final void a(byte[] p0)
    {
      int b;
      int c;
      int i;
      b = this.b;
      c = this.c;
      for ( i = 0; i < p0.length; ++i )
      {
        b = (int)(b + 1);
        c = (int)(c + this.a[b]);
        this.a[b] = this.a[c];
        this.a[c] = this.a[b];
        p0[i] = (byte)(p0[i] ^ this.a[(int)(this.a[b] + this.a[c])]);
      }
      this.b = b;
      this.c = c;
    }

}
