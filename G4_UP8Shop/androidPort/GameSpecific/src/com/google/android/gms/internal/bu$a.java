// Decompiled from classes.dex (SourceFile: bu$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class bu$a extends android.os.Binder implements com.google.android.gms.internal.bu {
    // Methods
    public bu$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.ads.internal.mediation.client.IAdapterCreator");
    }

    public static com.google.android.gms.internal.bu i(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.mediation.client.IAdapterCreator");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.bu )
        return (com.google.android.gms.internal.bu)LocalInterface;
      else
        return (com.google.android.gms.internal.bu)new com.google.android.gms.internal.bu$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.internal.bv v7; // RETVAL
      android.os.IBinder v8;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IAdapterCreator");
          v7 = this.a(p1.readString());
          p2.writeNoException();
          if ( v7 != null )
            v8 = v7.asBinder();
          else
            v8 = null;
          p2.writeStrongBinder(v8);
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.mediation.client.IAdapterCreator");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
