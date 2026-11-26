// Decompiled from classes.dex (SourceFile: d$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public abstract class d$a extends android.os.Binder implements com.google.android.gms.maps.internal.d {
    // Methods
    public d$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.maps.internal.IInfoWindowAdapter");
    }

    public static com.google.android.gms.maps.internal.d az(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IInfoWindowAdapter");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.d )
        return (com.google.android.gms.maps.internal.d)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.d)new com.google.android.gms.maps.internal.d$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5 = null;
      boolean v6 = false;
      com.google.android.gms.dynamic.d v8 = null; // RETVAL
      com.google.android.gms.dynamic.d v9 = null; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = null;
            _sw_1 = (p0);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 4; continue _sm; }
            _pc = 5;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.internal.IInfoWindowAdapter");
            v8 = this.a(com.google.android.gms.maps.model.internal.f$a.bc(p1.readStrongBinder()));
            p2.writeNoException();
            if ( v8 != null )
            v5 = v8.asBinder();
            _pc = 3;
            continue _sm;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.internal.IInfoWindowAdapter");
            v9 = this.b(com.google.android.gms.maps.model.internal.f$a.bc(p1.readStrongBinder()));
            p2.writeNoException();
            if ( v9 != null )
            v5 = v9.asBinder();
            _pc = 3;
            continue _sm;
          case 3:
            p2.writeStrongBinder(v5);
            v6 = true;
            _pc = 6;
            continue _sm;
          case 4:
            p2.writeString("com.google.android.gms.maps.internal.IInfoWindowAdapter");
            v6 = true;
            _pc = 6;
            continue _sm;
          case 5:
            v6 = super.onTransact(p0, p1, p2, p3);
            _pc = 6;
            continue _sm;
          case 6:
            return v6;
        }
      }
}

}
