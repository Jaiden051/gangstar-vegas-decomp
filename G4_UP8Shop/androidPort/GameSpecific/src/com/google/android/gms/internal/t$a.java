// Decompiled from classes.dex (SourceFile: t$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class t$a extends android.os.Binder implements com.google.android.gms.internal.t {
    // Methods
    public static com.google.android.gms.internal.t b(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.t )
        return (com.google.android.gms.internal.t)LocalInterface;
      else
        return (com.google.android.gms.internal.t)new com.google.android.gms.internal.t$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      String v7; // RETVAL
      boolean v8; // RETVAL
      String v9; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
          v7 = this.a();
          p2.writeNoException();
          p2.writeString(v7);
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
          v8 = this.a(p1.readInt() != 0);
          p2.writeNoException();
          p2.writeInt(com.gameloft.android.DecompRT.b2i(v8));
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
          v9 = this.a(p1.readString());
          p2.writeNoException();
          p2.writeString(v9);
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
          this.a(p1.readString(), p1.readInt() != 0);
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
