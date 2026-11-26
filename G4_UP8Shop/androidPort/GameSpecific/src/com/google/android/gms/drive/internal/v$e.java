// Decompiled from classes.dex (SourceFile: v$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class v$e implements com.google.android.gms.drive.DriveResource$MetadataResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.drive.Metadata b;

    // Methods
    public v$e(com.google.android.gms.common.api.Status p0, com.google.android.gms.drive.Metadata p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.drive.Metadata b()
    {
      return this.b;
    }

}
