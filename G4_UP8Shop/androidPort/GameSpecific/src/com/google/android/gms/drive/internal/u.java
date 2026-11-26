// Decompiled from classes.dex (SourceFile: u.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.Contents;
import com.google.android.gms.drive.query.Filters;
import com.google.android.gms.drive.query.SearchableField;
public class u extends com.google.android.gms.drive.internal.v implements com.google.android.gms.drive.DriveFolder {
    // Methods
    public u(com.google.android.gms.drive.DriveId p0)
    {
      super(p0);
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveFolder$DriveFileResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.MetadataChangeSet p1,
            com.google.android.gms.drive.Contents p2,
            int p3,
            boolean p4,
            String p5)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.u$1(this, p2, p1, 0, p4, p5));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveFolder$DriveFileResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.MetadataChangeSet p1,
            com.google.android.gms.drive.Contents p2,
            boolean p3,
            String p4)
 throws android.os.RemoteException {
      if ( p1 == null )
        throw new IllegalArgumentException("MetadataChangeSet must be provided.");
      if ( p2 == null )
        throw new IllegalArgumentException("Contents must be provided.");
      if ( "application/vnd.google-apps.folder".equals(p1.a()) )
        throw new IllegalArgumentException("May not create folders (mimetype: application/vnd.google-apps.folder) using this " +
                                           "method. Use DriveFolder.createFolder() instead.");
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.u$1(this, p2, p1, 0, false, null));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveApi$MetadataBufferResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return new com.google.android.gms.drive.internal.p().a(p0, new com.google.android.gms.drive.query.Query$Builder().a(Filters.in(SearchableField.d, this.a())).a());
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveFolder$DriveFolderResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.MetadataChangeSet p1)
 throws android.os.RemoteException {
      if ( p1 == null )
        throw new IllegalArgumentException("MetadataChangeSet must be provided.");
      if ( p1.a() != null && !p1.a().equals("application/vnd.google-apps.folder") )
        throw new IllegalArgumentException("The mimetype must be of type application/vnd.google-apps.folder");
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.u$2(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveFolder$DriveFileResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.MetadataChangeSet p1,
            com.google.android.gms.drive.Contents p2)
 throws android.os.RemoteException {
      if ( p1 == null )
        throw new IllegalArgumentException("MetadataChangeSet must be provided.");
      if ( p2 == null )
        throw new IllegalArgumentException("Contents must be provided.");
      if ( "application/vnd.google-apps.folder".equals(p1.a()) )
        throw new IllegalArgumentException("May not create folders (mimetype: application/vnd.google-apps.folder) using this " +
                                           "method. Use DriveFolder.createFolder() instead.");
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.u$1(this, p2, p1, 0, false, null));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.drive.DriveApi$MetadataBufferResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.query.Query p1)
 throws android.os.RemoteException {
      return new com.google.android.gms.drive.internal.p().a(p0, new com.google.android.gms.drive.query.Query$Builder().a(Filters.in(SearchableField.d, this.a())).a());
    }

}
