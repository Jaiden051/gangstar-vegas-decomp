// Decompiled from classes.dex (SourceFile: fz$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

abstract class fz$a<T> implements com.google.android.gms.common.api.Result {
    // Fields
    protected final java.lang.Object a;
    private final com.google.android.gms.common.api.Status b;

    // Methods
    public fz$a(com.google.android.gms.common.api.Status p0, T p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.b;
    }

}
