// Decompiled from classes.dex (SourceFile: hc$f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class hc$f implements android.content.ServiceConnection {
    // Fields
    final com.google.android.gms.internal.hc a;

    // Methods
    hc$f(com.google.android.gms.internal.hc p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      this.a.b(p1);
    }

    public final void onServiceDisconnected(android.content.ComponentName p0)
    {
      this.a.d.sendMessage(this.a.d.obtainMessage(4, Integer.valueOf(1)));
    }

}
