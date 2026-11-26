// Decompiled from classes.dex (SourceFile: v$f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

abstract class v$f extends com.google.android.gms.drive.internal.q {
    // Fields
    final com.google.android.gms.drive.internal.v c;

    // Methods
    private v$f(com.google.android.gms.drive.internal.v p0)
    {
      super();
      this.c = p0;
    
    }

    /* synthetic */ v$f(com.google.android.gms.drive.internal.v p0, int p1)
    {
      this(p0);
    }

    private static com.google.android.gms.drive.DriveResource$MetadataResult u(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.drive.DriveResource$MetadataResult)new com.google.android.gms.drive.internal.v$e(p0, null);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.drive.internal.v$e(p0, null);
    }

}
