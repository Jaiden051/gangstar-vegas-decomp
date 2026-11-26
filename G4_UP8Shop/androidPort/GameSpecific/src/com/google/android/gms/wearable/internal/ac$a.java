// Decompiled from classes.dex (SourceFile: ac$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public abstract class ac$a extends android.os.Binder implements com.google.android.gms.wearable.internal.ac {
    // Methods
    public ac$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.wearable.internal.IWearableListener");
    }

    public static com.google.android.gms.wearable.internal.ac bx(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.wearable.internal.IWearableListener");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.wearable.internal.ac )
        return (com.google.android.gms.wearable.internal.ac)LocalInterface;
      else
        return (com.google.android.gms.wearable.internal.ac)new com.google.android.gms.wearable.internal.ac$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableListener");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a((com.google.android.gms.common.data.DataHolder)v5);
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableListener");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.af)com.google.android.gms.wearable.internal.af.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.af)v5);
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableListener");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.ai)com.google.android.gms.wearable.internal.ai.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.wearable.internal.ai)v5);
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.wearable.internal.IWearableListener");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.wearable.internal.ai)com.google.android.gms.wearable.internal.ai.CREATOR.createFromParcel(p1);
          this.b((com.google.android.gms.wearable.internal.ai)v5);
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.wearable.internal.IWearableListener");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
