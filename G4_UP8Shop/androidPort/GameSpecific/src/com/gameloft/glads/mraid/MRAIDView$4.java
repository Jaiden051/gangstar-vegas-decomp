// Decompiled from classes.dex (SourceFile: MRAIDView$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

class MRAIDView$4 implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.mraid.MRAIDView a;

    // Methods
    MRAIDView$4(com.gameloft.glads.mraid.MRAIDView p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      if ( MRAIDView.access$1100(this.a) != 0
        && (MRAIDView.access$1100(this.a) != 1 || MRAIDView.access$500(this.a))
        && MRAIDView.access$1100(this.a) != 4 )
      {
        if ( MRAIDView.access$1100(this.a) == 1 || MRAIDView.access$1100(this.a) == 2 )
        {
          this.a.closeFromExpanded();
        }
        else if ( MRAIDView.access$1100(this.a) == 3 )
        {
          MRAIDView.access$1200(this.a);
        }
      }
    }

}
