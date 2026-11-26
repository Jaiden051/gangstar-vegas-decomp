// Decompiled from classes.dex (SourceFile: i$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import android.os.Parcel;
import com.google.android.gms.maps.model.TileCreator;
class i$a$a implements com.google.android.gms.maps.model.internal.i {
    // Fields
    private android.os.IBinder a;

    // Methods
    i$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.maps.model.Tile a(int p0, int p1, int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4 = null;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6 = null;
      com.google.android.gms.maps.model.Tile v7; // RETVAL
      com.google.android.gms.maps.model.Tile v8 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v4 = Parcel.obtain();
            v5 = Parcel.obtain();
            v6 = v5;
            try
            {
            v4.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileProviderDelegate");
            v4.writeInt(p0);
            v4.writeInt(p1);
            v4.writeInt(p2);
            this.a.transact(1, v4, v5, 0);
            v6.readException();
            if ( v6.readInt() == 0 )
            {
            v8 = null;
            { _pc = 1; continue _sm; }
            }
            v7 = TileCreator._typed_createFromParcel(v6);
            }
            catch ( Throwable v10 )
            {
            v5.recycle();
            v4.recycle();
            throw v10;
            }
            v8 = v7;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v6.recycle();
            v4.recycle();
            return v8;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
