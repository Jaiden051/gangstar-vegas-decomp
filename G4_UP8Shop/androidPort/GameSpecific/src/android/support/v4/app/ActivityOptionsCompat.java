// Decompiled from classes.dex (SourceFile: ActivityOptionsCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Build;
public class ActivityOptionsCompat {
    // Methods
    protected ActivityOptionsCompat()
    {
      super();
    }

    public static android.support.v4.app.ActivityOptionsCompat makeCustomAnimation(
            android.content.Context p0,
            int p1,
            int p2)
    {
      if ( Build.VERSION.SDK_INT < 16 )
        return new android.support.v4.app.ActivityOptionsCompat();
      else
        return new android.support.v4.app.i(ActivityOptionsCompatJB.makeCustomAnimation(p0, p1, p2));
    }

    public static android.support.v4.app.ActivityOptionsCompat makeScaleUpAnimation(
            android.view.View p0,
            int p1,
            int p2,
            int p3,
            int p4)
    {
      if ( Build.VERSION.SDK_INT < 16 )
        return new android.support.v4.app.ActivityOptionsCompat();
      else
        return new android.support.v4.app.i(ActivityOptionsCompatJB.makeScaleUpAnimation(p0, p1, p2, p3, p4));
    }

    public static android.support.v4.app.ActivityOptionsCompat makeThumbnailScaleUpAnimation(
            android.view.View p0,
            android.graphics.Bitmap p1,
            int p2,
            int p3)
    {
      if ( Build.VERSION.SDK_INT < 16 )
        return new android.support.v4.app.ActivityOptionsCompat();
      else
        return new android.support.v4.app.i(ActivityOptionsCompatJB.makeThumbnailScaleUpAnimation(p0, p1, p2, p3));
    }

    public android.os.Bundle a()
    {
      return null;
    }

    public void a(android.support.v4.app.ActivityOptionsCompat p0)
    {
      ;
    }

}
