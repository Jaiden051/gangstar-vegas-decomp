// Decompiled from classes.dex (SourceFile: p$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class p$c implements com.google.android.gms.drive.DriveApi$DriveIdResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.drive.DriveId b;

    // Methods
    public p$c(com.google.android.gms.common.api.Status p0, com.google.android.gms.drive.DriveId p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.drive.DriveId b()
    {
      return this.b;
    }

}
