// Decompiled from classes.dex (SourceFile: bu.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bu implements android.view.ViewTreeObserver.OnGlobalLayoutListener {
    // Fields
    final android.view.View a;
    final com.gameloft.android.GAND.GloftGGSS.InGameBrowser b;

    // Methods
    bu(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0, android.view.View p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void onGlobalLayout()
    {
      android.graphics.Rect v1;
      v1 = new android.graphics.Rect();
      this.a.getWindowVisibleDisplayFrame(v1);
      if ( (double)(v1.bottom - v1.top) / (double)this.a.getHeight() > 0.8 )
      {
        InGameBrowser.access$002(this.b, false);
        InGameBrowser.access$100(this.b).setVisibility(0);
      }
      else
      {
        InGameBrowser.access$002(this.b, true);
        InGameBrowser.access$100(this.b).setVisibility(4);
      }
    }

}
