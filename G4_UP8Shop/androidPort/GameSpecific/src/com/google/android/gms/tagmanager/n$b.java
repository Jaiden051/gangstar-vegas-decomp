// Decompiled from classes.dex (SourceFile: n$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class n$b extends android.os.Handler {
    // Fields
    final com.google.android.gms.tagmanager.n a;
    private final com.google.android.gms.tagmanager.ContainerHolder$ContainerAvailableListener b;

    // Methods
    public n$b(
            com.google.android.gms.tagmanager.n p0,
            com.google.android.gms.tagmanager.ContainerHolder$ContainerAvailableListener p1,
            android.os.Looper p2)
    {
      super(p2);
      this.a = p0;
      this.b = p1;
    
    }

    private void b(String p0)
    {
      this.b.a();
    }

    public final void a(String p0)
    {
      this.sendMessage(this.obtainMessage(1, p0));
    }

    public void handleMessage(android.os.Message p0)
    {
      if ( p0.what == 1 )
      {
        com.gameloft.android.DecompRT.discard((String)p0.obj);
        this.b.a();
      }
      else
      {
        bh.A("Don't know how to handle this message.");
      }
    }

}
