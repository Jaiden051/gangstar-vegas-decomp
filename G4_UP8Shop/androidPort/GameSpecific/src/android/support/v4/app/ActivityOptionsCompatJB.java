// Decompiled from classes.dex (SourceFile: ActivityOptionsCompatJB.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.app.ActivityOptions;
class ActivityOptionsCompatJB {
    // Fields
    private final android.app.ActivityOptions a;

    // Methods
    private ActivityOptionsCompatJB(android.app.ActivityOptions p0)
    {
      super();
      this.a = p0;
    }

    public static android.support.v4.app.ActivityOptionsCompatJB makeCustomAnimation(
            android.content.Context p0,
            int p1,
            int p2)
    {
      return new android.support.v4.app.ActivityOptionsCompatJB(ActivityOptions.makeCustomAnimation(p0, p1, p2));
    }

    public static android.support.v4.app.ActivityOptionsCompatJB makeScaleUpAnimation(
            android.view.View p0,
            int p1,
            int p2,
            int p3,
            int p4)
    {
      return new android.support.v4.app.ActivityOptionsCompatJB(ActivityOptions.makeScaleUpAnimation(p0, p1, p2, p3, p4));
    }

    public static android.support.v4.app.ActivityOptionsCompatJB makeThumbnailScaleUpAnimation(
            android.view.View p0,
            android.graphics.Bitmap p1,
            int p2,
            int p3)
    {
      return new android.support.v4.app.ActivityOptionsCompatJB(ActivityOptions.makeThumbnailScaleUpAnimation(
                                                                  p0,
                                                                  p1,
                                                                  p2,
                                                                  p3));
    }

    public final android.os.Bundle a()
    {
      return this.a.toBundle();
    }

    public final void a(android.support.v4.app.ActivityOptionsCompatJB p0)
    {
      this.a.update(p0.a);
    }

}
