// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

public class a implements android.content.ServiceConnection {
    // Fields
    boolean a;
    private final java.util.concurrent.BlockingQueue b;

    // Methods
    public a()
 throws InterruptedException {
      super();
      this.a = false;
      this.b = new java.util.concurrent.LinkedBlockingQueue();
    }

    public final android.os.IBinder a()
 throws InterruptedException {
      if ( this.a )
        throw new IllegalStateException();
      this.a = true;
      return (android.os.IBinder)this.b.take();
    }

    public void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      try
      {
        this.b.put(p1);
      }
      catch ( InterruptedException e )
      {
      }
    }

    public void onServiceDisconnected(android.content.ComponentName p0)
    {
      ;
    }

}
