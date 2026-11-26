// Decompiled from classes.dex (SourceFile: p$g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

abstract class p$g extends com.google.android.gms.drive.internal.q {
    // Fields
    final com.google.android.gms.drive.internal.p b;

    // Methods
    p$g(com.google.android.gms.drive.internal.p p0)
    {
      super();
      this.b = p0;
    
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
