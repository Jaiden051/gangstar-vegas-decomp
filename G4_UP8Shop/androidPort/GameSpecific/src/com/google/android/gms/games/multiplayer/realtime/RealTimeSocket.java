// Decompiled from classes.dex (SourceFile: RealTimeSocket.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

public interface RealTimeSocket {
    // Methods
    public abstract android.os.ParcelFileDescriptor a();

    public abstract void b() throws java.io.IOException;

    public abstract boolean c();

    public abstract java.io.InputStream d() throws java.io.IOException;

    public abstract java.io.OutputStream e() throws java.io.IOException;

}
