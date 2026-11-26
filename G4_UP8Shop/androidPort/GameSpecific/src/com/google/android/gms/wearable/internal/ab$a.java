// Decompiled from classes.dex (SourceFile: ab$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import com.google.android.gms.common.api.StatusCreator;
public abstract class ab$a extends android.os.Binder implements com.google.android.gms.wearable.internal.ab {
    // Methods
    public ab$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.wearable.internal.IWearableCallbacks");
    }

    public static com.google.android.gms.wearable.internal.ab bw(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.wearable.internal.ab )
        return (com.google.android.gms.wearable.internal.ab)LocalInterface;
      else
        return (com.google.android.gms.wearable.internal.ab)new com.google.android.gms.wearable.internal.ab$a$a(p0);
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
        case 2:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.r)com.google.android.gms.wearable.internal.r.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.r)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.am)com.google.android.gms.wearable.internal.am.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.am)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.v)com.google.android.gms.wearable.internal.v.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.v)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.p)com.google.android.gms.wearable.internal.p.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.p)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.aq)com.google.android.gms.wearable.internal.aq.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.aq)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.x)com.google.android.gms.wearable.internal.x.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.x)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.z)com.google.android.gms.wearable.internal.z.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.z)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.t)com.google.android.gms.wearable.internal.t.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.t)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = StatusCreator._typed_createFromParcel(p1);
          this.a((com.google.android.gms.common.api.Status)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.as)com.google.android.gms.wearable.internal.as.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.as)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.wearable.internal.IWearableCallbacks");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
