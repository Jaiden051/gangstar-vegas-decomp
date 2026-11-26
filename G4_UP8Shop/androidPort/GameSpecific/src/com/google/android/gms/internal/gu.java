// Decompiled from classes.dex (SourceFile: gu.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.graphics.drawable.Drawable;
import android.os.SystemClock;
public final class gu extends android.graphics.drawable.Drawable implements android.graphics.drawable.Drawable.Callback {
    // Fields
    private int a;
    private long b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private boolean h;
    private boolean i;
    private com.google.android.gms.internal.gu$b j;
    private android.graphics.drawable.Drawable k;
    private android.graphics.drawable.Drawable l;
    private boolean m;
    private boolean n;
    private boolean o;
    private int p;

    // Methods
    public gu(android.graphics.drawable.Drawable p0, android.graphics.drawable.Drawable p1)
    {
      this(null);
      com.google.android.gms.internal.gu$b j;
      com.google.android.gms.internal.gu$b v4;
      if ( p0 == null )
        p0 = gu$a.fc();
      this.k = p0;
      p0.setCallback(this);
      j = this.j;
      j.b |= p0.getChangingConfigurations();
      if ( p1 == null )
        p1 = gu$a.fc();
      this.l = p1;
      p1.setCallback(this);
      v4 = this.j;
      v4.b |= p1.getChangingConfigurations();
    
    }

    gu(com.google.android.gms.internal.gu$b p0)
    {
      super();
      this.a = 0;
      this.e = 255;
      this.g = 0;
      this.h = true;
      this.j = new com.google.android.gms.internal.gu$b(p0);
    }

    private boolean b()
    {
      boolean v1;
      if ( !this.m )
      {
        v1 = this.k.getConstantState() != null && this.l.getConstantState() != null;
        this.n = v1;
        this.m = true;
      }
      return this.n;
    }

    public final android.graphics.drawable.Drawable a()
    {
      return this.l;
    }

    public final void a(int p0)
    {
      this.c = 0;
      this.d = this.e;
      this.g = 0;
      this.f = 250;
      this.a = 1;
      this.invalidateSelf();
    }

    public final void draw(android.graphics.Canvas p0)
    {
      boolean v2;
      boolean v3;
      int g;
      boolean h;
      android.graphics.drawable.Drawable k;
      android.graphics.drawable.Drawable l;
      float v8;
      v2 = true;
      v3 = false;
      switch ( this.a )
      {
        case 1:
          this.b = SystemClock.uptimeMillis();
          this.a = 2;
          break;
        case 2:
          if ( this.b >= 0 )
          {
            v8 = (float)(SystemClock.uptimeMillis() - this.b) / (float)this.f;
            v2 = v8 >= 1.0f;
            if ( v8 >= 1.0f )
              this.a = 0;
            this.g = (int)(Math.min(v8, 1.0f) * (float)(this.d - this.c) + (float)this.c);
          }
        default:
          v3 = v2;
          break;
      }
      g = this.g;
      h = this.h;
      k = this.k;
      l = this.l;
      if ( v3 )
      {
        if ( !h || g == 0 )
          k.draw(p0);
        if ( g == this.e )
        {
          l.setAlpha(this.e);
          l.draw(p0);
        }
      }
      else
      {
        if ( h )
          k.setAlpha(this.e - g);
        k.draw(p0);
        if ( h )
          k.setAlpha(this.e);
        if ( g > 0 )
        {
          l.setAlpha(g);
          l.draw(p0);
          l.setAlpha(this.e);
        }
        this.invalidateSelf();
      }
    }

    public final int getChangingConfigurations()
    {
      return super.getChangingConfigurations() | this.j.a | this.j.b;
    }

    public final android.graphics.drawable.Drawable.ConstantState getConstantState()
    {
      if ( !this.b() )
        return null;
      this.j.a = this.getChangingConfigurations();
      return this.j;
    }

    public final int getIntrinsicHeight()
    {
      return Math.max(this.k.getIntrinsicHeight(), this.l.getIntrinsicHeight());
    }

    public final int getIntrinsicWidth()
    {
      return Math.max(this.k.getIntrinsicWidth(), this.l.getIntrinsicWidth());
    }

    public final int getOpacity()
    {
      if ( !this.o )
      {
        this.p = Drawable.resolveOpacity(this.k.getOpacity(), this.l.getOpacity());
        this.o = true;
      }
      return this.p;
    }

    public final void invalidateDrawable(android.graphics.drawable.Drawable p0)
    {
      android.graphics.drawable.Drawable.Callback Callback; // RETVAL
    
      if ( iq.fX() )
      {
        Callback = this.getCallback();
        if ( Callback != null )
          Callback.invalidateDrawable(this);
      }
    }

    public final android.graphics.drawable.Drawable mutate()
    {
      if ( !this.i && super.mutate() == this )
      {
        if ( !this.b() )
          throw new IllegalStateException("One or more children of this LayerDrawable does not have constant state; this draw" +
                                          "able cannot be mutated.");
        this.k.mutate();
        this.l.mutate();
        this.i = true;
      }
      return this;
    }

    protected final void onBoundsChange(android.graphics.Rect p0)
    {
      this.k.setBounds(p0);
      this.l.setBounds(p0);
    }

    public final void scheduleDrawable(android.graphics.drawable.Drawable p0, Runnable p1, long p2)
    {
      android.graphics.drawable.Drawable.Callback Callback; // RETVAL
    
      if ( iq.fX() )
      {
        Callback = this.getCallback();
        if ( Callback != null )
          Callback.scheduleDrawable(this, p1, p2);
      }
    }

    public final void setAlpha(int p0)
    {
      if ( this.g == this.e )
        this.g = p0;
      this.e = p0;
      this.invalidateSelf();
    }

    public final void setColorFilter(android.graphics.ColorFilter p0)
    {
      this.k.setColorFilter(p0);
      this.l.setColorFilter(p0);
    }

    public final void unscheduleDrawable(android.graphics.drawable.Drawable p0, Runnable p1)
    {
      android.graphics.drawable.Drawable.Callback Callback; // RETVAL
    
      if ( iq.fX() )
      {
        Callback = this.getCallback();
        if ( Callback != null )
          Callback.unscheduleDrawable(this, p1);
      }
    }

}
