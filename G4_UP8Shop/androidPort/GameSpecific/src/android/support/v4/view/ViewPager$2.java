// Decompiled from classes.dex (SourceFile: ViewPager$2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

final class ViewPager$2 implements android.view.animation.Interpolator {
    // Methods
    ViewPager$2()
    {
      super();
    }

    public final float getInterpolation(float p0)
    {
      return (p0 - 1.0f) * ((p0 - 1.0f) * (p0 - 1.0f) * (p0 - 1.0f) * (p0 - 1.0f)) + 1.0f;
    }

}
