// Decompiled from classes.dex (SourceFile: a$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class a$a$a extends com.gameloft.android.DecompRT.EnumBase<a$a$a> {
    // Fields
    public static final com.amazon.device.associates.a$a$a a;
    public static final com.amazon.device.associates.a$a$a b;
    public static final com.amazon.device.associates.a$a$a c;
    public static final com.amazon.device.associates.a$a$a d;
    private static final com.amazon.device.associates.a$a$a[] e;

    // Methods
    static
    {
      com.amazon.device.associates.a$a$a[] v0;
      a = new com.amazon.device.associates.a$a$a("UP", 0);
      b = new com.amazon.device.associates.a$a$a("RIGHT", 1);
      c = new com.amazon.device.associates.a$a$a("DOWN", 2);
      d = new com.amazon.device.associates.a$a$a("LEFT", 3);
      v0 = new com.amazon.device.associates.a$a$a[4];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      v0[3] = d;
      e = (com.amazon.device.associates.a$a$a[])v0;
    }

    private a$a$a(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.a$a$a valueOf(String p0)
    {
      return (com.amazon.device.associates.a$a$a)com.gameloft.android.DecompRT.EnumBase.valueOf(com.amazon.device.associates.a$a$a.class, p0);
    }

    public static com.amazon.device.associates.a$a$a[] values()
    {
      return (com.amazon.device.associates.a$a$a[])e.clone();
    }

}
