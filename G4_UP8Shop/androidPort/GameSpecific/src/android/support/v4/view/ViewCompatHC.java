// Decompiled from classes.dex (SourceFile: ViewCompatHC.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.animation.ValueAnimator;
import android.view.View;
class ViewCompatHC {
    // Methods
    ViewCompatHC()
    {
      super();
    }

    public static float getAlpha(android.view.View p0)
    {
      return p0.getAlpha();
    }

    static long getFrameTime()
    {
      return ValueAnimator.getFrameDelay();
    }

    public static int getLayerType(android.view.View p0)
    {
      return p0.getLayerType();
    }

    public static int getMeasuredHeightAndState(android.view.View p0)
    {
      return p0.getMeasuredHeightAndState();
    }

    public static int getMeasuredState(android.view.View p0)
    {
      return p0.getMeasuredState();
    }

    public static int getMeasuredWidthAndState(android.view.View p0)
    {
      return p0.getMeasuredWidthAndState();
    }

    public static int resolveSizeAndState(int p0, int p1, int p2)
    {
      return View.resolveSizeAndState(p0, p1, p2);
    }

    public static void setLayerType(android.view.View p0, int p1, android.graphics.Paint p2)
    {
      p0.setLayerType(p1, p2);
    }

}
