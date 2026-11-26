// Decompiled from classes.dex (SourceFile: k$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

import com.google.android.gms.common.api.StatusCreator;
public abstract class k$a extends android.os.Binder implements com.google.android.gms.drive.realtime.internal.k {
    // Methods
    public static com.google.android.gms.drive.realtime.internal.k aa(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.realtime.internal.IIndexReferenceCallback");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.realtime.internal.k )
        return (com.google.android.gms.drive.realtime.internal.k)LocalInterface;
      else
        return (com.google.android.gms.drive.realtime.internal.k)new com.google.android.gms.drive.realtime.internal.k$a$a(p0);
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
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IIndexReferenceCallback");
          if ( p1.readInt() != 0 )
            v5 = ParcelableIndexReference.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.realtime.internal.ParcelableIndexReference)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IIndexReferenceCallback");
          if ( p1.readInt() != 0 )
            v5 = StatusCreator._typed_createFromParcel(p1);
          this.a((com.google.android.gms.common.api.Status)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.realtime.internal.IIndexReferenceCallback");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
