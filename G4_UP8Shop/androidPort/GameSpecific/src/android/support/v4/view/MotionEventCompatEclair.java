// Decompiled from classes.dex (SourceFile: MotionEventCompatEclair.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MotionEventCompatEclair {
    // Methods
    MotionEventCompatEclair()
    {
      super();
    }

    public static int findPointerIndex(android.view.MotionEvent p0, int p1)
    {
      return p0.findPointerIndex(p1);
    }

    public static int getPointerCount(android.view.MotionEvent p0)
    {
      return p0.getPointerCount();
    }

    public static int getPointerId(android.view.MotionEvent p0, int p1)
    {
      return p0.getPointerId(p1);
    }

    public static float getX(android.view.MotionEvent p0, int p1)
    {
      return p0.getX(p1);
    }

    public static float getY(android.view.MotionEvent p0, int p1)
    {
      return p0.getY(p1);
    }

}
