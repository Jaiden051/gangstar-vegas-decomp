// Decompiled from classes.dex (SourceFile: ma$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ma$a extends java.io.IOException {
    // Methods
    ma$a(int p0, int p1)
    {
      super("CodedOutputStream was writing to a flat byte array and ran out of space (pos " + p0 + " limit " + p1 + ").");
    }

}
