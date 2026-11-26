// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b;

public class b_a extends java.lang.RuntimeException {
    // Fields
    private final java.lang.String a;
    private final java.lang.String b;

    // Methods
    public b_a(String p0, String p1, Throwable p2)
    {
      super(p2);
      this.a = p0;
      this.b = p1;
    }

    public String a()
    {
      return this.a;
    }

}
