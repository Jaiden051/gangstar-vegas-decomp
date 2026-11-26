// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import com.google.android.gms.internal.gv;
import com.google.android.gms.internal.gy;
public abstract class a {
    // Fields
    final com.google.android.gms.common.images.a$a a;
    protected int b;
    protected int c;
    protected int d;
    private boolean e;
    private boolean f;

    // Methods
    public a(android.net.Uri p0, int p1)
    {
      super();
      this.b = 0;
      this.c = 0;
      this.e = true;
      this.f = false;
      this.a = new com.google.android.gms.common.images.a$a(p0);
      this.c = p1;
    }

    private android.graphics.drawable.Drawable a(
            android.content.Context p0,
            com.google.android.gms.internal.gx p1,
            int p2)
    {
      android.content.res.Resources Resources; // RETVAL
      android.content.res.Resources v5;
      com.google.android.gms.internal.gx$a v6;
      android.graphics.drawable.Drawable v7;
      android.graphics.drawable.Drawable Drawable; // RETVAL
    
      Resources = p0.getResources();
      v5 = Resources;
      if ( this.d <= 0 )
        return Resources.getDrawable(p2);
      v6 = new com.google.android.gms.internal.gx$a(p2, this.d);
      v7 = (android.graphics.drawable.Drawable)p1.a(v6);
      if ( v7 == null )
      {
        Drawable = v5.getDrawable(p2);
        v7 = Drawable;
        if ( (this.d & 1) != 0 )
          v7 = gv.a(v5, Drawable);
        p1.b(v6, v7);
      }
      return v7;
    }

    private static android.graphics.drawable.Drawable a(
            android.content.res.Resources p0,
            android.graphics.drawable.Drawable p1)
    {
      return gv.a(p0, p1);
    }

    protected static com.google.android.gms.internal.gu a(
            android.graphics.drawable.Drawable p0,
            android.graphics.drawable.Drawable p1)
    {
      if ( p0 != null )
      {
        if ( p0 instanceof com.google.android.gms.internal.gu )
          p0 = ((com.google.android.gms.internal.gu)p0).a();
      }
      else
      {
        p0 = null;
      }
      return new com.google.android.gms.internal.gu(p0, p1);
    }

    public final void a(int p0)
    {
      this.c = p0;
    }

    final void a(android.content.Context p0, android.graphics.Bitmap p1, boolean p2)
    {
      gy.c(p1);
      if ( (this.d & 1) != 0 )
        p1 = gv.a(p1);
      this.a(new android.graphics.drawable.BitmapDrawable(p0.getResources(), p1), p2, false, true);
    }

    final void a(android.content.Context p0, com.google.android.gms.internal.gx p1)
    {
      android.graphics.drawable.Drawable v3;
      v3 = null;
      if ( this.b != 0 )
        v3 = this.a(p0, p1, this.b);
      this.a(v3, false, true, false);
    }

    final void a(android.content.Context p0, com.google.android.gms.internal.gx p1, boolean p2)
    {
      android.graphics.drawable.Drawable v4;
      v4 = null;
      if ( this.c != 0 )
        v4 = this.a(p0, p1, this.c);
      this.a(v4, p2, false, false);
    }

    protected abstract void a(android.graphics.drawable.Drawable p0, boolean p1, boolean p2, boolean p3);

    protected final boolean a(boolean p0, boolean p1)
    {
      return this.e && !p1 && (!p0 || this.f);
    }

}
