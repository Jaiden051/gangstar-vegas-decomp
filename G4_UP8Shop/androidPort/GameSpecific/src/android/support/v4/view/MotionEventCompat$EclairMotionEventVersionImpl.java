// Decompiled from classes.dex (SourceFile: MotionEventCompat$EclairMotionEventVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MotionEventCompat$EclairMotionEventVersionImpl implements android.support.v4.view.MotionEventCompat$MotionEventVersionImpl {
    // Methods
    MotionEventCompat$EclairMotionEventVersionImpl()
    {
      super();
    }

    public int findPointerIndex(android.view.MotionEvent p0, int p1)
    {
      return MotionEventCompatEclair.findPointerIndex(p0, p1);
    }

    public int getPointerCount(android.view.MotionEvent p0)
    {
      return MotionEventCompatEclair.getPointerCount(p0);
    }

    public int getPointerId(android.view.MotionEvent p0, int p1)
    {
      return MotionEventCompatEclair.getPointerId(p0, p1);
    }

    public float getX(android.view.MotionEvent p0, int p1)
    {
      return MotionEventCompatEclair.getX(p0, p1);
    }

    public float getY(android.view.MotionEvent p0, int p1)
    {
      return MotionEventCompatEclair.getY(p0, p1);
    }

}
