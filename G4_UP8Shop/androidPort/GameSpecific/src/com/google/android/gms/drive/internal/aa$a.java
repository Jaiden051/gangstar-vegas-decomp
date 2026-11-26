// Decompiled from classes.dex (SourceFile: aa$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public abstract class aa$a extends android.os.Binder implements com.google.android.gms.drive.internal.aa {
    // Methods
    public static com.google.android.gms.drive.internal.aa P(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.internal.IDriveService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.internal.aa )
        return (com.google.android.gms.drive.internal.aa)LocalInterface;
      else
        return (com.google.android.gms.drive.internal.aa)new com.google.android.gms.drive.internal.aa$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      android.content.IntentSender v8; // RETVAL
      android.content.IntentSender v9; // RETVAL
    
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.GetMetadataRequest)com.google.android.gms.drive.internal.GetMetadataRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.GetMetadataRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.QueryRequest)com.google.android.gms.drive.internal.QueryRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.QueryRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.UpdateMetadataRequest)com.google.android.gms.drive.internal.UpdateMetadataRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.UpdateMetadataRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.CreateContentsRequest)com.google.android.gms.drive.internal.CreateContentsRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.CreateContentsRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.CreateFileRequest)com.google.android.gms.drive.internal.CreateFileRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.CreateFileRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.CreateFolderRequest)com.google.android.gms.drive.internal.CreateFolderRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.CreateFolderRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OpenContentsRequest)com.google.android.gms.drive.internal.OpenContentsRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.OpenContentsRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.CloseContentsRequest)com.google.android.gms.drive.internal.CloseContentsRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.CloseContentsRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          this.a(ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.OpenFileIntentSenderRequest)com.google.android.gms.drive.internal.OpenFileIntentSenderRequest.CREATOR.createFromParcel(p1);
          v8 = this.a((com.google.android.gms.drive.internal.OpenFileIntentSenderRequest)v5);
          p2.writeNoException();
          if ( v8 != null )
          {
            p2.writeInt(1);
            v8.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          v6 = true;
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.CreateFileIntentSenderRequest)com.google.android.gms.drive.internal.CreateFileIntentSenderRequest.CREATOR.createFromParcel(p1);
          v9 = this.a((com.google.android.gms.drive.internal.CreateFileIntentSenderRequest)v5);
          p2.writeNoException();
          if ( v9 != null )
          {
            p2.writeInt(1);
            v9.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          v6 = true;
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.AuthorizeAccessRequest)com.google.android.gms.drive.internal.AuthorizeAccessRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.AuthorizeAccessRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 13:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.ListParentsRequest)com.google.android.gms.drive.internal.ListParentsRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.ListParentsRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 14:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.AddEventListenerRequest)com.google.android.gms.drive.internal.AddEventListenerRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.AddEventListenerRequest)v5, ac$a.R(p1.readStrongBinder()), p1.readString(), ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 15:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.RemoveEventListenerRequest)com.google.android.gms.drive.internal.RemoveEventListenerRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.RemoveEventListenerRequest)v5, ac$a.R(p1.readStrongBinder()), p1.readString(), ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 16:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.DisconnectRequest)com.google.android.gms.drive.internal.DisconnectRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.DisconnectRequest)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 17:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.TrashResourceRequest)com.google.android.gms.drive.internal.TrashResourceRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.TrashResourceRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 18:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.CloseContentsAndUpdateMetadataRequest)com.google.android.gms.drive.internal.CloseContentsAndUpdateMetadataRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.CloseContentsAndUpdateMetadataRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 19:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.QueryRequest)com.google.android.gms.drive.internal.QueryRequest.CREATOR.createFromParcel(p1);
          this.b((com.google.android.gms.drive.internal.QueryRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 20:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          this.b(ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 21:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          this.c(ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 22:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          this.d(ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 23:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          this.e(ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 24:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.DeleteResourceRequest)com.google.android.gms.drive.internal.DeleteResourceRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.DeleteResourceRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 26:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.DeleteCustomPropertyRequest)com.google.android.gms.drive.internal.DeleteCustomPropertyRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.DeleteCustomPropertyRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 27:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.LoadRealtimeRequest)com.google.android.gms.drive.internal.LoadRealtimeRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.LoadRealtimeRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 28:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.SetResourceParentsRequest)com.google.android.gms.drive.internal.SetResourceParentsRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.SetResourceParentsRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 29:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.GetDriveIdFromUniqueIdentifierRequest)com.google.android.gms.drive.internal.GetDriveIdFromUniqueIdentifierRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.GetDriveIdFromUniqueIdentifierRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 30:
          p1.enforceInterface("com.google.android.gms.drive.internal.IDriveService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.internal.CheckResourceIdsExistRequest)com.google.android.gms.drive.internal.CheckResourceIdsExistRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.internal.CheckResourceIdsExistRequest)v5, ab$a.Q(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.internal.IDriveService");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
