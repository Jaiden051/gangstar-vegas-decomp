// Decompiled from classes.dex (SourceFile: ViewDragHelper$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

final class ViewDragHelper$1 implements android.view.animation.Interpolator {
    // Methods
    ViewDragHelper$1()
    {
      super();
    }

    public final float getInterpolation(float p0)
    {
      return (p0 - 1.0f) * ((p0 - 1.0f) * (p0 - 1.0f) * (p0 - 1.0f) * (p0 - 1.0f)) + 1.0f;
    }

}
