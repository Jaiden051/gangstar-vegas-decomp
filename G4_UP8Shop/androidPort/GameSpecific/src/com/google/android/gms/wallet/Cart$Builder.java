// Decompiled from classes.dex (SourceFile: Cart$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class Cart$Builder {
    // Fields
    final com.google.android.gms.wallet.Cart a;

    // Methods
    private Cart$Builder(com.google.android.gms.wallet.Cart p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ Cart$Builder(com.google.android.gms.wallet.Cart p0, int p1)
    {
      this(p0);
    }

    private com.google.android.gms.wallet.Cart$Builder a(com.google.android.gms.wallet.LineItem p0)
    {
      this.a.c.add(p0);
      return this;
    }

    private com.google.android.gms.wallet.Cart$Builder a(String p0)
    {
      this.a.a = p0;
      return this;
    }

    private com.google.android.gms.wallet.Cart$Builder a(
            java.util.List<com.google.android.gms.wallet.LineItem> p0)
    {
      this.a.c.clear();
      this.a.c.addAll(p0);
      return this;
    }

    private com.google.android.gms.wallet.Cart a()
    {
      return this.a;
    }

    private com.google.android.gms.wallet.Cart$Builder b(String p0)
    {
      this.a.b = p0;
      return this;
    }

}
