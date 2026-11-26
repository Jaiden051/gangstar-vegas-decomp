// Decompiled from classes.dex (SourceFile: e$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

import com.google.android.gms.common.api.StatusCreator;
public abstract class e$a extends android.os.Binder implements com.google.android.gms.drive.realtime.internal.e {
    // Methods
    public static com.google.android.gms.drive.realtime.internal.e U(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.realtime.internal.ICollaboratorsCallback");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.realtime.internal.e )
        return (com.google.android.gms.drive.realtime.internal.e)LocalInterface;
      else
        return (com.google.android.gms.drive.realtime.internal.e)new com.google.android.gms.drive.realtime.internal.e$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.common.api.Status v7;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.ICollaboratorsCallback");
          this.a((com.google.android.gms.drive.realtime.internal.ParcelableCollaborator[])p1.createTypedArray(ParcelableCollaborator.CREATOR));
          p2.writeNoException();
          v5 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.ICollaboratorsCallback");
          if ( p1.readInt() != 0 )
            v7 = StatusCreator._typed_createFromParcel(p1);
          else
            v7 = null;
          this.a(v7);
          p2.writeNoException();
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.realtime.internal.ICollaboratorsCallback");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
