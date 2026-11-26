// Decompiled from classes.dex (SourceFile: IAPServiceCallback$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.sec.android.iap;

import android.os.Bundle;
public abstract class IAPServiceCallback$Stub extends android.os.Binder implements com.sec.android.iap.IAPServiceCallback {
    // Fields
    static int a;
    private static java.lang.String b;

    // Methods
    public IAPServiceCallback$Stub()
    {
      super();
      this.attachInterface(this, "com.sec.android.iap.IAPServiceCallback");
    }

    public static com.sec.android.iap.IAPServiceCallback asInterface(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.sec.android.iap.IAPServiceCallback");
      if ( LocalInterface != null && LocalInterface instanceof com.sec.android.iap.IAPServiceCallback )
        return (com.sec.android.iap.IAPServiceCallback)LocalInterface;
      else
        return (com.sec.android.iap.IAPServiceCallback)new com.sec.android.iap.IAPServiceCallback$Stub$Proxy(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      android.os.Bundle v7;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.sec.android.iap.IAPServiceCallback");
          if ( p1.readInt() != 0 )
            v7 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v7 = null;
          this.a(v7);
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.sec.android.iap.IAPServiceCallback");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
