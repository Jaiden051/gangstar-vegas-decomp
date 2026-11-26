// Decompiled from classes.dex (SourceFile: MarginLayoutParamsCompatJellybeanMr1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MarginLayoutParamsCompatJellybeanMr1 {
    // Methods
    MarginLayoutParamsCompatJellybeanMr1()
    {
      super();
    }

    public static int getLayoutDirection(android.view.ViewGroup.MarginLayoutParams p0)
    {
      return p0.getLayoutDirection();
    }

    public static int getMarginEnd(android.view.ViewGroup.MarginLayoutParams p0)
    {
      return p0.getMarginEnd();
    }

    public static int getMarginStart(android.view.ViewGroup.MarginLayoutParams p0)
    {
      return p0.getMarginStart();
    }

    public static boolean isMarginRelative(
            android.view.ViewGroup.MarginLayoutParams p0)
    {
      return p0.isMarginRelative();
    }

    public static void resolveLayoutDirection(
            android.view.ViewGroup.MarginLayoutParams p0,
            int p1)
    {
      p0.resolveLayoutDirection(p1);
    }

    public static void setLayoutDirection(
            android.view.ViewGroup.MarginLayoutParams p0,
            int p1)
    {
      p0.setLayoutDirection(p1);
    }

    public static void setMarginEnd(
            android.view.ViewGroup.MarginLayoutParams p0,
            int p1)
    {
      p0.setMarginEnd(p1);
    }

    public static void setMarginStart(
            android.view.ViewGroup.MarginLayoutParams p0,
            int p1)
    {
      p0.setMarginStart(p1);
    }

}
