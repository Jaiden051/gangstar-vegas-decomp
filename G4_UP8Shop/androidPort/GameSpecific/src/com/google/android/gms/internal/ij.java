// Decompiled from classes.dex (SourceFile: ij.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ij {
    // Fields
    private static java.util.regex.Pattern a;

    // Methods
    static
    {
      a = null;
    }

    public static boolean C(android.content.Context p0)
    {
      return p0.getPackageManager().hasSystemFeature("android.hardware.type.watch");
    }

    public static int aB(int p0)
    {
      return p0 / 1000;
    }

    public static int aC(int p0)
    {
      return p0 % 1000 / 100;
    }

    public static boolean aD(int p0)
    {
      return aC(p0) == 3;
    }

}
