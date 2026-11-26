// Decompiled from classes.dex (SourceFile: s$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
public abstract class s$a extends android.os.Binder implements com.google.android.gms.internal.s {
    // Methods
    public static com.google.android.gms.internal.s a(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.auth.IAuthManagerService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.s )
        return (com.google.android.gms.internal.s)LocalInterface;
      else
        return (com.google.android.gms.internal.s)new com.google.android.gms.internal.s$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.Bundle v5;
      boolean v6;
      String String;
      String v9;
      android.os.Bundle v10; // RETVAL
      String v11;
      android.os.Bundle v12; // RETVAL
    
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.auth.IAuthManagerService");
          String = p1.readString();
          v9 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          v10 = this.a(String, v9, v5);
          p2.writeNoException();
          if ( v10 != null )
          {
            p2.writeInt(1);
            v10.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.auth.IAuthManagerService");
          v11 = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          v12 = this.a(v11, v5);
          p2.writeNoException();
          if ( v12 != null )
          {
            p2.writeInt(1);
            v12.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.auth.IAuthManagerService");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
