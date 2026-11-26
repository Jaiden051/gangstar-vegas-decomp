// Decompiled from classes.dex (SourceFile: d$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

public abstract class d$a extends android.os.Binder implements com.google.android.gms.drive.realtime.internal.d {
    // Methods
    public static com.google.android.gms.drive.realtime.internal.d T(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.realtime.internal.ICollaboratorEventCallback");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.realtime.internal.d )
        return (com.google.android.gms.drive.realtime.internal.d)LocalInterface;
      else
        return (com.google.android.gms.drive.realtime.internal.d)new com.google.android.gms.drive.realtime.internal.d$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      com.google.android.gms.drive.realtime.internal.ParcelableCollaborator v5;
      boolean v6;
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.ICollaboratorEventCallback");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.realtime.internal.ParcelableCollaborator)com.google.android.gms.drive.realtime.internal.ParcelableCollaborator.CREATOR.createFromParcel(p1);
          this.a(v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.ICollaboratorEventCallback");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.realtime.internal.ParcelableCollaborator)com.google.android.gms.drive.realtime.internal.ParcelableCollaborator.CREATOR.createFromParcel(p1);
          this.b(v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.realtime.internal.ICollaboratorEventCallback");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
