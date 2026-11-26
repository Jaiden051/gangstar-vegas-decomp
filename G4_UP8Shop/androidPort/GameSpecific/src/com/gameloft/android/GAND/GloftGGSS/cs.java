// Decompiled from classes.dex (SourceFile: cs.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class cs extends android.webkit.WebChromeClient {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent a;

    // Methods
    cs(com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean onConsoleMessage(android.webkit.ConsoleMessage p0)
    {
      com.gameloft.android.DecompRT.discard(p0.message() + " -- From line " + p0.lineNumber());
      return true;
    }

}
