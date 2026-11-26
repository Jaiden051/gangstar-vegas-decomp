// Decompiled from classes.dex (SourceFile: x$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import android.util.Log;
class x$a<E> extends android.os.Handler {
    // Methods
    private x$a(android.os.Looper p0)
    {
      super(p0);
    }

    /* synthetic */ x$a(android.os.Looper p0, int p1)
    {
      this(p0);
    }

    public final void a(com.google.android.gms.drive.events.DriveEvent$Listener<E> p0, E p1)
    {
      this.sendMessage(this.obtainMessage(1, new android.util.Pair(p0, p1)));
    }

    public void handleMessage(android.os.Message p0)
    {
      if ( p0.what == 1 )
        ((com.google.android.gms.drive.events.DriveEvent$Listener)((android.util.Pair)p0.obj).first).a();
      else
        Log.wtf("EventCallback", "Don't know how to handle this event");
    }

}
