// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.Drive;
public class v implements com.google.android.gms.drive.DriveResource {
    // Fields
    protected final com.google.android.gms.drive.DriveId a;

    // Methods
    protected v(com.google.android.gms.drive.DriveId p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.events.DriveEvent$Listener<com.google.android.gms.drive.events.ChangeEvent> p1)
 throws android.os.RemoteException {
      return ((com.google.android.gms.drive.internal.r)p0.a(Drive.a)).a(p0, this.a, 1, p1);
    }

    public final com.google.android.gms.drive.DriveId a()
    {
      return this.a;
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveResource$MetadataResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.drive.internal.v$1(this));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveResource$MetadataResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.MetadataChangeSet p1)
 throws android.os.RemoteException {
      if ( p1 == null )
        throw new IllegalArgumentException("ChangeSet must be provided.");
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.v$3(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.events.DriveEvent$Listener<com.google.android.gms.drive.events.ChangeEvent> p1)
 throws android.os.RemoteException {
      return ((com.google.android.gms.drive.internal.r)p0.a(Drive.a)).b(p0, this.a, 1, p1);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveApi$MetadataBufferResult> c(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.drive.internal.v$2(this));
    }

}
