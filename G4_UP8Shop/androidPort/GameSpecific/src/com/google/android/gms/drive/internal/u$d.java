// Decompiled from classes.dex (SourceFile: u$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class u$d implements com.google.android.gms.drive.DriveFolder$DriveFileResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.drive.DriveFile b;

    // Methods
    public u$d(com.google.android.gms.common.api.Status p0, com.google.android.gms.drive.DriveFile p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.drive.DriveFile b()
    {
      return this.b;
    }

}
