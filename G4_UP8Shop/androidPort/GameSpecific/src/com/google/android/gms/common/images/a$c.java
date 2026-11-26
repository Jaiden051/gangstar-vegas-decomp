// Decompiled from classes.dex (SourceFile: a$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import com.google.android.gms.internal.gy;
import com.google.android.gms.internal.hl;
public final class a$c extends com.google.android.gms.common.images.a {
    // Fields
    private java.lang.ref.WeakReference e;

    // Methods
    public a$c(com.google.android.gms.common.images.ImageManager$OnImageLoadedListener p0, android.net.Uri p1)
    {
      super(p1, 0);
      gy.c(p0);
      this.e = new java.lang.ref.WeakReference(p0);
    }

    protected final void a(android.graphics.drawable.Drawable p0, boolean p1, boolean p2, boolean p3)
    {
      com.google.android.gms.common.images.ImageManager$OnImageLoadedListener v5;
      if ( !p2 )
      {
        v5 = (com.google.android.gms.common.images.ImageManager$OnImageLoadedListener)this.e.get();
        if ( v5 != null )
          v5.a();
      }
    }

    public final boolean equals(Object p0)
    {
      com.google.android.gms.common.images.a$c v4;
      com.google.android.gms.common.images.ImageManager$OnImageLoadedListener v5;
      com.google.android.gms.common.images.ImageManager$OnImageLoadedListener v6;
      if ( !(p0 instanceof com.google.android.gms.common.images.a$c) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.common.images.a$c)p0;
      v5 = (com.google.android.gms.common.images.ImageManager$OnImageLoadedListener)this.e.get();
      v6 = (com.google.android.gms.common.images.ImageManager$OnImageLoadedListener)v4.e.get();
      return v6 != null && v5 != null && hl.equal(v6, v5) && hl.equal(v4.a, this.a);
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[1];
      v1[0] = this.a;
      return hl.hashCode(v1);
    }

}
