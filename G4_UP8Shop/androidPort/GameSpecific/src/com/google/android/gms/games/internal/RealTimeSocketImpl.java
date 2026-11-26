// Decompiled from classes.dex (SourceFile: RealTimeSocketImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.os.Parcel;
final class RealTimeSocketImpl implements com.google.android.gms.games.multiplayer.realtime.RealTimeSocket {
    // Fields
    private final android.net.LocalSocket a;
    private final java.lang.String b;
    private android.os.ParcelFileDescriptor c;

    // Methods
    RealTimeSocketImpl(android.net.LocalSocket p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final android.os.ParcelFileDescriptor a()
    {
      android.os.Parcel v1;
      if ( this.c == null && !this.c() )
      {
        v1 = Parcel.obtain();
        v1.writeFileDescriptor(this.a.getFileDescriptor());
        v1.setDataPosition(0);
        this.c = v1.readFileDescriptor();
      }
      return this.c;
    }

    public final void b()
 throws java.io.IOException {
      this.a.close();
    }

    public final boolean c()
    {
      return !this.a.isConnected() && !this.a.isBound();
    }

    public final java.io.InputStream d()
 throws java.io.IOException {
      return this.a.getInputStream();
    }

    public final java.io.OutputStream e()
 throws java.io.IOException {
      return this.a.getOutputStream();
    }

}
