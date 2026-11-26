// Decompiled from classes.dex (SourceFile: GravityCompat$GravityCompatImplJellybeanMr1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class GravityCompat$GravityCompatImplJellybeanMr1 implements android.support.v4.view.GravityCompat$GravityCompatImpl {
    // Methods
    GravityCompat$GravityCompatImplJellybeanMr1()
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
      GravityCompatJellybeanMr1.apply(p0, p1, p2, p3, p4, p5, p6, p7);
    }

    public void apply(
            int p0,
            int p1,
            int p2,
            android.graphics.Rect p3,
            android.graphics.Rect p4,
            int p5)
    {
      GravityCompatJellybeanMr1.apply(p0, p1, p2, p3, p4, p5);
    }

    public void applyDisplay(
            int p0,
            android.graphics.Rect p1,
            android.graphics.Rect p2,
            int p3)
    {
      GravityCompatJellybeanMr1.applyDisplay(p0, p1, p2, p3);
    }

    public int getAbsoluteGravity(int p0, int p1)
    {
      return GravityCompatJellybeanMr1.getAbsoluteGravity(p0, p1);
    }

}
