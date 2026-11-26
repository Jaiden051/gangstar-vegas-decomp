// Decompiled from classes.dex (SourceFile: p$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class p$e implements com.google.android.gms.drive.DriveApi$MetadataBufferResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.drive.MetadataBuffer b;
    private final boolean c;

    // Methods
    public p$e(com.google.android.gms.common.api.Status p0, com.google.android.gms.drive.MetadataBuffer p1, boolean p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.drive.MetadataBuffer b()
    {
      return this.b;
    }

}
