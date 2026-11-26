// Decompiled from classes.dex (SourceFile: GravityCompatJellybeanMr1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.view.Gravity;
class GravityCompatJellybeanMr1 {
    // Methods
    GravityCompatJellybeanMr1()
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
      Gravity.apply(p0, p1, p2, p3, p4, p5, p6, p7);
    }

    public static void apply(
            int p0,
            int p1,
            int p2,
            android.graphics.Rect p3,
            android.graphics.Rect p4,
            int p5)
    {
      Gravity.apply(p0, p1, p2, p3, p4, p5);
    }

    public static void applyDisplay(
            int p0,
            android.graphics.Rect p1,
            android.graphics.Rect p2,
            int p3)
    {
      Gravity.applyDisplay(p0, p1, p2, p3);
    }

    public static int getAbsoluteGravity(int p0, int p1)
    {
      return Gravity.getAbsoluteGravity(p0, p1);
    }

}
