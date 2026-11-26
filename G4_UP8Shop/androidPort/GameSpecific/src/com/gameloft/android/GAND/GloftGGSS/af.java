// Decompiled from classes.dex (SourceFile: af.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class af implements android.hardware.SensorEventListener {
    // Methods
    af()
    {
      super();
    }

    public final void onAccuracyChanged(android.hardware.Sensor p0, int p1)
    {
      ;
    }

    public final void onSensorChanged(android.hardware.SensorEvent p0)
    {
      Game.access$102(Game.az.getWindowManager().getDefaultDisplay().getRotation());
      if ( Game.access$200() || Game.access$100() == 0 )
      {
        Game.access$300(
          p0.values[1] * -0.101936795f,
          -(p0.values[0] * -0.101936795f),
          p0.values[2] * -0.101936795f);
        return;
      }
      if ( Game.access$100() != 1 )
      {
        if ( Game.access$100() == 2 )
        {
          Game.access$300(
            p0.values[1] * -0.101936795f,
            p0.values[0] * -0.101936795f,
            p0.values[2] * -0.101936795f);
          return;
        }
        Game.access$100();
      }
      Game.access$300(
        p0.values[0] * -0.101936795f,
        p0.values[1] * -0.101936795f,
        p0.values[2] * -0.101936795f);
    }

}
