// Decompiled from classes.dex (SourceFile: c$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

import com.google.android.gms.common.api.StatusCreator;
public abstract class c$a extends android.os.Binder implements com.google.android.gms.drive.realtime.internal.c {
    // Methods
    public static com.google.android.gms.drive.realtime.internal.c S(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.realtime.internal.IBooleanCallback");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.realtime.internal.c )
        return (com.google.android.gms.drive.realtime.internal.c)LocalInterface;
      else
        return (com.google.android.gms.drive.realtime.internal.c)new com.google.android.gms.drive.realtime.internal.c$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.common.api.Status v7;
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IBooleanCallback");
          this.a(p1.readInt() != 0);
          p2.writeNoException();
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IBooleanCallback");
          if ( p1.readInt() != 0 )
            v7 = StatusCreator._typed_createFromParcel(p1);
          else
            v7 = null;
          this.a(v7);
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.realtime.internal.IBooleanCallback");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
