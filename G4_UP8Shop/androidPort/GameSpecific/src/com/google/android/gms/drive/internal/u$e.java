// Decompiled from classes.dex (SourceFile: u$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class u$e implements com.google.android.gms.drive.DriveFolder$DriveFolderResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.drive.DriveFolder b;

    // Methods
    public u$e(com.google.android.gms.common.api.Status p0, com.google.android.gms.drive.DriveFolder p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.drive.DriveFolder b()
    {
      return this.b;
    }

}
