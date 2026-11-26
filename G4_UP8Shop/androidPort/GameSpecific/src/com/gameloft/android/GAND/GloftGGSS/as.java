// Decompiled from classes.dex (SourceFile: as.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class as implements android.widget.TextView.OnEditorActionListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.Game a;

    // Methods
    as(com.gameloft.android.GAND.GloftGGSS.Game p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean onEditorAction(android.widget.TextView p0, int p1, android.view.KeyEvent p2)
    {
      if ( p1 == 6 && this.a.O != null && this.a.O.b != null )
        this.a.O.b.a(0, 66);
      return false;
    }

}
