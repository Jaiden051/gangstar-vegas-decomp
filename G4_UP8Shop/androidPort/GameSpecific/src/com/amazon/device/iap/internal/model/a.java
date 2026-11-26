// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.model;

public final class a extends com.gameloft.android.DecompRT.EnumBase<a> {
    // Fields
    public static final com.amazon.device.iap.internal.model.a a;
    public static final com.amazon.device.iap.internal.model.a b;
    private static final com.amazon.device.iap.internal.model.a[] c;

    // Methods
    static
    {
      com.amazon.device.iap.internal.model.a[] v0;
      a = new com.amazon.device.iap.internal.model.a("DELIVERED", 0);
      b = new com.amazon.device.iap.internal.model.a("DELIVERY_ATTEMPTED", 1);
      v0 = new com.amazon.device.iap.internal.model.a[2];
      v0[0] = a;
      v0[1] = b;
      c = (com.amazon.device.iap.internal.model.a[])v0;
    }

    private a(String p0, int p1)
    {
      super(p0, p1);
    }

}
