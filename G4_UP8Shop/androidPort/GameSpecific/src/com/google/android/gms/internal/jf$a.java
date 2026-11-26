// Decompiled from classes.dex (SourceFile: jf$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.app.PendingIntent;
import android.location.Location;
import com.google.android.gms.location.LocationRequestCreator;
import com.google.android.gms.maps.model.LatLngBoundsCreator;
import com.google.android.gms.maps.model.LatLngCreator;
public abstract class jf$a extends android.os.Binder implements com.google.android.gms.internal.jf {
    // Methods
    public static com.google.android.gms.internal.jf as(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.jf )
        return (com.google.android.gms.internal.jf)LocalInterface;
      else
        return (com.google.android.gms.internal.jf)new com.google.android.gms.internal.jf$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5 = false;
      Object v6 = null;
      java.util.ArrayList TypedArrayList = null;
      android.app.PendingIntent v9 = null;
      android.app.PendingIntent v10 = null;
      long Long = 0L;
      boolean v12 = false;
      android.app.PendingIntent v13 = null;
      android.app.PendingIntent v14 = null;
      android.location.Location v15 = null; // RETVAL
      com.google.android.gms.location.LocationRequest v16 = null;
      android.app.PendingIntent v17 = null;
      android.app.PendingIntent v18 = null;
      android.location.Location v19 = null;
      com.google.android.gms.maps.model.LatLngBounds v20 = null;
      int Int = 0;
      com.google.android.gms.internal.jn v22 = null;
      com.google.android.gms.internal.kb v23 = null;
      com.google.android.gms.maps.model.LatLngBounds v24 = null;
      int v25 = 0;
      String v26 = null;
      com.google.android.gms.internal.jn v27 = null;
      String String = null;
      com.google.android.gms.maps.model.LatLng v29 = null;
      com.google.android.gms.internal.jn v30 = null;
      com.google.android.gms.internal.jn v31 = null;
      String v32 = null;
      String v33 = null;
      java.util.ArrayList StringArrayList = null;
      java.util.ArrayList v35 = null;
      com.google.android.gms.internal.kb v36 = null;
      com.google.android.gms.internal.jr v37 = null;
      com.google.android.gms.internal.kb v38 = null;
      android.app.PendingIntent v39 = null;
      com.google.android.gms.internal.kb v40 = null;
      android.app.PendingIntent v41 = null;
      com.google.android.gms.internal.jl v42 = null;
      com.google.android.gms.internal.kb v43 = null;
      android.app.PendingIntent v44 = null;
      com.google.android.gms.internal.kb v45 = null;
      android.app.PendingIntent v46 = null;
      String v47 = null;
      com.google.android.gms.maps.model.LatLngBounds v48 = null;
      com.google.android.gms.internal.jn v49 = null;
      com.google.android.gms.internal.kb v50 = null;
      com.google.android.gms.internal.jv v51 = null;
      com.google.android.gms.internal.jp v52 = null;
      android.location.Location v53 = null;
      com.google.android.gms.location.b v54 = null; // RETVAL
      android.os.IBinder v55 = null; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = true;
            v6 = null;
            _sw_1 = (p0);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (7)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (8)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 9; continue _sm; }
            if ( (_sw_1 == (10)) ) { _pc = 10; continue _sm; }
            if ( (_sw_1 == (11)) ) { _pc = 11; continue _sm; }
            if ( (_sw_1 == (12)) ) { _pc = 12; continue _sm; }
            if ( (_sw_1 == (13)) ) { _pc = 13; continue _sm; }
            if ( (_sw_1 == (14)) ) { _pc = 14; continue _sm; }
            if ( (_sw_1 == (15)) ) { _pc = 15; continue _sm; }
            if ( (_sw_1 == (16)) ) { _pc = 16; continue _sm; }
            if ( (_sw_1 == (17)) ) { _pc = 17; continue _sm; }
            if ( (_sw_1 == (18)) ) { _pc = 18; continue _sm; }
            if ( (_sw_1 == (19)) ) { _pc = 19; continue _sm; }
            if ( (_sw_1 == (20)) ) { _pc = 20; continue _sm; }
            if ( (_sw_1 == (21)) ) { _pc = 21; continue _sm; }
            if ( (_sw_1 == (25)) ) { _pc = 23; continue _sm; }
            if ( (_sw_1 == (26)) ) { _pc = 24; continue _sm; }
            if ( (_sw_1 == (34)) ) { _pc = 25; continue _sm; }
            if ( (_sw_1 == (42)) ) { _pc = 28; continue _sm; }
            if ( (_sw_1 == (45)) ) { _pc = 29; continue _sm; }
            if ( (_sw_1 == (46)) ) { _pc = 30; continue _sm; }
            if ( (_sw_1 == (47)) ) { _pc = 31; continue _sm; }
            if ( (_sw_1 == (48)) ) { _pc = 32; continue _sm; }
            if ( (_sw_1 == (49)) ) { _pc = 33; continue _sm; }
            if ( (_sw_1 == (50)) ) { _pc = 34; continue _sm; }
            if ( (_sw_1 == (51)) ) { _pc = 35; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 36; continue _sm; }
            _pc = 37;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            TypedArrayList = p1.createTypedArrayList((android.os.Parcelable.Creator)ji.CREATOR);
            if ( p1.readInt() != 0 )
            v9 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v9 = null;
            this.a(TypedArrayList, v9, je$a.ar(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v5;
          case 2:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v10 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v10 = null;
            this.a(v10, je$a.ar(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v5;
          case 3:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            this.a(p1.createStringArray(), je$a.ar(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v5;
          case 4:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            this.a(je$a.ar(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v5;
          case 5:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            Long = p1.readLong();
            v12 = p1.readInt() != 0;
            if ( p1.readInt() != 0 )
            v13 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v13 = null;
            this.a(Long, v12, v13);
            p2.writeNoException();
            return v5;
          case 6:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v14 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v14 = null;
            this.a(v14);
            p2.writeNoException();
            return v5;
          case 7:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            v15 = this.a();
            p2.writeNoException();
            if ( v15 == null )
            { _pc = 26; continue _sm; }
            _pc = 22;
            continue _sm;
          case 8:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v6 = LocationRequestCreator._typed_createFromParcel(p1);
            this.a((com.google.android.gms.location.LocationRequest)v6, com.google.android.gms.location.a$a.aq(p1.readStrongBinder()));
            p2.writeNoException();
            return v5;
          case 9:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v16 = LocationRequestCreator._typed_createFromParcel(p1);
            else
            v16 = null;
            if ( p1.readInt() != 0 )
            v17 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v17 = null;
            this.a(v16, v17);
            p2.writeNoException();
            return v5;
          case 10:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            this.a(com.google.android.gms.location.a$a.aq(p1.readStrongBinder()));
            p2.writeNoException();
            return v5;
          case 11:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v18 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v18 = null;
            this.b(v18);
            p2.writeNoException();
            return v5;
          case 12:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 13:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v19 = (android.location.Location)android.location.Location.CREATOR.createFromParcel(p1);
            else
            v19 = null;
            this.a(v19);
            p2.writeNoException();
            return v5;
          case 14:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v20 = LatLngBoundsCreator._typed_createFromParcel(p1);
            else
            v20 = null;
            Int = p1.readInt();
            if ( p1.readInt() != 0 )
            v22 = jo.bv(p1);
            else
            v22 = null;
            if ( p1.readInt() != 0 )
            v23 = kc.bB(p1);
            else
            v23 = null;
            this.a(v20, Int, v22, v23, jz$a.au(p1.readStrongBinder()));
            p2.writeNoException();
            return v5;
          case 15:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            String = p1.readString();
            if ( p1.readInt() != 0 )
            v6 = kc.bB(p1);
            this.a(String, (com.google.android.gms.internal.kb)v6, jz$a.au(p1.readStrongBinder()));
            p2.writeNoException();
            return v5;
          case 16:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v29 = LatLngCreator._typed_createFromParcel(p1);
            else
            v29 = null;
            if ( p1.readInt() != 0 )
            v30 = jo.bv(p1);
            else
            v30 = null;
            if ( p1.readInt() != 0 )
            v6 = kc.bB(p1);
            this.a(v29, v30, (com.google.android.gms.internal.kb)v6, jz$a.au(p1.readStrongBinder()));
            p2.writeNoException();
            return v5;
          case 17:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v31 = jo.bv(p1);
            else
            v31 = null;
            if ( p1.readInt() != 0 )
            v6 = kc.bB(p1);
            this.a(v31, (com.google.android.gms.internal.kb)v6, jz$a.au(p1.readStrongBinder()));
            p2.writeNoException();
            return v5;
          case 18:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v37 = js.bx(p1);
            else
            v37 = null;
            if ( p1.readInt() != 0 )
            v38 = kc.bB(p1);
            else
            v38 = null;
            if ( p1.readInt() != 0 )
            v39 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v39 = null;
            this.a(v37, v38, v39);
            p2.writeNoException();
            return v5;
          case 19:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v40 = kc.bB(p1);
            else
            v40 = null;
            if ( p1.readInt() != 0 )
            v41 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v41 = null;
            this.a(v40, v41);
            p2.writeNoException();
            return v5;
          case 20:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v6 = LocationRequestCreator._typed_createFromParcel(p1);
            this.a((com.google.android.gms.location.LocationRequest)v6, com.google.android.gms.location.a$a.aq(p1.readStrongBinder()), p1.readString());
            p2.writeNoException();
            return v5;
          case 21:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            v15 = this.a(p1.readString());
            p2.writeNoException();
            if ( v15 == null )
            { _pc = 26; continue _sm; }
            _pc = 22;
            continue _sm;
          case 22:
            p2.writeInt(1);
            v15.writeToParcel(p2, 1);
            _pc = 38;
            continue _sm;
          case 23:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v52 = jq.bw(p1);
            else
            v52 = null;
            if ( p1.readInt() != 0 )
            v6 = kc.bB(p1);
            this.a(v52, (com.google.android.gms.internal.kb)v6);
            return v5;
          case 24:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v53 = (android.location.Location)android.location.Location.CREATOR.createFromParcel(p1);
            else
            v53 = null;
            this.a(v53, p1.readInt());
            p2.writeNoException();
            return v5;
          case 25:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            v54 = this.b(p1.readString());
            p2.writeNoException();
            if ( !(v54 != null) ) { _pc = 26; continue _sm; }
            {
            p2.writeInt(1);
            v54.writeToParcel(p2, 1);
            }
            _pc = 27;
            continue _sm;
          case 26:
            p2.writeInt(0);
            _pc = 27;
            continue _sm;
          case 27:
            _pc = 38;
            continue _sm;
          case 28:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            v32 = p1.readString();
            if ( p1.readInt() != 0 )
            v6 = kc.bB(p1);
            this.b(v32, (com.google.android.gms.internal.kb)v6, jz$a.au(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 38;
            continue _sm;
          case 29:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            v47 = p1.readString();
            if ( p1.readInt() != 0 )
            v48 = LatLngBoundsCreator._typed_createFromParcel(p1);
            else
            v48 = null;
            if ( p1.readInt() != 0 )
            v49 = jo.bv(p1);
            else
            v49 = null;
            if ( p1.readInt() != 0 )
            v50 = kc.bB(p1);
            else
            v50 = null;
            this.a(v47, v48, v49, v50, jz$a.au(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 38;
            continue _sm;
          case 30:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v51 = (com.google.android.gms.internal.jv)com.google.android.gms.internal.jv.CREATOR.createFromParcel(p1);
            else
            v51 = null;
            if ( p1.readInt() != 0 )
            v6 = kc.bB(p1);
            this.a(v51, (com.google.android.gms.internal.kb)v6, jz$a.au(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 38;
            continue _sm;
          case 31:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v24 = LatLngBoundsCreator._typed_createFromParcel(p1);
            else
            v24 = null;
            v25 = p1.readInt();
            v26 = p1.readString();
            if ( p1.readInt() != 0 )
            v27 = jo.bv(p1);
            else
            v27 = null;
            if ( p1.readInt() != 0 )
            v6 = kc.bB(p1);
            this.a(v24, v25, v26, v27, (com.google.android.gms.internal.kb)v6, jz$a.au(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 38;
            continue _sm;
          case 32:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v42 = jm.bu(p1);
            else
            v42 = null;
            if ( p1.readInt() != 0 )
            v43 = kc.bB(p1);
            else
            v43 = null;
            if ( p1.readInt() != 0 )
            v44 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v44 = null;
            this.a(v42, v43, v44);
            p2.writeNoException();
            _pc = 38;
            continue _sm;
          case 33:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            if ( p1.readInt() != 0 )
            v45 = kc.bB(p1);
            else
            v45 = null;
            if ( p1.readInt() != 0 )
            v46 = (android.app.PendingIntent)android.app.PendingIntent.CREATOR.createFromParcel(p1);
            else
            v46 = null;
            this.b(v45, v46);
            p2.writeNoException();
            _pc = 38;
            continue _sm;
          case 34:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            v33 = p1.readString();
            StringArrayList = p1.createStringArrayList();
            v35 = p1.createTypedArrayList((android.os.Parcelable.Creator)jx.CREATOR);
            if ( p1.readInt() != 0 )
            v36 = kc.bB(p1);
            else
            v36 = null;
            this.a(v33, StringArrayList, v35, v36, jz$a.au(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 38;
            continue _sm;
          case 35:
            p1.enforceInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            v55 = this.b();
            p2.writeNoException();
            p2.writeStrongBinder(v55);
            _pc = 38;
            continue _sm;
          case 36:
            p2.writeString("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            _pc = 38;
            continue _sm;
          case 37:
            v5 = super.onTransact(p0, p1, p2, p3);
            _pc = 38;
            continue _sm;
          case 38:
            return v5;
        }
      }
}

}
