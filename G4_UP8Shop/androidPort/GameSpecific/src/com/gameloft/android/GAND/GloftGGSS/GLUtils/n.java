// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class n implements android.widget.TextView.OnEditorActionListener {
    // Methods
    n()
    {
      super();
    }

    public final boolean onEditorAction(android.widget.TextView p0, int p1, android.view.KeyEvent p2)
    {
      VirtualKeyboard.HideKeyboard();
      return true;
    }

}
