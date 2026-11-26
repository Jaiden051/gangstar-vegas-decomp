// Decompiled from classes.dex (SourceFile: d$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

public abstract class d$a extends android.os.Binder implements com.google.android.gms.dynamic.d {
    // Methods
    public d$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.dynamic.IObjectWrapper");
    }

    public static com.google.android.gms.dynamic.d ag(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.dynamic.IObjectWrapper");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.dynamic.d )
        return (com.google.android.gms.dynamic.d)LocalInterface;
      else
        return (com.google.android.gms.dynamic.d)new com.google.android.gms.dynamic.d$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      if ( p0 != 1598968902 )
        return super.onTransact(p0, p1, p2, p3);
      p2.writeString("com.google.android.gms.dynamic.IObjectWrapper");
      return true;
    }

}
