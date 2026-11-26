// Decompiled from classes.dex (SourceFile: ba.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class ba extends java.lang.Thread {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity a;

    // Methods
    ba(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      android.app.KeyguardManager v1;
      v1 = (android.app.KeyguardManager)this.a.getSystemService("keyguard");
      while ( v1.inKeyguardRestrictedInputMode() )
        ;
      this.a.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.bb(this));
    }

}
