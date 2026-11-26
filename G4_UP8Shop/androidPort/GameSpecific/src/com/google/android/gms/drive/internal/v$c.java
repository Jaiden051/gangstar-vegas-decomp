// Decompiled from classes.dex (SourceFile: v$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

abstract class v$c extends com.google.android.gms.drive.internal.q {
    // Fields
    final com.google.android.gms.drive.internal.v b;

    // Methods
    private v$c(com.google.android.gms.drive.internal.v p0)
    {
      super();
      this.b = p0;
    
    }

    /* synthetic */ v$c(com.google.android.gms.drive.internal.v p0, int p1)
    {
      this(p0);
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
