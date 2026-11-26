// Decompiled from classes.dex (SourceFile: hl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Arrays;
public final class hl {
    // Methods
    public static com.google.android.gms.internal.hl$a e(Object p0)
    {
      return new com.google.android.gms.internal.hl$a(p0, 0);
    }

    public static boolean equal(Object p0, Object p1)
    {
      return p0 == p1 || p0 != null && p0.equals(p1);
    }

    public static int hashCode(Object[] p0)
    {
      return Arrays.hashCode(p0);
    }

}
