// Decompiled from classes.dex (SourceFile: LibjingleNativeSocket.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public final class LibjingleNativeSocket implements com.google.android.gms.games.multiplayer.realtime.RealTimeSocket {
    // Fields
    private static final java.lang.String a;
    private final android.os.ParcelFileDescriptor b;
    private final java.io.InputStream c;
    private final java.io.OutputStream d;

    // Methods
    static
    {
      a = com.google.android.gms.games.internal.LibjingleNativeSocket.class.getSimpleName();
    }

    LibjingleNativeSocket(android.os.ParcelFileDescriptor p0)
    {
      super();
      this.b = p0;
      this.c = new android.os.ParcelFileDescriptor.AutoCloseInputStream(p0);
      this.d = new android.os.ParcelFileDescriptor.AutoCloseOutputStream(p0);
    }

    public final android.os.ParcelFileDescriptor a()
    {
      return this.b;
    }

    public final void b()
 throws java.io.IOException {
      this.b.close();
    }

    public final boolean c()
    {
      try
      {
        this.c.available();
        return false;
      }
      catch ( java.io.IOException e )
      {
        return true;
      }
    }

    public final java.io.InputStream d()
    {
      return this.c;
    }

    public final java.io.OutputStream e()
    {
      return this.d;
    }

}
