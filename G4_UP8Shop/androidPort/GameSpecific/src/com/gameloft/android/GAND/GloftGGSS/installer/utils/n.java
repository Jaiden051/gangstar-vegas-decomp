// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer;
final class n extends java.lang.Thread {
    // Fields
    final int a;
    final int b;
    final boolean c;
    final boolean d;
    final java.lang.String e;

    // Methods
    n(int p0, int p1, boolean p2, boolean p3, String p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
    
    }

    public final void run()
    {
      Object v1;
      String v2; // RETVAL
      String v3;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.Device v4;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer v5;
      v1 = Tracker.u;
      synchronized ( v1 )
      {
        v2 = Tracker.access$000(this.a, this.b, this.c, this.d, this.e);
        v3 = v2;
        if ( this.b != 0 || !this.d || !SUtils.getPreferenceBoolean(v2, false, "GameTInfo") )
        {
          v4 = new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device();
          Tracker.n = v4;
          v4.a(Tracker.access$100());
          v5 = new com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer(Tracker.n);
          Tracker.o = v5;
          v5.a(v3);
          while ( !Tracker.o.c() )
          {
            try
            {
              Thread.sleep(100);
            }
            catch ( Exception e )
            {
            }
          }
          if ( XPlayer.getLastErrorCode() == 0 )
            SUtils.setPreference(v3, Boolean.valueOf(true), "GameTInfo");
          Tracker.o = null;
        }
        return;
      }
    }

}
