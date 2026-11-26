// Decompiled from classes.dex (SourceFile: c$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

public abstract class c$a extends android.os.Binder implements com.google.android.gms.plus.internal.c {
    // Methods
    public static com.google.android.gms.plus.internal.c bl(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.plus.internal.IPlusOneButtonCreator");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.plus.internal.c )
        return (com.google.android.gms.plus.internal.c)LocalInterface;
      else
        return (com.google.android.gms.plus.internal.c)new com.google.android.gms.plus.internal.c$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5;
      boolean v6;
      com.google.android.gms.dynamic.d v8; // RETVAL
      android.os.IBinder v9;
      com.google.android.gms.dynamic.d v10; // RETVAL
    
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusOneButtonCreator");
          v8 = this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()), p1.readInt(), p1.readInt(), p1.readString(), p1.readInt());
          p2.writeNoException();
          if ( v8 != null )
            v9 = v8.asBinder();
          else
            v9 = null;
          p2.writeStrongBinder(v9);
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusOneButtonCreator");
          v10 = this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()), p1.readInt(), p1.readInt(), p1.readString(), p1.readString());
          p2.writeNoException();
          if ( v10 != null )
            v5 = v10.asBinder();
          p2.writeStrongBinder(v5);
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.plus.internal.IPlusOneButtonCreator");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
