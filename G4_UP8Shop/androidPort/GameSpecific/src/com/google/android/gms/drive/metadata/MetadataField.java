// Decompiled from classes.dex (SourceFile: MetadataField.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata;

public interface MetadataField<T> {
    // Methods
    public abstract T a(android.os.Bundle p0);

    public abstract T a(com.google.android.gms.common.data.DataHolder p0, int p1, int p2);

    public abstract java.lang.String a();

    public abstract void a(com.google.android.gms.common.data.DataHolder p0, com.google.android.gms.drive.metadata.internal.MetadataBundle p1, int p2, int p3);

    public abstract void a(T p0, android.os.Bundle p1);

    public abstract java.util.Collection b();

}
