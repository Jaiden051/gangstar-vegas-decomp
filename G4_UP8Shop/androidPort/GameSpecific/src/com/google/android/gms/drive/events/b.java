// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.events;

public class b {
    // Methods
    public static boolean a(int p0, com.google.android.gms.drive.DriveId p1)
    {
      return p1 != null || aK(p0);
    }

    public static boolean aK(int p0)
    {
      return ((1 << p0) & 6L) != 0;
    }

}
