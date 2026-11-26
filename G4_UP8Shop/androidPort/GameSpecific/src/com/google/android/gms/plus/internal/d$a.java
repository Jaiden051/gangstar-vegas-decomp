// Decompiled from classes.dex (SourceFile: d$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

import android.net.Uri;
import android.os.Bundle;
import com.google.android.gms.internal.ht;
import com.google.android.gms.internal.ig;
public abstract class d$a extends android.os.Binder implements com.google.android.gms.plus.internal.d {
    // Methods
    public static com.google.android.gms.plus.internal.d bm(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.plus.internal.IPlusService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.plus.internal.d )
        return (com.google.android.gms.plus.internal.d)LocalInterface;
      else
        return (com.google.android.gms.plus.internal.d)new com.google.android.gms.plus.internal.d$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      com.google.android.gms.internal.Decomp_if v8;
      String v9; // RETVAL
      com.google.android.gms.plus.internal.b v10;
      android.net.Uri v11;
      android.os.Bundle v12;
      com.google.android.gms.plus.internal.b v13;
      int Int;
      String String;
      android.net.Uri v16;
      com.google.android.gms.internal.hh v17; // RETVAL
      String v18; // RETVAL
      boolean v19; // RETVAL
      String v20; // RETVAL
      com.google.android.gms.plus.internal.b v21;
      String v22;
      com.google.android.gms.internal.hs v23;
      v5 = null;
      v6 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.a(b$a.bk(p1.readStrongBinder()), p1.readString());
          p2.writeNoException();
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.a(b$a.bk(p1.readStrongBinder()), p1.readString(), p1.readString());
          p2.writeNoException();
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.b(b$a.bk(p1.readStrongBinder()), p1.readString());
          p2.writeNoException();
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          if ( p1.readInt() != 0 )
            v8 = ig.L(p1);
          else
            v8 = null;
          this.a(v8);
          p2.writeNoException();
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          v9 = this.a();
          p2.writeNoException();
          p2.writeString(v9);
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.b();
          p2.writeNoException();
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.a(b$a.bk(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          v10 = b$a.bk(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v11 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(p1);
          else
            v11 = null;
          if ( p1.readInt() != 0 )
            v12 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v12 = null;
          this.a(v10, v11, v12);
          p2.writeNoException();
          break;
        case 14:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          v13 = b$a.bk(p1.readStrongBinder());
          Int = p1.readInt();
          String = p1.readString();
          if ( p1.readInt() != 0 )
            v16 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(p1);
          else
            v16 = null;
          this.a(v13, Int, String, v16, p1.readString(), p1.readString());
          p2.writeNoException();
          break;
        case 16:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          v17 = this.a(b$a.bk(p1.readStrongBinder()), p1.readInt(), p1.readInt(), p1.readInt(), p1.readString());
          p2.writeNoException();
          if ( v17 != null )
            v5 = v17.asBinder();
          p2.writeStrongBinder((android.os.IBinder)v5);
          break;
        case 17:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.a(p1.readString());
          p2.writeNoException();
          break;
        case 18:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.c(b$a.bk(p1.readStrongBinder()), p1.readString());
          p2.writeNoException();
          break;
        case 19:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.b(b$a.bk(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 34:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.a(b$a.bk(p1.readStrongBinder()), p1.createStringArrayList());
          p2.writeNoException();
          break;
        case 40:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.d(b$a.bk(p1.readStrongBinder()), p1.readString());
          p2.writeNoException();
          break;
        case 41:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          v18 = this.c();
          p2.writeNoException();
          p2.writeString(v18);
          break;
        case 42:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          v19 = this.d();
          p2.writeNoException();
          p2.writeInt(com.gameloft.android.DecompRT.b2i(v19));
          break;
        case 43:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          v20 = this.e();
          p2.writeNoException();
          p2.writeString(v20);
          break;
        case 44:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          this.e(b$a.bk(p1.readStrongBinder()), p1.readString());
          p2.writeNoException();
          break;
        case 45:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          v21 = b$a.bk(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = ig.L(p1);
          this.a(v21, (com.google.android.gms.internal.Decomp_if)v5);
          p2.writeNoException();
          break;
        case 46:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusService");
          v22 = p1.readString();
          if ( p1.readInt() != 0 )
            v23 = ht.D(p1);
          else
            v23 = null;
          if ( p1.readInt() != 0 )
            v5 = ht.D(p1);
          this.a(v22, v23, (com.google.android.gms.internal.hs)v5);
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.plus.internal.IPlusService");
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
