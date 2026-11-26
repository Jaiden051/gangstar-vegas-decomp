// Decompiled from classes.dex (SourceFile: GravityCompat$GravityCompatImplBase.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.view.Gravity;
class GravityCompat$GravityCompatImplBase implements android.support.v4.view.GravityCompat$GravityCompatImpl {
    // Methods
    GravityCompat$GravityCompatImplBase()
    {
      super();
    }

    public void apply(
            int p0,
            int p1,
            int p2,
            android.graphics.Rect p3,
            int p4,
            int p5,
            android.graphics.Rect p6,
            int p7)
    {
      Gravity.apply(p0, p1, p2, p3, p4, p5, p6);
    }

    public void apply(
            int p0,
            int p1,
            int p2,
            android.graphics.Rect p3,
            android.graphics.Rect p4,
            int p5)
    {
      Gravity.apply(p0, p1, p2, p3, p4);
    }

    public void applyDisplay(
            int p0,
            android.graphics.Rect p1,
            android.graphics.Rect p2,
            int p3)
    {
      Gravity.applyDisplay(p0, p1, p2);
    }

    public int getAbsoluteGravity(int p0, int p1)
    {
      return p0 & 0xFF7FFFFF;
    }

}
