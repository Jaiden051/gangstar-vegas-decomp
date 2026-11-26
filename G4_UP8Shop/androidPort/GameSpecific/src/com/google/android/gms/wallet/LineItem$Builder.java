// Decompiled from classes.dex (SourceFile: LineItem$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class LineItem$Builder {
    // Fields
    final com.google.android.gms.wallet.LineItem a;

    // Methods
    private LineItem$Builder(com.google.android.gms.wallet.LineItem p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ LineItem$Builder(com.google.android.gms.wallet.LineItem p0, int p1)
    {
      this(p0);
    }

    private com.google.android.gms.wallet.LineItem$Builder a(int p0)
    {
      this.a.e = p0;
      return this;
    }

    private com.google.android.gms.wallet.LineItem$Builder a(String p0)
    {
      this.a.a = p0;
      return this;
    }

    private com.google.android.gms.wallet.LineItem a()
    {
      return this.a;
    }

    private com.google.android.gms.wallet.LineItem$Builder b(String p0)
    {
      this.a.b = p0;
      return this;
    }

    private com.google.android.gms.wallet.LineItem$Builder c(String p0)
    {
      this.a.c = p0;
      return this;
    }

    private com.google.android.gms.wallet.LineItem$Builder d(String p0)
    {
      this.a.d = p0;
      return this;
    }

    private com.google.android.gms.wallet.LineItem$Builder e(String p0)
    {
      this.a.f = p0;
      return this;
    }

}
