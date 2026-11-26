// Decompiled from classes.dex (SourceFile: GestureDetectorCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class GestureDetectorCompat {
    // Fields
    private final android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImpl mImpl;

    // Methods
    public GestureDetectorCompat(android.content.Context p0, android.view.GestureDetector.OnGestureListener p1)
    {
      this(p0, p1, null);
    }

    public GestureDetectorCompat(
            android.content.Context p0,
            android.view.GestureDetector.OnGestureListener p1,
            android.os.Handler p2)
    {
      super();
      if ( Build.VERSION.SDK_INT <= 17 )
        this.mImpl = (android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImpl)new android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase(p0, p1, p2);
      else
        this.mImpl = (android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImpl)new android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplJellybeanMr2(p0, p1, p2);
    }

    public boolean isLongpressEnabled()
    {
      return this.mImpl.isLongpressEnabled();
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      return this.mImpl.onTouchEvent(p0);
    }

    public void setIsLongpressEnabled(boolean p0)
    {
      this.mImpl.setIsLongpressEnabled(p0);
    }

    public void setOnDoubleTapListener(android.view.GestureDetector.OnDoubleTapListener p0)
    {
      this.mImpl.setOnDoubleTapListener(p0);
    }

}
