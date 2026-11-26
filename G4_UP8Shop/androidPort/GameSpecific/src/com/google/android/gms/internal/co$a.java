// Decompiled from classes.dex (SourceFile: co$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
public abstract class co$a extends android.os.Binder implements com.google.android.gms.internal.co {
    // Methods
    public co$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
    }

    public static com.google.android.gms.internal.co m(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.co )
        return (com.google.android.gms.internal.co)LocalInterface;
      else
        return (com.google.android.gms.internal.co)new com.google.android.gms.internal.co$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.Bundle v5;
      boolean v6;
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.a(v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          this.d();
          p2.writeNoException();
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          this.e();
          p2.writeNoException();
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          this.f();
          p2.writeNoException();
          v6 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          this.g();
          p2.writeNoException();
          v6 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          this.b(v5);
          p2.writeNoException();
          if ( v5 != null )
          {
            p2.writeInt(1);
            v5.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          v6 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          this.h();
          p2.writeNoException();
          v6 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          this.i();
          p2.writeNoException();
          v6 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          this.j();
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.overlay.client.IAdOverlay");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
