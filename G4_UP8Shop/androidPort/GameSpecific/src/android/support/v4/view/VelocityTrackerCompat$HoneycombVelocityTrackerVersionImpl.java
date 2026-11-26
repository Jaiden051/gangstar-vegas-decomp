// Decompiled from classes.dex (SourceFile: VelocityTrackerCompat$HoneycombVelocityTrackerVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class VelocityTrackerCompat$HoneycombVelocityTrackerVersionImpl implements android.support.v4.view.VelocityTrackerCompat$VelocityTrackerVersionImpl {
    // Methods
    VelocityTrackerCompat$HoneycombVelocityTrackerVersionImpl()
    {
      super();
    }

    public float getXVelocity(
            android.view.VelocityTracker p0,
            int p1)
    {
      return VelocityTrackerCompatHoneycomb.getXVelocity(p0, p1);
    }

    public float getYVelocity(
            android.view.VelocityTracker p0,
            int p1)
    {
      return VelocityTrackerCompatHoneycomb.getYVelocity(p0, p1);
    }

}
