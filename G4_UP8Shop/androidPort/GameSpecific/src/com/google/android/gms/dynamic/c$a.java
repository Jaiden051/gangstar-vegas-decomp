// Decompiled from classes.dex (SourceFile: c$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

import android.content.Intent;
public abstract class c$a extends android.os.Binder implements com.google.android.gms.dynamic.c {
    // Methods
    public c$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.dynamic.IFragmentWrapper");
    }

    public static com.google.android.gms.dynamic.c af(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.dynamic.IFragmentWrapper");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.dynamic.c )
        return (com.google.android.gms.dynamic.c)LocalInterface;
      else
        return (com.google.android.gms.dynamic.c)new com.google.android.gms.dynamic.c$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5 = null;
      boolean v6 = false;
      com.google.android.gms.dynamic.d v8 = null; // RETVAL
      android.os.Bundle v9 = null; // RETVAL
      int v10 = 0; // RETVAL
      com.google.android.gms.dynamic.c v11 = null; // RETVAL
      com.google.android.gms.dynamic.d v12 = null; // RETVAL
      boolean v13 = false; // RETVAL
      String v14 = null; // RETVAL
      com.google.android.gms.dynamic.c v15 = null; // RETVAL
      int v16 = 0; // RETVAL
      boolean v17 = false; // RETVAL
      int v18 = 0;
      com.google.android.gms.dynamic.d v19 = null; // RETVAL
      boolean v20 = false; // RETVAL
      boolean v21 = false; // RETVAL
      boolean v22 = false; // RETVAL
      boolean v23 = false; // RETVAL
      boolean v24 = false; // RETVAL
      boolean v25 = false; // RETVAL
      boolean v26 = false; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = null;
            v6 = true;
            _sw_1 = (p0);
            if ( (_sw_1 == (2)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (7)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (8)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (10)) ) { _pc = 9; continue _sm; }
            if ( (_sw_1 == (11)) ) { _pc = 10; continue _sm; }
            if ( (_sw_1 == (12)) ) { _pc = 11; continue _sm; }
            if ( (_sw_1 == (13)) ) { _pc = 13; continue _sm; }
            if ( (_sw_1 == (14)) ) { _pc = 14; continue _sm; }
            if ( (_sw_1 == (15)) ) { _pc = 15; continue _sm; }
            if ( (_sw_1 == (16)) ) { _pc = 16; continue _sm; }
            if ( (_sw_1 == (17)) ) { _pc = 17; continue _sm; }
            if ( (_sw_1 == (18)) ) { _pc = 18; continue _sm; }
            if ( (_sw_1 == (19)) ) { _pc = 19; continue _sm; }
            if ( (_sw_1 == (20)) ) { _pc = 21; continue _sm; }
            if ( (_sw_1 == (21)) ) { _pc = 22; continue _sm; }
            if ( (_sw_1 == (22)) ) { _pc = 23; continue _sm; }
            if ( (_sw_1 == (23)) ) { _pc = 24; continue _sm; }
            if ( (_sw_1 == (24)) ) { _pc = 25; continue _sm; }
            if ( (_sw_1 == (25)) ) { _pc = 26; continue _sm; }
            if ( (_sw_1 == (26)) ) { _pc = 27; continue _sm; }
            if ( (_sw_1 == (27)) ) { _pc = 28; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 29; continue _sm; }
            _pc = 30;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v8 = this.a();
            p2.writeNoException();
            if ( v8 != null )
            v5 = v8.asBinder();
            _pc = 12;
            continue _sm;
          case 2:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v9 = this.b();
            p2.writeNoException();
            if ( v9 != null )
            {
            p2.writeInt(1);
            v9.writeToParcel(p2, 1);
            }
            else
            {
            p2.writeInt(0);
            }
            return v6;
          case 3:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v10 = this.c();
            p2.writeNoException();
            p2.writeInt(v10);
            return v6;
          case 4:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v11 = this.d();
            p2.writeNoException();
            if ( v11 != null )
            v5 = v11.asBinder();
            _pc = 12;
            continue _sm;
          case 5:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v12 = this.e();
            p2.writeNoException();
            if ( v12 != null )
            v5 = v12.asBinder();
            _pc = 12;
            continue _sm;
          case 6:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v13 = this.f();
            p2.writeNoException();
            p2.writeInt(com.gameloft.android.DecompRT.b2i(v13));
            return v6;
          case 7:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v14 = this.g();
            p2.writeNoException();
            p2.writeString(v14);
            return v6;
          case 8:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v15 = this.h();
            p2.writeNoException();
            if ( v15 != null )
            v5 = v15.asBinder();
            _pc = 12;
            continue _sm;
          case 9:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v16 = this.i();
            p2.writeNoException();
            p2.writeInt(v16);
            return v6;
          case 10:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v17 = this.j();
            p2.writeNoException();
            v18 = v17 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 11:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v19 = this.k();
            p2.writeNoException();
            if ( v19 != null )
            v5 = v19.asBinder();
            _pc = 12;
            continue _sm;
          case 12:
            p2.writeStrongBinder((android.os.IBinder)v5);
            return v6;
          case 13:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v20 = this.l();
            p2.writeNoException();
            v18 = v20 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 14:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v21 = this.m();
            p2.writeNoException();
            v18 = v21 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 15:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v22 = this.n();
            p2.writeNoException();
            v18 = v22 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 16:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v23 = this.o();
            p2.writeNoException();
            v18 = v23 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 17:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v24 = this.p();
            p2.writeNoException();
            v18 = v24 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 18:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v25 = this.q();
            p2.writeNoException();
            v18 = v25 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 19:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            v26 = this.r();
            p2.writeNoException();
            v18 = v26 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 20:
            p2.writeInt(v18);
            _pc = 31;
            continue _sm;
          case 21:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 31;
            continue _sm;
          case 22:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            _pc = 31;
            continue _sm;
          case 23:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            this.b(p1.readInt() != 0);
            p2.writeNoException();
            _pc = 31;
            continue _sm;
          case 24:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            this.c(p1.readInt() != 0);
            p2.writeNoException();
            _pc = 31;
            continue _sm;
          case 25:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            this.d(p1.readInt() != 0);
            p2.writeNoException();
            _pc = 31;
            continue _sm;
          case 26:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            if ( p1.readInt() != 0 )
            v5 = Intent.CREATOR.createFromParcel(p1);
            this.a((android.content.Intent)v5);
            p2.writeNoException();
            _pc = 31;
            continue _sm;
          case 27:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            if ( p1.readInt() != 0 )
            v5 = Intent.CREATOR.createFromParcel(p1);
            this.a((android.content.Intent)v5, p1.readInt());
            p2.writeNoException();
            _pc = 31;
            continue _sm;
          case 28:
            p1.enforceInterface("com.google.android.gms.dynamic.IFragmentWrapper");
            this.b(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 31;
            continue _sm;
          case 29:
            p2.writeString("com.google.android.gms.dynamic.IFragmentWrapper");
            _pc = 31;
            continue _sm;
          case 30:
            v6 = super.onTransact(p0, p1, p2, p3);
            _pc = 31;
            continue _sm;
          case 31:
            return v6;
        }
      }
}

}
