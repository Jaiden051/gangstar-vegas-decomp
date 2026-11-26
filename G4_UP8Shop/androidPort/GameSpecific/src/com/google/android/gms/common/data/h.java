// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

public class h<T> extends com.google.android.gms.common.data.c<T> {
    // Fields
    private java.lang.Object c;

    // Methods
    public h(com.google.android.gms.common.data.DataBuffer<T> p0)
    {
      super(p0);
    }

    public T next()
    {
      if ( !this.hasNext() )
        throw new java.util.NoSuchElementException("Cannot advance the iterator beyond " + this.b);
      if ( ++this.b != 0 )
      {
        ((com.google.android.gms.common.data.d)this.c).a(this.b);
      }
      else
      {
        this.c = this.a.b(0);
        if ( !(this.c instanceof com.google.android.gms.common.data.d) )
          throw new IllegalStateException("DataBuffer reference of type " + this.c.getClass() + " is not movable");
      }
      return (T)this.c;
    }

}
