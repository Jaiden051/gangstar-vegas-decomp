// Decompiled from classes.dex (SourceFile: s.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.Contents;
import com.google.android.gms.drive.Drive;
public class s extends com.google.android.gms.drive.internal.v implements com.google.android.gms.drive.DriveFile {
    // Methods
    public s(com.google.android.gms.drive.DriveId p0)
    {
      super(p0);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveApi$ContentsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            com.google.android.gms.drive.DriveFile$DownloadProgressListener p2)
 throws android.os.RemoteException {
      if ( p1 != 0x10000000 && p1 != 0x20000000 && p1 != 805306368 )
        throw new IllegalArgumentException("Invalid mode provided.");
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.drive.internal.s$1(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.Contents p1)
 throws android.os.RemoteException {
      if ( p1 == null )
        throw new IllegalArgumentException("Contents must be provided.");
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.s$2(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.Contents p1,
            com.google.android.gms.drive.MetadataChangeSet p2)
 throws android.os.RemoteException {
      if ( p1 == null )
        throw new IllegalArgumentException("Contents must be provided.");
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.s$3(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.Contents p1)
 throws android.os.RemoteException {
      return Drive.h.a(p0, p1);
    }

}
