// Decompiled from classes.dex (SourceFile: p$i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

abstract class p$i extends com.google.android.gms.drive.internal.q {
    // Fields
    final com.google.android.gms.drive.internal.p c;

    // Methods
    p$i(com.google.android.gms.drive.internal.p p0)
    {
      super();
      this.c = p0;
    
    }

    private static com.google.android.gms.drive.DriveApi$MetadataBufferResult r(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.drive.DriveApi$MetadataBufferResult)new com.google.android.gms.drive.internal.p$e(p0, null, false);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.drive.internal.p$e(p0, null, false);
    }

}
