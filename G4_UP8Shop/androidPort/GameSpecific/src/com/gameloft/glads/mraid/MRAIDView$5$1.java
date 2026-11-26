// Decompiled from classes.dex (SourceFile: MRAIDView$5$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

class MRAIDView$5$1 implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.glads.mraid.MRAIDView$5 b;

    // Methods
    MRAIDView$5$1(com.gameloft.glads.mraid.MRAIDView$5 p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      if ( MRAIDView.access$1100(this.b.b) == 3 )
      {
        MRAIDView.access$1400(this.b.b);
        this.b.b.addView(MRAIDView.access$1500(this.b.b));
      }
      MRAIDView.access$1500(this.b.b).setWebChromeClient(null);
      MRAIDView.access$1500(this.b.b).setWebViewClient(null);
      MRAIDView.access$1602(this.b.b, MRAIDView.access$1700(this.b.b));
      MRAIDView.access$1800(this.b.b, MRAIDView.access$1600(this.b.b));
      MRAIDView.access$1600(this.b.b).loadDataWithBaseURL(MRAIDView.access$1900(this.b.b), this.a, "text/html", "UTF-8", null);
      MRAIDView.access$2002(this.b.b, MRAIDView.access$1600(this.b.b));
      MRAIDView.access$2102(this.b.b, true);
      MRAIDView.access$2200(this.b.b);
    }

}
