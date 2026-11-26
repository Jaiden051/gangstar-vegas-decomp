// Decompiled from classes.dex (SourceFile: b$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

import android.os.Bundle;
import android.os.ParcelFileDescriptor;
import com.google.android.gms.common.api.StatusCreator;
import com.google.android.gms.internal.ig;
import com.google.android.gms.internal.ku;
public abstract class b$a extends android.os.Binder implements com.google.android.gms.plus.internal.b {
    // Methods
    public b$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.plus.internal.IPlusCallbacks");
    }

    public static com.google.android.gms.plus.internal.b bk(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.plus.internal.b )
        return (com.google.android.gms.plus.internal.b)LocalInterface;
      else
        return (com.google.android.gms.plus.internal.b)new com.google.android.gms.plus.internal.b$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      int Int;
      android.os.Bundle v9;
      android.os.Bundle v10;
      int v11;
      android.os.Bundle v12;
      android.os.ParcelFileDescriptor v13;
      int v14;
      android.os.Bundle v15;
      int v16;
      android.os.Bundle v17;
      int v18;
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          Int = p1.readInt();
          if ( p1.readInt() != 0 )
            v9 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v9 = null;
          if ( p1.readInt() != 0 )
            v10 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v10 = null;
          this.a(Int, v9, v10);
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          v11 = p1.readInt();
          if ( p1.readInt() != 0 )
            v12 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v12 = null;
          if ( p1.readInt() != 0 )
            v13 = (android.os.ParcelFileDescriptor)android.os.ParcelFileDescriptor.CREATOR.createFromParcel(p1);
          else
            v13 = null;
          this.a(v11, v12, v13);
          p2.writeNoException();
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          this.a(p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a((com.google.android.gms.common.data.DataHolder)v5, p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          v14 = p1.readInt();
          if ( p1.readInt() != 0 )
            v15 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v15 = null;
          if ( p1.readInt() != 0 )
            v5 = ig.L(p1);
          this.a(v14, v15, (com.google.android.gms.internal.Decomp_if)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a((com.google.android.gms.common.data.DataHolder)v5, p1.readString(), p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          v16 = p1.readInt();
          if ( p1.readInt() != 0 )
            v17 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v17 = null;
          this.a(v16, v17);
          p2.writeNoException();
          v6 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          this.b(p1.readString());
          p2.writeNoException();
          v6 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          v18 = p1.readInt();
          if ( p1.readInt() != 0 )
            v5 = ku.bG(p1);
          this.a(v18, (com.google.android.gms.internal.kt)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.plus.internal.IPlusCallbacks");
          if ( p1.readInt() != 0 )
            v5 = StatusCreator._typed_createFromParcel(p1);
          this.a((com.google.android.gms.common.api.Status)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.plus.internal.IPlusCallbacks");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
