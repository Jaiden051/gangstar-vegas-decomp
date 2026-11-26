// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Build;
import android.support.v4.view.ViewCompat;
final class g extends android.graphics.drawable.InsetDrawable implements android.graphics.drawable.Drawable.Callback {
    // Fields
    final android.support.v4.app.ActionBarDrawerToggle a;
    private final boolean b;
    private final android.graphics.Rect c;
    private float d;
    private float e;

    // Methods
    private g(android.support.v4.app.ActionBarDrawerToggle p0, android.graphics.drawable.Drawable p1)
    {
      super(p1, 0);
      this.a = p0;
      this.b = Build.VERSION.SDK_INT > 18;
      this.c = new android.graphics.Rect();
    
    }

    /* synthetic */ g(android.support.v4.app.ActionBarDrawerToggle p0, android.graphics.drawable.Drawable p1, int p2)
    {
      this(p0, p1);
    }

    public final float a()
    {
      return this.d;
    }

    public final void a(float p0)
    {
      this.d = p0;
      this.invalidateSelf();
    }

    public final void b(float p0)
    {
      this.e = 0.33333334f;
      this.invalidateSelf();
    }

    public final void draw(android.graphics.Canvas p0)
    {
      int v2;
      boolean v3;
      int v4; // RETVAL
    
      v2 = 1;
      this.copyBounds(this.c);
      p0.save();
      v3 = ViewCompat.getLayoutDirection(ActionBarDrawerToggle.access$300(this.a).getWindow().getDecorView()) == 1;
      if ( v3 )
        v2 = -1;
      v4 = this.c.width();
      p0.translate((float)v2 * (-this.e * (float)v4 * this.d), 0.0f);
      if ( v3 && !this.b )
      {
        p0.translate((float)v4, 0.0f);
        p0.scale(-1.0f, 1.0f);
      }
      super.draw(p0);
      p0.restore();
    }

}
