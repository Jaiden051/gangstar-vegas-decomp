// Decompiled from classes.dex (SourceFile: dx$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class dx$a extends android.os.Binder implements com.google.android.gms.internal.dx {
    // Methods
    public dx$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.ads.internal.request.IAdRequestService");
    }

    public static com.google.android.gms.internal.dx y(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.request.IAdRequestService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.dx )
        return (com.google.android.gms.internal.dx)LocalInterface;
      else
        return (com.google.android.gms.internal.dx)new com.google.android.gms.internal.dx$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.internal.dt v7;
      com.google.android.gms.internal.dv v8; // RETVAL
    
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.request.IAdRequestService");
          if ( p1.readInt() != 0 )
            v7 = du.h(p1);
          else
            v7 = null;
          v8 = this.a(v7);
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
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.request.IAdRequestService");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
