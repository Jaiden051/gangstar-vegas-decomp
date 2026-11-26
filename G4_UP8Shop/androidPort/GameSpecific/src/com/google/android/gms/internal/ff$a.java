// Decompiled from classes.dex (SourceFile: ff$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class ff$a extends android.os.Binder implements com.google.android.gms.internal.ff {
    // Methods
    public static com.google.android.gms.internal.ff z(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.analytics.internal.IAnalyticsService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.ff )
        return (com.google.android.gms.internal.ff)LocalInterface;
      else
        return (com.google.android.gms.internal.ff)new com.google.android.gms.internal.ff$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      String v7; // RETVAL
    
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.analytics.internal.IAnalyticsService");
          this.a(p1.readHashMap(this.getClass().getClassLoader()), p1.readLong(), p1.readString(), p1.createTypedArrayList(fe.CREATOR));
          p2.writeNoException();
          v5 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.analytics.internal.IAnalyticsService");
          this.a();
          p2.writeNoException();
          v5 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.analytics.internal.IAnalyticsService");
          v7 = this.b();
          p2.writeNoException();
          p2.writeString(v7);
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.analytics.internal.IAnalyticsService");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
