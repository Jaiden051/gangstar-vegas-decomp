// Decompiled from classes.dex (SourceFile: Plus$PlusOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

public final class Plus$PlusOptions implements com.google.android.gms.common.api.Api$ApiOptions$Optional {
    // Fields
    final java.lang.String a;
    final java.util.Set b;

    // Methods
    private Plus$PlusOptions()
    {
      super();
      this.a = null;
      this.b = new java.util.HashSet();
    }

    /* synthetic */ Plus$PlusOptions(int p0)
    {
      this();
    }

    private Plus$PlusOptions(com.google.android.gms.plus.Plus$PlusOptions$Builder p0)
    {
      super();
      this.a = p0.a;
      this.b = p0.b;
    }

    /* synthetic */ Plus$PlusOptions(com.google.android.gms.plus.Plus$PlusOptions$Builder p0, int p1)
    {
      this(p0);
    }

    public static com.google.android.gms.plus.Plus$PlusOptions$Builder builder()
    {
      return new com.google.android.gms.plus.Plus$PlusOptions$Builder();
    }

}
