// Decompiled from classes.dex (SourceFile: a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

import android.location.Location;
public abstract class a$a extends android.os.Binder implements com.google.android.gms.location.a {
    // Methods
    public a$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.location.ILocationListener");
    }

    public static com.google.android.gms.location.a aq(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.location.ILocationListener");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.location.a )
        return (com.google.android.gms.location.a)LocalInterface;
      else
        return (com.google.android.gms.location.a)new com.google.android.gms.location.a$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      android.location.Location v7;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.location.ILocationListener");
          if ( p1.readInt() != 0 )
            v7 = (android.location.Location)android.location.Location.CREATOR.createFromParcel(p1);
          else
            v7 = null;
          this.a(v7);
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.location.ILocationListener");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
