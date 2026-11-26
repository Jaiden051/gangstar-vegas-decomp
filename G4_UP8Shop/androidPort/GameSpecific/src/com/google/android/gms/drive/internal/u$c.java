// Decompiled from classes.dex (SourceFile: u$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

abstract class u$c extends com.google.android.gms.drive.internal.q {
    // Fields
    final com.google.android.gms.drive.internal.u c;

    // Methods
    private u$c(com.google.android.gms.drive.internal.u p0)
    {
      super();
      this.c = p0;
    
    }

    /* synthetic */ u$c(com.google.android.gms.drive.internal.u p0, int p1)
    {
      this(p0);
    }

    private static com.google.android.gms.drive.DriveFolder$DriveFolderResult t(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.drive.DriveFolder$DriveFolderResult)new com.google.android.gms.drive.internal.u$e(p0, null);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.drive.internal.u$e(p0, null);
    }

}
