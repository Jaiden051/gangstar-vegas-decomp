// Decompiled from classes.dex (SourceFile: kf$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
import android.os.Bundle;
public abstract class kf$a extends android.os.Binder implements com.google.android.gms.internal.kf {
    // Methods
    public static com.google.android.gms.internal.kf bi(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.panorama.internal.IPanoramaService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.kf )
        return (com.google.android.gms.internal.kf)LocalInterface;
      else
        return (com.google.android.gms.internal.kf)new com.google.android.gms.internal.kf$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.internal.ke v7;
      android.net.Uri v8;
      android.os.Bundle v9;
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.panorama.internal.IPanoramaService");
          v7 = ke$a.bh(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v8 = (android.net.Uri)android.net.Uri.CREATOR.createFromParcel(p1);
          else
            v8 = null;
          if ( p1.readInt() != 0 )
            v9 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v9 = null;
          this.a(v7, v8, v9, p1.readInt() != 0);
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.panorama.internal.IPanoramaService");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
