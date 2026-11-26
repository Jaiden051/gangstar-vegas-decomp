// Decompiled from classes.dex (SourceFile: VASTActivity$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.activity;

import com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE;
import com.gameloft.glads.vast.util.VASTLog;
class VASTActivity$7 extends java.util.TimerTask {
    // Fields
    final int a;
    final com.gameloft.glads.vast.activity.VASTActivity b;

    // Methods
    VASTActivity$7(com.gameloft.glads.vast.activity.VASTActivity p0, int p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      int CurrentPosition; // RETVAL
      int v2;
      try
      {
        CurrentPosition = VASTActivity.access$1000(this.b).getCurrentPosition();
        if ( CurrentPosition != 0 )
        {
          v2 = 100 * CurrentPosition / this.a;
          if ( v2 >= 25 * VASTActivity.access$1100(this.b) )
          {
            if ( VASTActivity.access$1100(this.b) != 0 )
            {
              if ( VASTActivity.access$1100(this.b) == 1 )
              {
                VASTLog.i(VASTActivity.access$600(), "Video at first quartile: (" + v2 + "%)");
                VASTActivity.access$1200(this.b, TRACKING_EVENTS_TYPE.firstQuartile);
              }
              else if ( VASTActivity.access$1100(this.b) == 2 )
              {
                VASTLog.i(VASTActivity.access$600(), "Video at midpoint: (" + v2 + "%)");
                VASTActivity.access$1200(this.b, TRACKING_EVENTS_TYPE.midpoint);
              }
              else if ( VASTActivity.access$1100(this.b) == 3 )
              {
                VASTLog.i(VASTActivity.access$600(), "Video at third quartile: (" + v2 + "%)");
                VASTActivity.access$1200(this.b, TRACKING_EVENTS_TYPE.thirdQuartile);
                VASTActivity.access$1300(this.b);
              }
            }
            else
            {
              VASTLog.i(VASTActivity.access$600(), "Video at start: (" + v2 + "%)");
              VASTActivity.access$1200(this.b, TRACKING_EVENTS_TYPE.start);
            }
            VASTActivity.access$1108(this.b);
          }
        }
      }
      catch ( Exception v3 )
      {
        VASTLog.w(VASTActivity.access$600(), "mediaPlayer.getCurrentPosition exception: " + v3.getMessage());
        this.cancel();
      }
    }

}
