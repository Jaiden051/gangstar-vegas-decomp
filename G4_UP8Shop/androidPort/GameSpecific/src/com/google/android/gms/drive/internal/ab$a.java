// Decompiled from classes.dex (SourceFile: ab$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.common.api.StatusCreator;
public abstract class ab$a extends android.os.Binder implements com.google.android.gms.drive.internal.ab {
    // Methods
    public ab$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.drive.internal.IDriveServiceCallbacks");
    }

    public static com.google.android.gms.drive.internal.ab Q(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.internal.ab )
        return (com.google.android.gms.drive.internal.ab)LocalInterface;
      else
        return (com.google.android.gms.drive.internal.ab)new com.google.android.gms.drive.internal.ab$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnDownloadProgressResponse)com.google.android.gms.drive.internal.OnDownloadProgressResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnDownloadProgressResponse)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnListEntriesResponse)com.google.android.gms.drive.internal.OnListEntriesResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnListEntriesResponse)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnDriveIdResponse)com.google.android.gms.drive.internal.OnDriveIdResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnDriveIdResponse)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnMetadataResponse)com.google.android.gms.drive.internal.OnMetadataResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnMetadataResponse)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnContentsResponse)com.google.android.gms.drive.internal.OnContentsResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnContentsResponse)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnDownloadProgressResponse)(Object)StatusCreator._typed_createFromParcel(p1);
          this.a((com.google.android.gms.common.api.Status)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          this.a();
          p2.writeNoException();
          v6 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnListParentsResponse)com.google.android.gms.drive.internal.OnListParentsResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnListParentsResponse)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnSyncMoreResponse)com.google.android.gms.drive.internal.OnSyncMoreResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnSyncMoreResponse)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnStorageStatsResponse)com.google.android.gms.drive.internal.OnStorageStatsResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnStorageStatsResponse)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnLoadRealtimeResponse)com.google.android.gms.drive.internal.OnLoadRealtimeResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnLoadRealtimeResponse)v5, com.google.android.gms.drive.realtime.internal.m$a.ac(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OnResourceIdSetResponse)com.google.android.gms.drive.internal.OnResourceIdSetResponse.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OnResourceIdSetResponse)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.internal.IDriveServiceCallbacks");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
