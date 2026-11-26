// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata;

import java.util.Collections;
public abstract class b<T> extends com.google.android.gms.drive.metadata.a<T> {
    // Methods
    protected b(String p0, int p1)
    {
      super(p0, Collections.emptySet(), Collections.emptySet(), p1);
    }

    /* synthetic */ protected Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return this.c(p0, p1, p2);
    }

    protected java.util.Collection<T> c(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      throw new UnsupportedOperationException("Cannot read collections from a dataHolder.");
    }

}
