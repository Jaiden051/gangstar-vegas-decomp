// Decompiled from classes.dex (SourceFile: gm$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class gm$a extends android.os.Binder implements com.google.android.gms.internal.gm {
    // Methods
    public static com.google.android.gms.internal.gm H(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.cast.internal.ICastDeviceController");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.gm )
        return (com.google.android.gms.internal.gm)LocalInterface;
      else
        return (com.google.android.gms.internal.gm)new com.google.android.gms.internal.gm$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      String String;
      com.google.android.gms.cast.LaunchOptions v8;
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.a();
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.a(p1.readString(), p1.readInt() != 0);
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.a(p1.readString(), p1.readString());
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.b();
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.a(p1.readString());
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.c();
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.a(p1.readDouble(), p1.readDouble(), p1.readInt() != 0);
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.a(p1.readInt() != 0, p1.readDouble(), p1.readInt() != 0);
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.a(p1.readString(), p1.readString(), p1.readLong());
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.a(p1.readString(), p1.createByteArray(), p1.readLong());
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.b(p1.readString());
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          this.c(p1.readString());
          break;
        case 13:
          p1.enforceInterface("com.google.android.gms.cast.internal.ICastDeviceController");
          String = p1.readString();
          if ( p1.readInt() != 0 )
            v8 = (com.google.android.gms.cast.LaunchOptions)com.google.android.gms.cast.LaunchOptions.CREATOR.createFromParcel(p1);
          else
            v8 = null;
          this.a(String, v8);
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.cast.internal.ICastDeviceController");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
