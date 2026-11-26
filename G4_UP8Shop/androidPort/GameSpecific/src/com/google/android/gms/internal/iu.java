// Decompiled from classes.dex (SourceFile: iu.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Arrays;
public class iu extends com.google.android.gms.drive.metadata.internal.j<com.google.android.gms.drive.DriveId> {
    // Fields
    public static final com.google.android.gms.internal.iu a;

    // Methods
    static
    {
      a = new com.google.android.gms.internal.iu();
    }

    private iu()
    {
      super("driveId", Arrays.asList(new String[] { "sqlId", "resourceId" }), Arrays.asList(new String[] { "dbInstanceId" }), 4100000);
    }

    private static com.google.android.gms.drive.DriveId k(
            com.google.android.gms.common.data.DataHolder p0,
            int p1,
            int p2)
    {
      long Long;
      String v4; // RETVAL
      String v5;
      Long = p0.f().getLong("dbInstanceId");
      v4 = p0.c("resourceId", p1, p2);
      v5 = v4;
      if ( v4 != null && v4.startsWith("generated-android-") )
        v5 = null;
      return new com.google.android.gms.drive.DriveId(v5, java.lang.Long.valueOf(p0.a("sqlId", p1, p2)).longValue(), Long);
    }

    /* synthetic */ protected final Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      long Long;
      String v5; // RETVAL
      String v6;
      Long = p0.f().getLong("dbInstanceId");
      v5 = p0.c("resourceId", p1, p2);
      v6 = v5;
      if ( v5 != null && v5.startsWith("generated-android-") )
        v6 = null;
      return new com.google.android.gms.drive.DriveId(v6, java.lang.Long.valueOf(p0.a("sqlId", p1, p2)).longValue(), Long);
    }

}
