// Decompiled from classes.dex (SourceFile: IControllerListener$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

public abstract class IControllerListener$Stub extends android.os.Binder implements com.bda.controller.IControllerListener {
    // Fields
    private static java.lang.String a;
    static int b;
    static int c;
    static int d;

    // Methods
    public IControllerListener$Stub()
    {
      super();
      this.attachInterface(this, "com.bda.controller.IControllerListener");
    }

    public static com.bda.controller.IControllerListener asInterface(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.bda.controller.IControllerListener");
      if ( LocalInterface != null && LocalInterface instanceof com.bda.controller.IControllerListener )
        return (com.bda.controller.IControllerListener)LocalInterface;
      else
        return (com.bda.controller.IControllerListener)new com.bda.controller.IControllerListener$Stub$Proxy(p0);
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
          p1.enforceInterface("com.bda.controller.IControllerListener");
          if ( p1.readInt() != 0 )
            v5 = (com.bda.controller.KeyEvent)com.bda.controller.KeyEvent.CREATOR.createFromParcel(p1);
          this.a((com.bda.controller.KeyEvent)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.bda.controller.IControllerListener");
          if ( p1.readInt() != 0 )
            v5 = (com.bda.controller.MotionEvent)com.bda.controller.MotionEvent.CREATOR.createFromParcel(p1);
          this.a((com.bda.controller.MotionEvent)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.bda.controller.IControllerListener");
          if ( p1.readInt() != 0 )
            v5 = (com.bda.controller.StateEvent)com.bda.controller.StateEvent.CREATOR.createFromParcel(p1);
          this.a((com.bda.controller.StateEvent)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.bda.controller.IControllerListener");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
