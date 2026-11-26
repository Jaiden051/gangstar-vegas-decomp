// Decompiled from classes.dex (SourceFile: ScaleGestureDetectorCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class ScaleGestureDetectorCompat {
    // Fields
    static final android.support.v4.view.ScaleGestureDetectorCompat$ScaleGestureDetectorImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 19 )
        IMPL = (android.support.v4.view.ScaleGestureDetectorCompat$ScaleGestureDetectorImpl)new android.support.v4.view.ScaleGestureDetectorCompat$BaseScaleGestureDetectorImpl(null);
      else
        IMPL = (android.support.v4.view.ScaleGestureDetectorCompat$ScaleGestureDetectorImpl)new android.support.v4.view.ScaleGestureDetectorCompat$ScaleGestureDetectorCompatKitKatImpl(null);
    }

    private ScaleGestureDetectorCompat()
    {
      super();
    }

    public static boolean isQuickScaleEnabled(Object p0)
    {
      return IMPL.isQuickScaleEnabled(p0);
    }

    public static void setQuickScaleEnabled(Object p0, boolean p1)
    {
      IMPL.setQuickScaleEnabled(p0, p1);
    }

}
