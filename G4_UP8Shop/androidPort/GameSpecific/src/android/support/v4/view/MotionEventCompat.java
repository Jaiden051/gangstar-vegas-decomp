// Decompiled from classes.dex (SourceFile: MotionEventCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class MotionEventCompat {
    // Fields
    public static int ACTION_HOVER_ENTER;
    public static int ACTION_HOVER_EXIT;
    public static int ACTION_HOVER_MOVE;
    public static int ACTION_MASK;
    public static int ACTION_POINTER_DOWN;
    public static int ACTION_POINTER_INDEX_MASK;
    public static int ACTION_POINTER_INDEX_SHIFT;
    public static int ACTION_POINTER_UP;
    public static int ACTION_SCROLL;
    static final android.support.v4.view.MotionEventCompat$MotionEventVersionImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 5 )
        IMPL = (android.support.v4.view.MotionEventCompat$MotionEventVersionImpl)new android.support.v4.view.MotionEventCompat$BaseMotionEventVersionImpl();
      else
        IMPL = (android.support.v4.view.MotionEventCompat$MotionEventVersionImpl)new android.support.v4.view.MotionEventCompat$EclairMotionEventVersionImpl();
    }

    public MotionEventCompat()
    {
      super();
    }

    public static int findPointerIndex(android.view.MotionEvent p0, int p1)
    {
      return IMPL.findPointerIndex(p0, p1);
    }

    public static int getActionIndex(android.view.MotionEvent p0)
    {
      return (p0.getAction() & 0xFF00) >> 8;
    }

    public static int getActionMasked(android.view.MotionEvent p0)
    {
      return p0.getAction() & 0xFF;
    }

    public static int getPointerCount(android.view.MotionEvent p0)
    {
      return IMPL.getPointerCount(p0);
    }

    public static int getPointerId(android.view.MotionEvent p0, int p1)
    {
      return IMPL.getPointerId(p0, p1);
    }

    public static float getX(android.view.MotionEvent p0, int p1)
    {
      return IMPL.getX(p0, p1);
    }

    public static float getY(android.view.MotionEvent p0, int p1)
    {
      return IMPL.getY(p0, p1);
    }

}
