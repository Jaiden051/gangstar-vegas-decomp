// Decompiled from classes.dex (SourceFile: MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase implements android.support.v4.view.MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl {
    // Methods
    MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase()
    {
      super();
    }

    public int getLayoutDirection(
            android.view.ViewGroup.MarginLayoutParams p0)
    {
      return 0;
    }

    public int getMarginEnd(
            android.view.ViewGroup.MarginLayoutParams p0)
    {
      return p0.rightMargin;
    }

    public int getMarginStart(
            android.view.ViewGroup.MarginLayoutParams p0)
    {
      return p0.leftMargin;
    }

    public boolean isMarginRelative(
            android.view.ViewGroup.MarginLayoutParams p0)
    {
      return false;
    }

    public void resolveLayoutDirection(
            android.view.ViewGroup.MarginLayoutParams p0,
            int p1)
    {
      ;
    }

    public void setLayoutDirection(
            android.view.ViewGroup.MarginLayoutParams p0,
            int p1)
    {
      ;
    }

    public void setMarginEnd(
            android.view.ViewGroup.MarginLayoutParams p0,
            int p1)
    {
      p0.rightMargin = p1;
    }

    public void setMarginStart(
            android.view.ViewGroup.MarginLayoutParams p0,
            int p1)
    {
      p0.leftMargin = p1;
    }

}
