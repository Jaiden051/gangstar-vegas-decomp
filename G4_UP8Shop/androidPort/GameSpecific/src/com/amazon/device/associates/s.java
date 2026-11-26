// Decompiled from classes.dex (SourceFile: s.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class s extends com.gameloft.android.DecompRT.EnumBase<s> {
    // Fields
    public static final com.amazon.device.associates.s a;
    public static final com.amazon.device.associates.s b;
    private static final com.amazon.device.associates.s[] c;

    // Methods
    static
    {
      com.amazon.device.associates.s[] v0;
      a = new com.amazon.device.associates.s("GET", 0);
      b = new com.amazon.device.associates.s("POST", 1);
      v0 = new com.amazon.device.associates.s[2];
      v0[0] = a;
      v0[1] = b;
      c = (com.amazon.device.associates.s[])v0;
    }

    private s(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.s valueOf(String p0)
    {
      return (com.amazon.device.associates.s)com.gameloft.android.DecompRT.EnumBase.valueOf(com.amazon.device.associates.s.class, p0);
    }

    public static com.amazon.device.associates.s[] values()
    {
      return (com.amazon.device.associates.s[])c.clone();
    }

}
