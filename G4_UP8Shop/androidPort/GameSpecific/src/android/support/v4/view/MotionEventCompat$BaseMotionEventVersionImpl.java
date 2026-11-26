// Decompiled from classes.dex (SourceFile: MotionEventCompat$BaseMotionEventVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MotionEventCompat$BaseMotionEventVersionImpl implements android.support.v4.view.MotionEventCompat$MotionEventVersionImpl {
    // Methods
    MotionEventCompat$BaseMotionEventVersionImpl()
    {
      super();
    }

    public int findPointerIndex(android.view.MotionEvent p0, int p1)
    {
      if ( p1 != 0 )
        return -1;
      else
        return 0;
    }

    public int getPointerCount(android.view.MotionEvent p0)
    {
      return 1;
    }

    public int getPointerId(android.view.MotionEvent p0, int p1)
    {
      if ( p1 != 0 )
        throw new IndexOutOfBoundsException("Pre-Eclair does not support multiple pointers");
      return 0;
    }

    public float getX(android.view.MotionEvent p0, int p1)
    {
      if ( p1 != 0 )
        throw new IndexOutOfBoundsException("Pre-Eclair does not support multiple pointers");
      return p0.getX();
    }

    public float getY(android.view.MotionEvent p0, int p1)
    {
      if ( p1 != 0 )
        throw new IndexOutOfBoundsException("Pre-Eclair does not support multiple pointers");
      return p0.getY();
    }

}
