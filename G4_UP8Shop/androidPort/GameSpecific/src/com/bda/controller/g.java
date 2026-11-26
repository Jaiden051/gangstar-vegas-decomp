// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

final class g implements android.content.ServiceConnection {
    // Fields
    final com.bda.controller.Controller a;

    // Methods
    g(com.bda.controller.Controller p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      this.a.V = IControllerService$Stub.asInterface(p1);
      this.a.e();
      this.a.f();
      if ( this.a.Z == 5 )
      {
        this.a.a(1, 5);
        this.a.a(1, 7);
      }
    }

    public final void onServiceDisconnected(android.content.ComponentName p0)
    {
      this.a.V = null;
    }

}
