// Decompiled from classes.dex (SourceFile: fq$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class fq$a {
    // Fields
    private final java.lang.String a;
    private java.lang.String b;
    private boolean c;
    private int d;
    private boolean e;
    private java.lang.String f;
    private final java.util.List g;
    private java.util.BitSet h;
    private java.lang.String i;

    // Methods
    public fq$a(String p0)
    {
      super();
      this.a = p0;
      this.d = 1;
      this.g = new java.util.ArrayList();
    }

    public final com.google.android.gms.internal.fq$a a(int p0)
    {
      if ( this.h == null )
        this.h = new java.util.BitSet();
      this.h.set(p0);
      return this;
    }

    public final com.google.android.gms.internal.fq$a a(String p0)
    {
      this.b = p0;
      return this;
    }

    public final com.google.android.gms.internal.fq$a a(boolean p0)
    {
      this.c = true;
      return this;
    }

    public final com.google.android.gms.internal.fq a()
    {
      int v1;
      int[] v2;
      int SetBit;
      v1 = 0;
      v2 = null;
      if ( this.h != null )
      {
        v2 = new int[this.h.cardinality()];
        SetBit = this.h.nextSetBit(0);
        while ( SetBit >= 0 )
        {
          v2[v1] = SetBit;
          SetBit = this.h.nextSetBit(SetBit + 1);
          ++v1;
        }
      }
      return new com.google.android.gms.internal.fq(this.a, this.b, this.c, this.d, this.e, this.f, (com.google.android.gms.internal.fn[])this.g.toArray(new com.google.android.gms.internal.fn[this.g.size()]), v2, this.i);
    }

    public final com.google.android.gms.internal.fq$a b(String p0)
    {
      this.i = p0;
      return this;
    }

    public final com.google.android.gms.internal.fq$a b(boolean p0)
    {
      this.e = true;
      return this;
    }

}
