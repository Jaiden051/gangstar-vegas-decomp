// Decompiled from classes.dex (SourceFile: ci.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class ci extends android.webkit.WebView {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.InGameBrowser a;

    // Methods
    public ci(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0, android.content.Context p1)
    {
      super(p1);
      this.a = p0;
    
    }

    public final boolean dispatchKeyEventPreIme(android.view.KeyEvent p0)
    {
      switch ( p0.getKeyCode() )
      {
        case 19:
        case 20:
        case 21:
        case 22:
        case 96:
        case 97:
        case 99:
        case 100:
        case 102:
        case 103:
        case 108:
        case 109:
          if ( p0.getAction() != 0 )
          {
            if ( p0.getAction() == 1 )
              this.a.onKeyUp(p0.getKeyCode(), p0);
          }
          else
          {
            this.a.onKeyDown(p0.getKeyCode(), p0);
          }
          break;
        default:
          return super.dispatchKeyEventPreIme(p0);
      }
      return super.dispatchKeyEventPreIme(p0);
    }

}
