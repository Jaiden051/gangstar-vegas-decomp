// Decompiled from classes.dex (SourceFile: g$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

import com.google.android.gms.common.api.StatusCreator;
import com.google.android.gms.drive.realtime.internal.event.ParcelableEventList;
public abstract class g$a extends android.os.Binder implements com.google.android.gms.drive.realtime.internal.g {
    // Methods
    public static com.google.android.gms.drive.realtime.internal.g W(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.realtime.internal.IDataHolderEventCallback");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.realtime.internal.g )
        return (com.google.android.gms.drive.realtime.internal.g)LocalInterface;
      else
        return (com.google.android.gms.drive.realtime.internal.g)new com.google.android.gms.drive.realtime.internal.g$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      com.google.android.gms.common.api.Status v5;
      boolean v6;
      com.google.android.gms.common.data.DataHolder v8;
      com.google.android.gms.drive.realtime.internal.event.ParcelableEventList v9;
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IDataHolderEventCallback");
          if ( p1.readInt() != 0 )
            v8 = com.google.android.gms.common.data.f.x(p1);
          else
            v8 = null;
          if ( p1.readInt() != 0 )
            v9 = (com.google.android.gms.drive.realtime.internal.event.ParcelableEventList)com.google.android.gms.drive.realtime.internal.event.ParcelableEventList.CREATOR.createFromParcel(p1);
          else
            v9 = null;
          this.a(v8, v9);
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IDataHolderEventCallback");
          if ( p1.readInt() != 0 )
            v5 = StatusCreator._typed_createFromParcel(p1);
          this.a(v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.realtime.internal.IDataHolderEventCallback");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
