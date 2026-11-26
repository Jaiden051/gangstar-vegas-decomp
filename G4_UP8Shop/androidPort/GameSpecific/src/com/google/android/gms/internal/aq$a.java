// Decompiled from classes.dex (SourceFile: aq$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class aq$a extends android.os.Binder implements com.google.android.gms.internal.aq {
    // Methods
    public aq$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.ads.internal.client.IAdListener");
    }

    public static com.google.android.gms.internal.aq e(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.client.IAdListener");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.aq )
        return (com.google.android.gms.internal.aq)LocalInterface;
      else
        return (com.google.android.gms.internal.aq)new com.google.android.gms.internal.aq$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdListener");
          this.a();
          p2.writeNoException();
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdListener");
          this.a(p1.readInt());
          p2.writeNoException();
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdListener");
          this.b();
          p2.writeNoException();
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdListener");
          this.c();
          p2.writeNoException();
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdListener");
          this.d();
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.client.IAdListener");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
