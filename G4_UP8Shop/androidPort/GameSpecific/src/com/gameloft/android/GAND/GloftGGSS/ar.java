// Decompiled from classes.dex (SourceFile: ar.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class ar implements android.view.View.OnFocusChangeListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.Game a;

    // Methods
    ar(com.gameloft.android.GAND.GloftGGSS.Game p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onFocusChange(android.view.View p0, boolean p1)
    {
      if ( p1 )
        ((android.view.inputmethod.InputMethodManager)Game.az.getSystemService("input_method")).showSoftInput(p0, 0);
    }

}
