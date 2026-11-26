// Decompiled from classes.dex (SourceFile: EdgeEffectCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.os.Build;
public class EdgeEffectCompat {
    // Fields
    private static final android.support.v4.widget.EdgeEffectCompat$EdgeEffectImpl IMPL;
    private java.lang.Object mEdgeEffect;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 14 )
        IMPL = (android.support.v4.widget.EdgeEffectCompat$EdgeEffectImpl)new android.support.v4.widget.EdgeEffectCompat$BaseEdgeEffectImpl();
      else
        IMPL = (android.support.v4.widget.EdgeEffectCompat$EdgeEffectImpl)new android.support.v4.widget.EdgeEffectCompat$EdgeEffectIcsImpl();
    }

    public EdgeEffectCompat(android.content.Context p0)
    {
      super();
      this.mEdgeEffect = IMPL.newEdgeEffect(p0);
    }

    public boolean draw(android.graphics.Canvas p0)
    {
      return IMPL.draw(this.mEdgeEffect, p0);
    }

    public void finish()
    {
      IMPL.finish(this.mEdgeEffect);
    }

    public boolean isFinished()
    {
      return IMPL.isFinished(this.mEdgeEffect);
    }

    public boolean onAbsorb(int p0)
    {
      return IMPL.onAbsorb(this.mEdgeEffect, p0);
    }

    public boolean onPull(float p0)
    {
      return IMPL.onPull(this.mEdgeEffect, p0);
    }

    public boolean onRelease()
    {
      return IMPL.onRelease(this.mEdgeEffect);
    }

    public void setSize(int p0, int p1)
    {
      IMPL.setSize(this.mEdgeEffect, p0, p1);
    }

}
