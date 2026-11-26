// Decompiled from classes.dex (SourceFile: s$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

abstract class s$d extends com.google.android.gms.drive.internal.q {
    // Fields
    final com.google.android.gms.drive.internal.s d;

    // Methods
    private s$d(com.google.android.gms.drive.internal.s p0)
    {
      super();
      this.d = p0;
    
    }

    /* synthetic */ s$d(com.google.android.gms.drive.internal.s p0, int p1)
    {
      this(p0);
    }

    private static com.google.android.gms.drive.DriveApi$ContentsResult q(com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.drive.DriveApi$ContentsResult)new com.google.android.gms.drive.internal.p$a(p0, null);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.drive.internal.p$a(p0, null);
    }

}
