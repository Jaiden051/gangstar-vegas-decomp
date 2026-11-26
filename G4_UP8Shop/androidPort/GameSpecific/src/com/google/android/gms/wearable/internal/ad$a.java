// Decompiled from classes.dex (SourceFile: ad$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import android.net.Uri;
import com.google.android.gms.wearable.Asset;
import com.google.android.gms.wearable.PutDataRequest;
public abstract class ad$a extends android.os.Binder implements com.google.android.gms.wearable.internal.ad {
    // Methods
    public static com.google.android.gms.wearable.internal.ad by(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.wearable.internal.IWearableService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.wearable.internal.ad )
        return (com.google.android.gms.wearable.internal.ad)LocalInterface;
      else
        return (com.google.android.gms.wearable.internal.ad)new com.google.android.gms.wearable.internal.ad$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      com.google.android.gms.wearable.internal.ab v8;
      com.google.android.gms.wearable.internal.ab v9;
      com.google.android.gms.wearable.internal.ab v10;
      com.google.android.gms.wearable.internal.ab v11;
      com.google.android.gms.wearable.internal.ab v12;
      com.google.android.gms.wearable.internal.ab v13;
      com.google.android.gms.wearable.internal.ab v14;
      com.google.android.gms.wearable.internal.ab v15;
      v5 = null;
      switch ( p0 )
      {
        case 2:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          v8 = ab$a.bw(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.c)com.google.android.gms.wearable.c.CREATOR.createFromParcel(p1);
          this.a(v8, (com.google.android.gms.wearable.c)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          this.a(ab$a.bw(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          this.b(ab$a.bw(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          this.c(ab$a.bw(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          v9 = ab$a.bw(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.PutDataRequest)com.google.android.gms.wearable.PutDataRequest.CREATOR.createFromParcel(p1);
          this.a(v9, (com.google.android.gms.wearable.PutDataRequest)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          v10 = ab$a.bw(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(p1);
          this.a(v10, (android.net.Uri)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          this.d(ab$a.bw(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          v11 = ab$a.bw(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(p1);
          this.b(v11, (android.net.Uri)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          v12 = ab$a.bw(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(p1);
          this.c(v12, (android.net.Uri)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          this.a(ab$a.bw(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.createByteArray());
          p2.writeNoException();
          v6 = true;
          break;
        case 13:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          v13 = ab$a.bw(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.Asset)com.google.android.gms.wearable.Asset.CREATOR.createFromParcel(p1);
          this.a(v13, (com.google.android.gms.wearable.Asset)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 14:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          this.e(ab$a.bw(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 15:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          this.f(ab$a.bw(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 16:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          v14 = ab$a.bw(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.b)com.google.android.gms.wearable.internal.b.CREATOR.createFromParcel(p1);
          this.a(v14, (com.google.android.gms.wearable.internal.b)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 17:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          v15 = ab$a.bw(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.ao)com.google.android.gms.wearable.internal.ao.CREATOR.createFromParcel(p1);
          this.a(v15, (com.google.android.gms.wearable.internal.ao)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 18:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          this.g(ab$a.bw(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 19:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableService");
          this.h(ab$a.bw(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.wearable.internal.IWearableService");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
