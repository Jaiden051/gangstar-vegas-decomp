// Decompiled from classes.dex (SourceFile: dq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class dq implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.android.GAND.GloftGGSS.dp b;

    // Methods
    dq(com.gameloft.android.GAND.GloftGGSS.dp p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      String a;
      a = SplashScreenActivity.access$700(this.b.b, this.a);
      if ( a == null )
        a = this.a;
      this.b.a(a.replace("link:", ""));
    }

}
