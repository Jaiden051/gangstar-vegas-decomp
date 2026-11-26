// Decompiled from classes.dex (SourceFile: gn$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class gn$a extends android.os.Binder implements com.google.android.gms.internal.gn {
    // Methods
    public gn$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.cast.internal.ICastDeviceControllerListener");
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
      v6 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          this.a(p1.readInt());
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.cast.ApplicationMetadata)com.google.android.gms.cast.ApplicationMetadata.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.cast.ApplicationMetadata)v5, p1.readString(), p1.readString(), p1.readInt() != 0);
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          this.b(p1.readInt());
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          p1.readString();
          p1.readDouble();
          p1.readInt();
          this.a();
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          this.a(p1.readString(), p1.readString());
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          this.a(p1.readString(), p1.createByteArray());
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          this.d(p1.readInt());
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          this.c(p1.readInt());
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          this.e(p1.readInt());
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          p1.readString();
          this.a(p1.readLong(), p1.readInt());
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          p1.readString();
          this.a(p1.readLong());
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.internal.gf)com.google.android.gms.internal.gf.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.internal.gf)v5);
          break;
        case 13:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.internal.gk)com.google.android.gms.internal.gk.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.internal.gk)v5);
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.cast.internal.ICastDeviceControllerListener");
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
