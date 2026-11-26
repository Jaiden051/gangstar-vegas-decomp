// Decompiled from classes.dex (SourceFile: a$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import android.graphics.drawable.Drawable;
import com.google.android.gms.internal.gy;
import com.google.android.gms.internal.hl;
public final class a$b extends com.google.android.gms.common.images.a {
    // Fields
    private java.lang.ref.WeakReference e;

    // Methods
    public a$b(android.widget.ImageView p0, int p1)
    {
      super(null, p1);
      gy.c(p0);
      this.e = new java.lang.ref.WeakReference(p0);
    }

    public a$b(android.widget.ImageView p0, android.net.Uri p1)
    {
      super(p1, 0);
      gy.c(p0);
      this.e = new java.lang.ref.WeakReference(p0);
    }

    private void a(
            android.widget.ImageView p0,
            android.graphics.drawable.Drawable p1,
            boolean p2,
            boolean p3,
            boolean p4)
    {
      android.net.Uri a;
      boolean v7;
      int v8; // RETVAL
      boolean v9;
      android.graphics.drawable.Drawable Drawable; // RETVAL
      android.graphics.drawable.Drawable v11;
      android.graphics.drawable.Drawable v12;
      com.google.android.gms.internal.gw v13;
      int c;
      a = null;
      v7 = !p3 && !p4;
      if ( !v7
        || !(p0 instanceof com.google.android.gms.internal.gw)
        || (com.gameloft.android.DecompRT.comma((v8 = ((com.google.android.gms.internal.gw)p0).a()), (this.c == 0)))
        || v8 != this.c )
      {
        v9 = this.a(p2, p3);
        if ( v9 )
        {
          Drawable = p0.getDrawable();
          v11 = Drawable;
          if ( Drawable != null )
          {
            if ( Drawable instanceof com.google.android.gms.internal.gu )
              v11 = ((com.google.android.gms.internal.gu)Drawable).a();
          }
          else
          {
            v11 = null;
          }
          v12 = new com.google.android.gms.internal.gu(v11, p1);
        }
        else
        {
          v12 = p1;
        }
        p0.setImageDrawable(v12);
        if ( p0 instanceof com.google.android.gms.internal.gw )
        {
          v13 = (com.google.android.gms.internal.gw)p0;
          if ( p4 )
            a = this.a.a;
          v13.a(a);
          if ( v7 )
            c = this.c;
          else
            c = 0;
          v13.a(c);
        }
        if ( v9 )
          ((com.google.android.gms.internal.gu)v12).a(250);
      }
    }

    protected final void a(android.graphics.drawable.Drawable p0, boolean p1, boolean p2, boolean p3)
    {
      android.net.Uri a;
      android.widget.ImageView v6;
      int v7;
      int v8; // RETVAL
      boolean v9;
      android.graphics.drawable.Drawable Drawable; // RETVAL
      android.graphics.drawable.Drawable v11;
      android.graphics.drawable.Drawable v12;
      com.google.android.gms.internal.gw v13;
      int c;
      a = null;
      v6 = (android.widget.ImageView)this.e.get();
      if ( v6 != null )
      {
        v7 = p2 || p3 ? 0 : 1;
        if ( v7 == 0
          || !(v6 instanceof com.google.android.gms.internal.gw)
          || (com.gameloft.android.DecompRT.comma((v8 = ((com.google.android.gms.internal.gw)v6).a()), (this.c == 0)))
          || v8 != this.c )
        {
          v9 = this.a(p1, p2);
          if ( v9 )
          {
            Drawable = v6.getDrawable();
            v11 = Drawable;
            if ( Drawable != null )
            {
              if ( Drawable instanceof com.google.android.gms.internal.gu )
                v11 = ((com.google.android.gms.internal.gu)Drawable).a();
            }
            else
            {
              v11 = null;
            }
            v12 = new com.google.android.gms.internal.gu(v11, p0);
          }
          else
          {
            v12 = p0;
          }
          v6.setImageDrawable(v12);
          if ( v6 instanceof com.google.android.gms.internal.gw )
          {
            v13 = (com.google.android.gms.internal.gw)v6;
            if ( p3 )
              a = this.a.a;
            v13.a(a);
            if ( v7 != 0 )
              c = this.c;
            else
              c = 0;
            v13.a(c);
          }
          if ( v9 )
            ((com.google.android.gms.internal.gu)v12).a(250);
        }
      }
    }

    public final boolean equals(Object p0)
    {
      android.widget.ImageView v4;
      android.widget.ImageView v5;
      if ( !(p0 instanceof com.google.android.gms.common.images.a$b) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (android.widget.ImageView)this.e.get();
      v5 = (android.widget.ImageView)((com.google.android.gms.common.images.a$b)p0).e.get();
      return v5 != null && v4 != null && hl.equal(v5, v4);
    }

    public final int hashCode()
    {
      return 0;
    }

}
