// Decompiled from classes.dex (SourceFile: p$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

abstract class p$d extends com.google.android.gms.drive.internal.q {
    // Fields
    final com.google.android.gms.drive.internal.p c;

    // Methods
    p$d(com.google.android.gms.drive.internal.p p0)
    {
      super();
      this.c = p0;
    
    }

    private static com.google.android.gms.drive.DriveApi$DriveIdResult p(com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.drive.DriveApi$DriveIdResult)new com.google.android.gms.drive.internal.p$c(p0, null);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.drive.internal.p$c(p0, null);
    }

}
