// Decompiled from classes.dex (SourceFile: ScaleGestureDetectorCompatKitKat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ScaleGestureDetectorCompatKitKat {
    // Methods
    private ScaleGestureDetectorCompatKitKat()
    {
      super();
    }

    public static boolean isQuickScaleEnabled(Object p0)
    {
      return ((android.view.ScaleGestureDetector)p0).isQuickScaleEnabled();
    }

    public static void setQuickScaleEnabled(Object p0, boolean p1)
    {
      ((android.view.ScaleGestureDetector)p0).setQuickScaleEnabled(p1);
    }

}
