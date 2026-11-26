// Decompiled from classes.dex (SourceFile: j$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

import com.google.android.gms.common.api.StatusCreator;
import com.google.android.gms.drive.realtime.internal.event.ParcelableEventList;
public abstract class j$a extends android.os.Binder implements com.google.android.gms.drive.realtime.internal.j {
    // Methods
    public static com.google.android.gms.drive.realtime.internal.j Z(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.realtime.internal.IEventCallback");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.realtime.internal.j )
        return (com.google.android.gms.drive.realtime.internal.j)LocalInterface;
      else
        return (com.google.android.gms.drive.realtime.internal.j)new com.google.android.gms.drive.realtime.internal.j$a$a(p0);
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
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IEventCallback");
          if ( p1.readInt() != 0 )
            v5 = ParcelableEventList.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.realtime.internal.event.ParcelableEventList)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IEventCallback");
          if ( p1.readInt() != 0 )
            v5 = StatusCreator._typed_createFromParcel(p1);
          this.a((com.google.android.gms.common.api.Status)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.realtime.internal.IEventCallback");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
