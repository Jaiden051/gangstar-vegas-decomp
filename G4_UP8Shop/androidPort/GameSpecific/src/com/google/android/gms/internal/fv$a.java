// Decompiled from classes.dex (SourceFile: fv$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class fv$a extends android.os.Binder implements com.google.android.gms.internal.fv {
    // Methods
    public static com.google.android.gms.internal.fv A(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearch");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.fv )
        return (com.google.android.gms.internal.fv)LocalInterface;
      else
        return (com.google.android.gms.internal.fv)new com.google.android.gms.internal.fv$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearch");
          this.a(fw$a.B(p1.readStrongBinder()), p1.readString(), (com.google.android.gms.internal.fs[])p1.createTypedArray((android.os.Parcelable.Creator)fs.CREATOR));
          p2.writeNoException();
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearch");
          this.a(fw$a.B(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearch");
          this.b(fw$a.B(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearch");
          this.a(fw$a.B(p1.readStrongBinder()), p1.readInt() != 0);
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearch");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
