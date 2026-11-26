// Decompiled from classes.dex (SourceFile: a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.internal.safeparcel;

import android.os.Parcel;
public class a$a extends java.lang.RuntimeException {
    // Methods
    public a$a(String p0, android.os.Parcel p1)
    {
      super(p0 + " Parcel: pos=" + p1.dataPosition() + " size=" + p1.dataSize());
    }

}
