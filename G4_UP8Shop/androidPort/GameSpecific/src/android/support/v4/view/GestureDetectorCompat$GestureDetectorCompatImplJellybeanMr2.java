// Decompiled from classes.dex (SourceFile: GestureDetectorCompat$GestureDetectorCompatImplJellybeanMr2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class GestureDetectorCompat$GestureDetectorCompatImplJellybeanMr2 implements android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImpl {
    // Fields
    private final android.view.GestureDetector mDetector;

    // Methods
    public GestureDetectorCompat$GestureDetectorCompatImplJellybeanMr2(
            android.content.Context p0,
            android.view.GestureDetector.OnGestureListener p1,
            android.os.Handler p2)
    {
      super();
      this.mDetector = new android.view.GestureDetector(p0, p1, p2);
    }

    public boolean isLongpressEnabled()
    {
      return this.mDetector.isLongpressEnabled();
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      return this.mDetector.onTouchEvent(p0);
    }

    public void setIsLongpressEnabled(boolean p0)
    {
      this.mDetector.setIsLongpressEnabled(p0);
    }

    public void setOnDoubleTapListener(
            android.view.GestureDetector.OnDoubleTapListener p0)
    {
      this.mDetector.setOnDoubleTapListener(p0);
    }

}
