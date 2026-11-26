// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.util;

public final class c extends com.gameloft.android.DecompRT.EnumBase<c> {
    // Fields
    public static final com.amazon.device.iap.internal.util.c a;
    public static final com.amazon.device.iap.internal.util.c b;
    public static final com.amazon.device.iap.internal.util.c c;
    private static final com.amazon.device.iap.internal.util.c[] e;
    private int d;

    // Methods
    static
    {
      com.amazon.device.iap.internal.util.c[] v0;
      a = new com.amazon.device.iap.internal.util.c("LEGACY", 0, 0);
      b = new com.amazon.device.iap.internal.util.c("V1", 1, 1);
      c = new com.amazon.device.iap.internal.util.c("V2", 2, 2);
      v0 = new com.amazon.device.iap.internal.util.c[3];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      e = (com.amazon.device.iap.internal.util.c[])v0;
    }

    private c(String p0, int p1, int p2)
    {
      super(p0, p1);
      this.d = p2;
    }

    public static com.amazon.device.iap.internal.util.c[] a()
    {
      return (com.amazon.device.iap.internal.util.c[])e.clone();
    }

}
