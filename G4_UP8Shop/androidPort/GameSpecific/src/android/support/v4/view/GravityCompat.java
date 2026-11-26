// Decompiled from classes.dex (SourceFile: GravityCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class GravityCompat {
    // Fields
    public static int END;
    static final android.support.v4.view.GravityCompat$GravityCompatImpl IMPL;
    public static int RELATIVE_HORIZONTAL_GRAVITY_MASK;
    public static int RELATIVE_LAYOUT_DIRECTION;
    public static int START;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 17 )
        IMPL = (android.support.v4.view.GravityCompat$GravityCompatImpl)new android.support.v4.view.GravityCompat$GravityCompatImplBase();
      else
        IMPL = (android.support.v4.view.GravityCompat$GravityCompatImpl)new android.support.v4.view.GravityCompat$GravityCompatImplJellybeanMr1();
    }

    public GravityCompat()
    {
      super();
    }

    public static void apply(
            int p0,
            int p1,
            int p2,
            android.graphics.Rect p3,
            int p4,
            int p5,
            android.graphics.Rect p6,
            int p7)
    {
      IMPL.apply(p0, p1, p2, p3, p4, p5, p6, p7);
    }

    public static void apply(
            int p0,
            int p1,
            int p2,
            android.graphics.Rect p3,
            android.graphics.Rect p4,
            int p5)
    {
      IMPL.apply(p0, p1, p2, p3, p4, p5);
    }

    public static void applyDisplay(int p0, android.graphics.Rect p1, android.graphics.Rect p2, int p3)
    {
      IMPL.applyDisplay(p0, p1, p2, p3);
    }

    public static int getAbsoluteGravity(int p0, int p1)
    {
      return IMPL.getAbsoluteGravity(p0, p1);
    }

}
