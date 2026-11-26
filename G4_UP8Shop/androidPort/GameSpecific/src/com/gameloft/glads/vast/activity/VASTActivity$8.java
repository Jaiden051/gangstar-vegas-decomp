// Decompiled from classes.dex (SourceFile: VASTActivity$8.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.activity;

import com.gameloft.glads.vast.util.VASTLog;
class VASTActivity$8 extends java.util.TimerTask {
    // Fields
    int a;
    final com.gameloft.glads.vast.activity.VASTActivity b;
    final com.gameloft.glads.vast.activity.VASTActivity c;

    // Methods
    VASTActivity$8(com.gameloft.glads.vast.activity.VASTActivity p0, com.gameloft.glads.vast.activity.VASTActivity p1)
    {
      super();
      this.c = p0;
      this.b = p1;
      this.a = 19;
    
    }

    public void run()
    {
      int v1;
      int v2;
      if ( VASTActivity.access$1000(this.c) != null )
      {
        this.b.runOnUiThread((Runnable)new com.gameloft.glads.vast.activity.VASTActivity$8$1(this));
        if ( VASTActivity.access$1600(this.c).size() == this.a )
        {
          v1 = ((Integer)VASTActivity.access$1600(this.c).getFirst()).intValue();
          v2 = ((Integer)VASTActivity.access$1600(this.c).getLast()).intValue();
          if ( v2 <= v1 )
          {
            VASTLog.e(VASTActivity.access$600(), "detected video hang");
            VASTActivity.access$1702(this.c, true);
            VASTActivity.access$1800(this.c);
            VASTActivity.access$1900(this.c);
            VASTActivity.access$300(this.c);
          }
          else
          {
            VASTLog.v(VASTActivity.access$600(), "video progressing (position:" + v2 + ")");
            VASTActivity.access$1600(this.c).removeFirst();
          }
        }
        try
        {
          VASTActivity.access$1600(this.c).addLast(Integer.valueOf(VASTActivity.access$1000(this.c).getCurrentPosition()));
        }
        catch ( Exception e )
        {
        }
      }
    }

}
