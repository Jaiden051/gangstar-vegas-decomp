// Decompiled from classes.dex (SourceFile: VelocityTrackerCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class VelocityTrackerCompat {
    // Fields
    static final android.support.v4.view.VelocityTrackerCompat$VelocityTrackerVersionImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 11 )
        IMPL = (android.support.v4.view.VelocityTrackerCompat$VelocityTrackerVersionImpl)new android.support.v4.view.VelocityTrackerCompat$BaseVelocityTrackerVersionImpl();
      else
        IMPL = (android.support.v4.view.VelocityTrackerCompat$VelocityTrackerVersionImpl)new android.support.v4.view.VelocityTrackerCompat$HoneycombVelocityTrackerVersionImpl();
    }

    public VelocityTrackerCompat()
    {
      super();
    }

    public static float getXVelocity(android.view.VelocityTracker p0, int p1)
    {
      return IMPL.getXVelocity(p0, p1);
    }

    public static float getYVelocity(android.view.VelocityTracker p0, int p1)
    {
      return IMPL.getYVelocity(p0, p1);
    }

}
