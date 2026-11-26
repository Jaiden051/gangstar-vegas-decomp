// Decompiled from classes.dex (SourceFile: IAPConnector$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.sec.android.iap;

import android.os.Bundle;
public abstract class IAPConnector$Stub extends android.os.Binder implements com.sec.android.iap.IAPConnector {
    // Fields
    static int a;
    static int b;
    static int c;
    static int d;
    static int e;
    private static java.lang.String f;

    // Methods
    public IAPConnector$Stub()
    {
      super();
      this.attachInterface(this, "com.sec.android.iap.IAPConnector");
    }

    public static com.sec.android.iap.IAPConnector asInterface(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.sec.android.iap.IAPConnector");
      if ( LocalInterface != null && LocalInterface instanceof com.sec.android.iap.IAPConnector )
        return (com.sec.android.iap.IAPConnector)LocalInterface;
      else
        return (com.sec.android.iap.IAPConnector)new com.sec.android.iap.IAPConnector$Stub$Proxy(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5 = false;
      com.sec.android.iap.IAPServiceCallback v7 = null;
      android.os.Bundle v8 = null;
      boolean v9 = false; // RETVAL
      android.os.Bundle v10 = null; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = true;
            _sw_1 = (p0);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 10; continue _sm; }
            _pc = 11;
            continue _sm;
          case 1:
            p1.enforceInterface("com.sec.android.iap.IAPConnector");
            v7 = IAPServiceCallback$Stub.asInterface(p1.readStrongBinder());
            if ( p1.readInt() != 0 )
            v8 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
            else
            v8 = null;
            v9 = this.a(v7, v8);
            p2.writeNoException();
            _pc = 3;
            continue _sm;
          case 2:
            p1.enforceInterface("com.sec.android.iap.IAPConnector");
            v9 = this.a(IAPServiceCallback$Stub.asInterface(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 3;
            continue _sm;
          case 3:
            p2.writeInt(com.gameloft.android.DecompRT.b2i(v9));
            return v5;
          case 4:
            p1.enforceInterface("com.sec.android.iap.IAPConnector");
            v10 = this.a(p1.readInt());
            p2.writeNoException();
            if ( v10 != null )
            { _pc = 7; continue _sm; }
            _pc = 8;
            continue _sm;
          case 5:
            p1.enforceInterface("com.sec.android.iap.IAPConnector");
            v10 = this.a(p1.readInt(), p1.readString(), p1.readString(), p1.readInt(), p1.readInt(), p1.readString());
            p2.writeNoException();
            if ( v10 == null )
            { _pc = 8; continue _sm; }
            _pc = 7;
            continue _sm;
          case 6:
            p1.enforceInterface("com.sec.android.iap.IAPConnector");
            v10 = this.a(p1.readString(), p1.readString(), p1.readInt(), p1.readInt(), p1.readString(), p1.readString());
            p2.writeNoException();
            if ( !(v10 != null) ) { _pc = 8; continue _sm; }
            _pc = 7;
            continue _sm;
          case 7:
            p2.writeInt(1);
            v10.writeToParcel(p2, 1);
            _pc = 9;
            continue _sm;
          case 8:
            p2.writeInt(0);
            _pc = 9;
            continue _sm;
          case 9:
            _pc = 12;
            continue _sm;
          case 10:
            p2.writeString("com.sec.android.iap.IAPConnector");
            _pc = 12;
            continue _sm;
          case 11:
            v5 = super.onTransact(p0, p1, p2, p3);
            _pc = 12;
            continue _sm;
          case 12:
            return v5;
        }
      }
}

}
