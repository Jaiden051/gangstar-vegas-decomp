// Decompiled from classes.dex (SourceFile: Decomp_do.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class Decomp_do extends android.webkit.WebView {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity a;

    // Methods
    public Decomp_do(com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity p0, android.content.Context p1)
    {
      super(p1);
      this.a = p0;
    
    }

    public final boolean dispatchKeyEventPreIme(android.view.KeyEvent p0)
    {
      boolean v2;
      v2 = true;
      switch ( p0.getKeyCode() )
      {
        case '`':
        case 'a':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'l':
        case 'm':
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
          v2 = super.dispatchKeyEventPreIme(p0);
          break;
      }
      return v2;
    }

}
