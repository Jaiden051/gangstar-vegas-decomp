// Decompiled from classes.dex (SourceFile: ac$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public abstract class ac$a extends android.os.Binder implements com.google.android.gms.drive.internal.ac {
    // Methods
    public ac$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.drive.internal.IEventCallback");
    }

    public static com.google.android.gms.drive.internal.ac R(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.internal.IEventCallback");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.internal.ac )
        return (com.google.android.gms.drive.internal.ac)LocalInterface;
      else
        return (com.google.android.gms.drive.internal.ac)new com.google.android.gms.drive.internal.ac$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.drive.internal.OnEventResponse v7;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.drive.internal.IEventCallback");
          if ( p1.readInt() != 0 )
            v7 = (com.google.android.gms.drive.internal.OnEventResponse)com.google.android.gms.drive.internal.OnEventResponse.CREATOR.createFromParcel(p1);
          else
            v7 = null;
          this.a(v7);
          p2.writeNoException();
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.internal.IEventCallback");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
