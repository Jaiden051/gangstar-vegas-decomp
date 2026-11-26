// Decompiled from classes.dex (SourceFile: bg.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bg {
    // Fields
    android.content.Context a;
    android.view.ViewGroup b;
    final com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity c;

    // Methods
    bg(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0, android.content.Context p1, android.view.ViewGroup p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    private void a(String p0)
    {
      if ( p0 != null && p0.equals("true") )
        IGPFreemiumActivity.access$1002(this.c, true);
      else
        IGPFreemiumActivity.access$1002(this.c, false);
    }

    private void a(String p0, String p1, String p2, String p3)
    {
      if ( !IGPFreemiumActivity.access$300(this.c) )
        this.c.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.bh(this, p0, p2, p1, IGPFreemiumActivity.access$600(
                                                                                                      this.c,
                                                                                                      p3)));
    }

}
