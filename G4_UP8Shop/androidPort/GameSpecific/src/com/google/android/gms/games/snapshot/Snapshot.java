// Decompiled from classes.dex (SourceFile: Snapshot.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

public interface Snapshot extends android.os.Parcelable, com.google.android.gms.common.data.Freezable {
    // Methods
    public abstract com.google.android.gms.games.snapshot.SnapshotMetadata a();

    public abstract boolean a(int p0, byte[] p1, int p2);

    public abstract boolean a(byte[] p0);

    public abstract com.google.android.gms.drive.Contents b();

    public abstract void c();

    public abstract byte[] d();

}
