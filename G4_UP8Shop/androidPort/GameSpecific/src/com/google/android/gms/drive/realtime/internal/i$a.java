// Decompiled from classes.dex (SourceFile: i$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

import com.google.android.gms.common.api.StatusCreator;
public abstract class i$a extends android.os.Binder implements com.google.android.gms.drive.realtime.internal.i {
    // Methods
    public static com.google.android.gms.drive.realtime.internal.i Y(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.realtime.internal.IErrorCallback");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.realtime.internal.i )
        return (com.google.android.gms.drive.realtime.internal.i)LocalInterface;
      else
        return (com.google.android.gms.drive.realtime.internal.i)new com.google.android.gms.drive.realtime.internal.i$a$a(p0);
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
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IErrorCallback");
          if ( p1.readInt() != 0 )
            v7 = StatusCreator._typed_createFromParcel(p1);
          else
            v7 = null;
          this.a(v7);
          p2.writeNoException();
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.realtime.internal.IErrorCallback");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
