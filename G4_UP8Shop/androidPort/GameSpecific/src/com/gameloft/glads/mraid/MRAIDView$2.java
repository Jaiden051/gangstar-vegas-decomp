// Decompiled from classes.dex (SourceFile: MRAIDView$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

import com.gameloft.glads.mraid.internal.MRAIDLog;
class MRAIDView$2 extends android.webkit.WebView {
    // Fields
    private static java.lang.String TAG;
    final com.gameloft.glads.mraid.MRAIDView a;

    // Methods
    MRAIDView$2(com.gameloft.glads.mraid.MRAIDView p0, android.content.Context p1)
    {
      super(p1);
      this.a = p0;
    
    }

    public void onConfigurationChanged(android.content.res.Configuration p0)
    {
      StringBuilder v2;
      String v3;
      super.onConfigurationChanged(p0);
      v2 = new StringBuilder("onConfigurationChanged ");
      if ( p0.orientation == 1 )
        v3 = "portrait";
      else
        v3 = "landscape";
      MRAIDLog.d("MRAIDView-WebView", v2.append(v3).toString());
      if ( MRAIDView.access$500(this.a) )
        ((android.app.Activity)MRAIDView.access$700(this.a)).getWindowManager().getDefaultDisplay().getMetrics(MRAIDView.access$600(this.a));
    }

    protected void onLayout(boolean p0, int p1, int p2, int p3, int p4)
    {
      super.onLayout(p0, p1, p2, p3, p4);
      MRAIDView.access$400(this.a, this, p0, p1, p2, p3, p4);
    }

    protected void onVisibilityChanged(android.view.View p0, int p1)
    {
      super.onVisibilityChanged(p0, p1);
      MRAIDLog.d("MRAIDView-WebView", "onVisibilityChanged " + MRAIDView.access$800(p1));
      if ( MRAIDView.access$500(this.a) )
        MRAIDView.access$900(this.a, p1);
    }

    protected void onWindowVisibilityChanged(int p0)
    {
      int Visibility;
      super.onWindowVisibilityChanged(p0);
      Visibility = this.getVisibility();
      MRAIDLog.d(
        "MRAIDView-WebView",
        "onWindowVisibilityChanged " + MRAIDView.access$800(p0) + " (actual " + MRAIDView.access$800(Visibility) + ")");
      if ( MRAIDView.access$500(this.a) )
        MRAIDView.access$900(this.a, Visibility);
      if ( p0 != 0 )
        MRAIDView.access$1000(this.a, this);
    }

}
