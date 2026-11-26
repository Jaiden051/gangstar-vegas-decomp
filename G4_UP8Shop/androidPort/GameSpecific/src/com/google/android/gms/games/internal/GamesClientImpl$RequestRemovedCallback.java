// Decompiled from classes.dex (SourceFile: GamesClientImpl$RequestRemovedCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$RequestRemovedCallback extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final java.lang.String b;

    // Methods
    GamesClientImpl$RequestRemovedCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.request.OnRequestReceivedListener p1,
            String p2)
    {
      super(p0, p1);
      this.a = p0;
      this.b = p2;
    
    }

    private void a(
            com.google.android.gms.games.request.OnRequestReceivedListener p0)
    {
      p0.b();
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ protected final void a(Object p0)
    {
      ((com.google.android.gms.games.request.OnRequestReceivedListener)p0).b();
    }

}
