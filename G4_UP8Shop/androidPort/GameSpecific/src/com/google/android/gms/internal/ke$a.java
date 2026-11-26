// Decompiled from classes.dex (SourceFile: ke$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.content.Intent;
import android.os.Bundle;
public abstract class ke$a extends android.os.Binder implements com.google.android.gms.internal.ke {
    // Methods
    public ke$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.panorama.internal.IPanoramaCallbacks");
    }

    public static com.google.android.gms.internal.ke bh(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.panorama.internal.IPanoramaCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.ke )
        return (com.google.android.gms.internal.ke)LocalInterface;
      else
        return (com.google.android.gms.internal.ke)new com.google.android.gms.internal.ke$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      int Int;
      android.os.Bundle v8;
      int v9;
      android.content.Intent v10;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.panorama.internal.IPanoramaCallbacks");
          Int = p1.readInt();
          if ( p1.readInt() != 0 )
            v8 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v8 = null;
          v9 = p1.readInt();
          if ( p1.readInt() != 0 )
            v10 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(p1);
          else
            v10 = null;
          this.a(Int, v8, v9, v10);
          p2.writeNoException();
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.panorama.internal.IPanoramaCallbacks");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
