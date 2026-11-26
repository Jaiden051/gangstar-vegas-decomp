// Decompiled from classes.dex (SourceFile: DataBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

public abstract class DataBuffer<T> implements com.google.android.gms.common.api.Releasable, java.lang.Iterable {
    // Fields
    protected final com.google.android.gms.common.data.DataHolder a;

    // Methods
    protected DataBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super();
      this.a = p0;
      if ( this.a != null )
        this.a.a(this);
    }

    private boolean a()
    {
      return this.a == null || this.a.h();
    }

    private static int describeContents()
    {
      return 0;
    }

    private java.util.Iterator<T> f()
    {
      return (java.util.Iterator)new com.google.android.gms.common.data.h(this);
    }

    public int b()
    {
      if ( this.a != null )
        return this.a.g();
      else
        return 0;
    }

    public abstract T b(int p0);

    public final void c()
    {
      this.d();
    }

    public final void d()
    {
      if ( this.a != null )
        this.a.i();
    }

    public final android.os.Bundle e()
    {
      return this.a.f();
    }

    public java.util.Iterator<T> iterator()
    {
      return (java.util.Iterator)new com.google.android.gms.common.data.c(this);
    }

}
