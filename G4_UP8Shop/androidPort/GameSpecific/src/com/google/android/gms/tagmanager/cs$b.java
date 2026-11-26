// Decompiled from classes.dex (SourceFile: cs$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cs$b {
    // Fields
    private com.google.android.gms.tagmanager.by a;
    private com.google.android.gms.internal.d$a b;

    // Methods
    public cs$b(
            com.google.android.gms.tagmanager.by<com.google.android.gms.internal.d$a> p0,
            com.google.android.gms.internal.d$a p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.tagmanager.by<com.google.android.gms.internal.d$a> a()
    {
      return this.a;
    }

    public final com.google.android.gms.internal.d$a b()
    {
      return this.b;
    }

    public final int c()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      int v2;
      v1 = ((com.google.android.gms.internal.d$a)this.a.a()).b();
      if ( this.b != null )
        v2 = this.b.b();
      else
        v2 = 0;
      return v2 + v1;
    }

}
