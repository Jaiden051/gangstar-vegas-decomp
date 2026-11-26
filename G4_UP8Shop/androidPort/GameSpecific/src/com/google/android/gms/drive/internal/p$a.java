// Decompiled from classes.dex (SourceFile: p$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class p$a implements com.google.android.gms.drive.DriveApi$ContentsResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.drive.Contents b;

    // Methods
    public p$a(com.google.android.gms.common.api.Status p0, com.google.android.gms.drive.Contents p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.drive.Contents b()
    {
      return this.b;
    }

}
