// Decompiled from classes.dex (SourceFile: fw$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.ParcelFileDescriptor;
import com.google.android.gms.common.api.StatusCreator;
public abstract class fw$a extends android.os.Binder implements com.google.android.gms.internal.fw {
    // Methods
    public fw$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearchCallbacks");
    }

    public static com.google.android.gms.internal.fw B(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearchCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.fw )
        return (com.google.android.gms.internal.fw)LocalInterface;
      else
        return (com.google.android.gms.internal.fw)new com.google.android.gms.internal.fw$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      com.google.android.gms.common.api.Status v8;
      v5 = null;
      v6 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearchCallbacks");
          if ( p1.readInt() != 0 )
            v5 = StatusCreator._typed_createFromParcel(p1);
          this.a((com.google.android.gms.common.api.Status)v5);
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearchCallbacks");
          if ( p1.readInt() != 0 )
            v8 = StatusCreator._typed_createFromParcel(p1);
          else
            v8 = null;
          if ( p1.readInt() != 0 )
            v5 = (android.os.ParcelFileDescriptor)android.os.ParcelFileDescriptor.CREATOR.createFromParcel(p1);
          this.a(v8, (android.os.ParcelFileDescriptor)v5);
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearchCallbacks");
          if ( p1.readInt() != 0 )
            v5 = StatusCreator._typed_createFromParcel(p1);
          this.a((com.google.android.gms.common.api.Status)v5, p1.readInt() != 0);
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearchCallbacks");
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
