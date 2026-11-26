// Decompiled from classes.dex (SourceFile: MRAIDView$8.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

class MRAIDView$8 implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.mraid.MRAIDView a;

    // Methods
    MRAIDView$8(com.gameloft.glads.mraid.MRAIDView p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      MRAIDView.access$2300(this.a);
      if ( MRAIDView.access$2400(this.a) != null )
        MRAIDView.access$2400(this.a).mraidViewClose(this.a);
    }

}
