// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import android.view.View;
import android.widget.Toast;
final class k implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GLUtils.j a;

    // Methods
    k(com.gameloft.android.GAND.GloftGGSS.GLUtils.j p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      android.view.View View; // RETVAL
    
      try
      {
        if ( SUtils.access$000() == null )
          SUtils.access$002(Toast.makeText(SUtils.getContext(), 2131165541, this.a.a));
        SUtils.access$000().setText(2131165541);
        SUtils.access$000().setDuration(this.a.a);
        View = SUtils.access$000().getView();
        if ( View == null || !View.isShown() )
          SUtils.access$000().show();
      }
      catch ( Exception e )
      {
      }
    }

}
