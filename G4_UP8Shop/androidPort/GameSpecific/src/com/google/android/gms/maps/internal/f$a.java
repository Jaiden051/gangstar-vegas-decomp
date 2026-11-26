// Decompiled from classes.dex (SourceFile: f$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public abstract class f$a extends android.os.Binder implements com.google.android.gms.maps.internal.f {
    // Methods
    public f$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.maps.internal.IOnIndoorStateChangeListener");
    }

    public static com.google.android.gms.maps.internal.f aE(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IOnIndoorStateChangeListener");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.f )
        return (com.google.android.gms.maps.internal.f)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.f)new com.google.android.gms.maps.internal.f$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.maps.internal.IOnIndoorStateChangeListener");
          this.a();
          p2.writeNoException();
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.maps.internal.IOnIndoorStateChangeListener");
          this.a(com.google.android.gms.maps.model.internal.d$a.ba(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.maps.internal.IOnIndoorStateChangeListener");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
