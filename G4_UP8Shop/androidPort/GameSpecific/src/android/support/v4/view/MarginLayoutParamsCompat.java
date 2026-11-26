// Decompiled from classes.dex (SourceFile: MarginLayoutParamsCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class MarginLayoutParamsCompat {
    // Fields
    static final android.support.v4.view.MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 17 )
        IMPL = (android.support.v4.view.MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl)new android.support.v4.view.MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase();
      else
        IMPL = (android.support.v4.view.MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl)new android.support.v4.view.MarginLayoutParamsCompat$MarginLayoutParamsCompatImplJbMr1();
    }

    public MarginLayoutParamsCompat()
    {
      super();
    }

    public static int getLayoutDirection(android.view.ViewGroup.MarginLayoutParams p0)
    {
      return IMPL.getLayoutDirection(p0);
    }

    public static int getMarginEnd(android.view.ViewGroup.MarginLayoutParams p0)
    {
      return IMPL.getMarginEnd(p0);
    }

    public static int getMarginStart(android.view.ViewGroup.MarginLayoutParams p0)
    {
      return IMPL.getMarginStart(p0);
    }

    public static boolean isMarginRelative(android.view.ViewGroup.MarginLayoutParams p0)
    {
      return IMPL.isMarginRelative(p0);
    }

    public static void resolveLayoutDirection(
            android.view.ViewGroup.MarginLayoutParams p0,
            int p1)
    {
      IMPL.resolveLayoutDirection(p0, p1);
    }

    public static void setLayoutDirection(android.view.ViewGroup.MarginLayoutParams p0, int p1)
    {
      IMPL.setLayoutDirection(p0, p1);
    }

    public static void setMarginEnd(android.view.ViewGroup.MarginLayoutParams p0, int p1)
    {
      IMPL.setMarginEnd(p0, p1);
    }

    public static void setMarginStart(android.view.ViewGroup.MarginLayoutParams p0, int p1)
    {
      IMPL.setMarginStart(p0, p1);
    }

}
