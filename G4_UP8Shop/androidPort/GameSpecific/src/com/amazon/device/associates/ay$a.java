// Decompiled from classes.dex (SourceFile: ay$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public final class ay$a extends com.gameloft.android.DecompRT.EnumBase<ay$a> {
    // Fields
    public static final com.amazon.device.associates.ay$a a;
    public static final com.amazon.device.associates.ay$a b;
    public static final com.amazon.device.associates.ay$a c;
    public static final com.amazon.device.associates.ay$a d;
    public static final com.amazon.device.associates.ay$a e;
    public static final com.amazon.device.associates.ay$a f;
    public static final com.amazon.device.associates.ay$a g;
    private static final com.amazon.device.associates.ay$a[] h;

    // Methods
    static
    {
      com.amazon.device.associates.ay$a[] v0;
      a = new com.amazon.device.associates.ay$a("GET_SERVICE_STATUS", 0);
      b = new com.amazon.device.associates.ay$a("GET_RECEIPTS", 1);
      c = new com.amazon.device.associates.ay$a("SEARCH", 2);
      d = new com.amazon.device.associates.ay$a("SEARCH_BY_ID", 3);
      e = new com.amazon.device.associates.ay$a("PURCHASE", 4);
      f = new com.amazon.device.associates.ay$a("GET_PURCHASE_RESULT", 5);
      g = new com.amazon.device.associates.ay$a("NOTIFY_RECEIPT_RECEIVED", 6);
      v0 = new com.amazon.device.associates.ay$a[7];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      v0[3] = d;
      v0[4] = e;
      v0[5] = f;
      v0[6] = g;
      h = (com.amazon.device.associates.ay$a[])v0;
    }

    private ay$a(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.ay$a valueOf(String p0)
    {
      return (com.amazon.device.associates.ay$a)com.gameloft.android.DecompRT.EnumBase.valueOf(com.amazon.device.associates.ay$a.class, p0);
    }

    public static com.amazon.device.associates.ay$a[] values()
    {
      return (com.amazon.device.associates.ay$a[])h.clone();
    }

}
