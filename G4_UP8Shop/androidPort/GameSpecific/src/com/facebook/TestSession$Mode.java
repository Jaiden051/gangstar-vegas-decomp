// Decompiled from classes.dex (SourceFile: TestSession$Mode.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class TestSession$Mode extends com.gameloft.android.DecompRT.EnumBase<TestSession$Mode> {
    // Fields
    private static final com.facebook.TestSession$Mode[] $VALUES;
    public static final com.facebook.TestSession$Mode PRIVATE;
    public static final com.facebook.TestSession$Mode SHARED;

    // Methods
    static
    {
      com.facebook.TestSession$Mode[] v0;
      PRIVATE = new com.facebook.TestSession$Mode("PRIVATE", 0);
      SHARED = new com.facebook.TestSession$Mode("SHARED", 1);
      v0 = new com.facebook.TestSession$Mode[2];
      v0[0] = PRIVATE;
      v0[1] = SHARED;
      $VALUES = (com.facebook.TestSession$Mode[])v0;
    }

    private TestSession$Mode(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.TestSession$Mode valueOf(String p0)
    {
      return (com.facebook.TestSession$Mode)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.TestSession$Mode.class, p0);
    }

    public static com.facebook.TestSession$Mode[] values()
    {
      return (com.facebook.TestSession$Mode[])$VALUES.clone();
    }

}
