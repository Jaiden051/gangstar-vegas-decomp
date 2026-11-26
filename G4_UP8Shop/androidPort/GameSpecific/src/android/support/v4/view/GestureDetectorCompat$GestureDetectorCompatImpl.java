// Decompiled from classes.dex (SourceFile: GestureDetectorCompat$GestureDetectorCompatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

interface GestureDetectorCompat$GestureDetectorCompatImpl {
    // Methods
    public abstract boolean isLongpressEnabled();

    public abstract boolean onTouchEvent(android.view.MotionEvent p0);

    public abstract void setIsLongpressEnabled(boolean p0);

    public abstract void setOnDoubleTapListener(android.view.GestureDetector.OnDoubleTapListener p0);

}
