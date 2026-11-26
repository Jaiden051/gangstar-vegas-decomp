// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

import com.google.android.gms.internal.hn;
public class c<T> implements java.util.Iterator<T> {
    // Fields
    protected final com.google.android.gms.common.data.DataBuffer a;
    protected int b;

    // Methods
    public c(com.google.android.gms.common.data.DataBuffer<T> p0)
    {
      super();
      this.a = (com.google.android.gms.common.data.DataBuffer)hn.f(p0);
      this.b = -1;
    }

    public boolean hasNext()
    {
      return this.b < this.a.b() - 1;
    }

    public T next()
    {
      int v1;
      if ( !this.hasNext() )
        throw new java.util.NoSuchElementException("Cannot advance the iterator beyond " + this.b);
      v1 = this.b + 1;
      this.b = v1;
      return (T)this.a.b(v1);
    }

    public void remove()
    {
      throw new UnsupportedOperationException("Cannot remove elements from a DataBufferIterator");
    }

}
