// Decompiled from classes.dex (SourceFile: IGooglePlayServicesRocks$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.annotation;

public abstract class IGooglePlayServicesRocks$Stub extends android.os.Binder implements com.google.android.gms.common.annotation.IGooglePlayServicesRocks {
    // Methods
    public IGooglePlayServicesRocks$Stub()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.common.annotation.IGooglePlayServicesRocks");
    }

    public static com.google.android.gms.common.annotation.IGooglePlayServicesRocks asInterface(
            android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.common.annotation.IGooglePlayServicesRocks");
      if ( LocalInterface != null
        && LocalInterface instanceof com.google.android.gms.common.annotation.IGooglePlayServicesRocks )
      {
        return (com.google.android.gms.common.annotation.IGooglePlayServicesRocks)LocalInterface;
      }
      else
      {
        return (com.google.android.gms.common.annotation.IGooglePlayServicesRocks)new com.google.android.gms.common.annotation.IGooglePlayServicesRocks$Stub$a(p0);
      }
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      if ( p0 != 1598968902 )
        return super.onTransact(p0, p1, p2, p3);
      p2.writeString("com.google.android.gms.common.annotation.IGooglePlayServicesRocks");
      return true;
    }

}
