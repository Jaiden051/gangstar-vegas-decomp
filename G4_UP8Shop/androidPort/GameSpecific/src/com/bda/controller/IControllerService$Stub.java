// Decompiled from classes.dex (SourceFile: IControllerService$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

public abstract class IControllerService$Stub extends android.os.Binder implements com.bda.controller.IControllerService {
    // Fields
    static int a;
    static int b;
    static int c;
    static int d;
    static int e;
    static int f;
    static int g;
    static int h;
    static int i;
    static int j;
    static int k;
    static int l;
    static int m;
    static int n;
    private static java.lang.String o;

    // Methods
    public IControllerService$Stub()
    {
      super();
      this.attachInterface(this, "com.bda.controller.IControllerService");
    }

    public static com.bda.controller.IControllerService asInterface(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.bda.controller.IControllerService");
      if ( LocalInterface != null && LocalInterface instanceof com.bda.controller.IControllerService )
        return (com.bda.controller.IControllerService)LocalInterface;
      else
        return (com.bda.controller.IControllerService)new com.bda.controller.IControllerService$Stub$Proxy(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      int v7; // RETVAL
      int v8; // RETVAL
      float v9; // RETVAL
      int v10; // RETVAL
      int v11; // RETVAL
      boolean v12; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.bda.controller.IControllerService");
          this.a(IControllerListener$Stub.asInterface(p1.readStrongBinder()), p1.readInt());
          p2.writeNoException();
          break;
        case 2:
          p1.enforceInterface("com.bda.controller.IControllerService");
          this.b(IControllerListener$Stub.asInterface(p1.readStrongBinder()), p1.readInt());
          p2.writeNoException();
          break;
        case 3:
          p1.enforceInterface("com.bda.controller.IControllerService");
          this.a(IControllerMonitor$Stub.asInterface(p1.readStrongBinder()), p1.readInt());
          p2.writeNoException();
          break;
        case 4:
          p1.enforceInterface("com.bda.controller.IControllerService");
          this.b(IControllerMonitor$Stub.asInterface(p1.readStrongBinder()), p1.readInt());
          p2.writeNoException();
          break;
        case 5:
          p1.enforceInterface("com.bda.controller.IControllerService");
          v7 = this.a(p1.readInt());
          p2.writeNoException();
          p2.writeInt(v7);
          break;
        case 6:
          p1.enforceInterface("com.bda.controller.IControllerService");
          v8 = this.a(p1.readInt(), p1.readInt());
          p2.writeNoException();
          p2.writeInt(v8);
          break;
        case 7:
          p1.enforceInterface("com.bda.controller.IControllerService");
          v9 = this.b(p1.readInt(), p1.readInt());
          p2.writeNoException();
          p2.writeFloat(v9);
          break;
        case 8:
          p1.enforceInterface("com.bda.controller.IControllerService");
          v10 = this.c(p1.readInt(), p1.readInt());
          p2.writeNoException();
          p2.writeInt(v10);
          break;
        case 9:
          p1.enforceInterface("com.bda.controller.IControllerService");
          this.d(p1.readInt(), p1.readInt());
          p2.writeNoException();
          break;
        case 10:
          p1.enforceInterface("com.bda.controller.IControllerService");
          this.c(IControllerListener$Stub.asInterface(p1.readStrongBinder()), p1.readInt());
          p2.writeNoException();
          break;
        case 11:
          p1.enforceInterface("com.bda.controller.IControllerService");
          v11 = this.e(p1.readInt(), p1.readInt());
          p2.writeNoException();
          p2.writeInt(v11);
          break;
        case 12:
          p1.enforceInterface("com.bda.controller.IControllerService");
          this.a();
          p2.writeNoException();
          break;
        case 13:
          p1.enforceInterface("com.bda.controller.IControllerService");
          this.b();
          p2.writeNoException();
          break;
        case 14:
          p1.enforceInterface("com.bda.controller.IControllerService");
          v12 = this.c();
          p2.writeNoException();
          p2.writeInt(com.gameloft.android.DecompRT.b2i(v12));
          break;
        case 1598968902:
          p2.writeString("com.bda.controller.IControllerService");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
