// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

import com.gameloft.android.GAND.GloftGGSS.utils.GoogleAnalyticsConstants$Label;
import android.text.format.Time;
import com.gameloft.android.GAND.GloftGGSS.utils.GoogleAnalyticsConstants;
import com.gameloft.android.GAND.GloftGGSS.utils.GoogleAnalyticsTracker;
final class d extends java.lang.Thread {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller a;

    // Methods
    d(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      java.util.Iterator i;
      for ( i = GameInstaller.access$300(this.a).iterator();
            i.hasNext();
            ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)i.next()).r() )
      {
        ;
      }
      if ( GameInstaller.m_iRealRequiredSize > 0 )
        GoogleAnalyticsTracker.stopTimingTracking(
          "Installer",
          System.currentTimeMillis(),
          "Total Download Time",
          GoogleAnalyticsConstants$Label.g);
    }

}
