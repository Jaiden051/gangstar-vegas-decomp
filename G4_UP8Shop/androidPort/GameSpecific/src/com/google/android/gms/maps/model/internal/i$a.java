// Decompiled from classes.dex (SourceFile: i$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

public abstract class i$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.i {
    // Methods
    public i$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.maps.model.internal.ITileProviderDelegate");
    }

    public static com.google.android.gms.maps.model.internal.i bg(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.ITileProviderDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.i )
        return (com.google.android.gms.maps.model.internal.i)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.i)new com.google.android.gms.maps.model.internal.i$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.maps.model.Tile v7; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileProviderDelegate");
          v7 = this.a(p1.readInt(), p1.readInt(), p1.readInt());
          p2.writeNoException();
          if ( v7 != null )
          {
            p2.writeInt(1);
            v7.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.maps.model.internal.ITileProviderDelegate");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
