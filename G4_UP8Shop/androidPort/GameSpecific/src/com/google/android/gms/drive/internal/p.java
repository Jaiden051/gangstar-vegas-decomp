// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.Drive;
import com.google.android.gms.drive.query.Query;
public class p implements com.google.android.gms.drive.DriveApi {
    // Methods
    public p()
    {
      super();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveApi$ContentsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.drive.internal.p$2(this));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.Contents p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.p$3(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveApi$MetadataBufferResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.query.Query p1)
 throws android.os.RemoteException {
      if ( p1 == null )
        throw new IllegalArgumentException("Query must be provided.");
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.drive.internal.p$1(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveApi$DriveIdResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.drive.internal.p$4(this, p1));
    }

    public final com.google.android.gms.drive.DriveFile a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.DriveId p1)
    {
      if ( p1 == null )
        throw new IllegalArgumentException("Id must be provided.");
      if ( !p0.g() )
        throw new IllegalStateException("Client must be connected");
      return (com.google.android.gms.drive.DriveFile)new com.google.android.gms.drive.internal.s(p1);
    }

    public final com.google.android.gms.drive.OpenFileActivityBuilder a()
    {
      return new com.google.android.gms.drive.OpenFileActivityBuilder();
    }

    public final com.google.android.gms.drive.CreateFileActivityBuilder b()
    {
      return new com.google.android.gms.drive.CreateFileActivityBuilder();
    }

    public final com.google.android.gms.drive.DriveFolder b(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      if ( !p0.g() )
        throw new IllegalStateException("Client must be connected");
      return (com.google.android.gms.drive.DriveFolder)new com.google.android.gms.drive.internal.u(((com.google.android.gms.drive.internal.r)p0.a(Drive.a)).h());
    }

    public final com.google.android.gms.drive.DriveFolder b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.DriveId p1)
    {
      if ( p1 == null )
        throw new IllegalArgumentException("Id must be provided.");
      if ( !p0.g() )
        throw new IllegalStateException("Client must be connected");
      return (com.google.android.gms.drive.DriveFolder)new com.google.android.gms.drive.internal.u(p1);
    }

    public final com.google.android.gms.drive.DriveFolder c(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      com.google.android.gms.drive.DriveId v2; // RETVAL
    
      if ( !p0.g() )
        throw new IllegalStateException("Client must be connected");
      v2 = ((com.google.android.gms.drive.internal.r)p0.a(Drive.a)).i();
      if ( v2 != null )
        return (com.google.android.gms.drive.DriveFolder)new com.google.android.gms.drive.internal.u(v2);
      else
        return null;
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> d(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.p$5(this));
    }

}
