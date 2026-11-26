// Decompiled from classes.dex (SourceFile: v$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class v$c {
    // Fields
    public final com.google.android.gms.internal.v$a a;
    public final java.lang.String b;
    public final android.content.Context c;
    public final com.google.android.gms.internal.l d;
    public final com.google.android.gms.internal.ew e;
    public com.google.android.gms.internal.aq f;
    public com.google.android.gms.internal.en g;
    public com.google.android.gms.internal.am h;
    public com.google.android.gms.internal.eg i;
    public com.google.android.gms.internal.eh j;
    public com.google.android.gms.internal.at k;
    public com.google.android.gms.internal.dh l;
    public com.google.android.gms.internal.dd m;
    public com.google.android.gms.internal.da n;
    public com.google.android.gms.internal.el o;
    public boolean p;
    private java.util.HashSet q;

    // Methods
    public v$c(
            android.content.Context p0,
            com.google.android.gms.internal.am p1,
            String p2,
            com.google.android.gms.internal.ew p3)
    {
      super();
      this.o = null;
      this.p = false;
      this.q = null;
      if ( p1.e )
      {
        this.a = null;
      }
      else
      {
        this.a = new com.google.android.gms.internal.v$a(p0);
        this.a.setMinimumWidth(p1.g);
        this.a.setMinimumHeight(p1.d);
        this.a.setVisibility(4);
      }
      this.h = p1;
      this.b = p2;
      this.c = p0;
      this.e = p3;
      this.d = new com.google.android.gms.internal.l((com.google.android.gms.internal.h)new com.google.android.gms.internal.v$b(this));
    }

    public final java.util.HashSet<com.google.android.gms.internal.eh> a()
    {
      return this.q;
    }

    public final void a(java.util.HashSet<com.google.android.gms.internal.eh> p0)
    {
      this.q = p0;
    }

}
