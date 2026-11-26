// Decompiled from classes.dex (SourceFile: MRAIDView$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

import android.text.TextUtils;
import com.gameloft.glads.mraid.internal.MRAIDLog;
class MRAIDView$5 implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.glads.mraid.MRAIDView b;

    // Methods
    MRAIDView$5(com.gameloft.glads.mraid.MRAIDView p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      String v1;
      v1 = MRAIDView.access$1300(this.b, this.a);
      if ( TextUtils.isEmpty(v1) )
        MRAIDLog.e("Could not load part 2 expanded content for URL: " + this.a);
      else
        ((android.app.Activity)MRAIDView.access$700(this.b)).runOnUiThread((Runnable)new com.gameloft.glads.mraid.MRAIDView$5$1(this, v1));
    }

}
