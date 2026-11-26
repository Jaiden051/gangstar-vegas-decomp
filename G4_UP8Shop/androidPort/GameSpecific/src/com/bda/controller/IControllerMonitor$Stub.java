// Decompiled from classes.dex (SourceFile: IControllerMonitor$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

public abstract class IControllerMonitor$Stub extends android.os.Binder implements com.bda.controller.IControllerMonitor {
    // Fields
    private static java.lang.String a;
    static int b;

    // Methods
    public IControllerMonitor$Stub()
    {
      super();
      this.attachInterface(this, "com.bda.controller.IControllerMonitor");
    }

    public static com.bda.controller.IControllerMonitor asInterface(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.bda.controller.IControllerMonitor");
      if ( LocalInterface != null && LocalInterface instanceof com.bda.controller.IControllerMonitor )
        return (com.bda.controller.IControllerMonitor)LocalInterface;
      else
        return (com.bda.controller.IControllerMonitor)new com.bda.controller.IControllerMonitor$Stub$Proxy(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.bda.controller.IControllerMonitor");
          this.a(p1.readInt(), p1.readInt(), p1.readString());
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.bda.controller.IControllerMonitor");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
