// Decompiled from classes.dex (SourceFile: co.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class co implements java.util.concurrent.Callable {
    // Fields
    final java.lang.String a;
    final java.lang.String b;

    // Methods
    co(String p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    private com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError a()
    {
      return PopUpsManager.GetInstance().a(true, this.a, this.b);
    }

    /* synthetic */ public final Object call()
    {
      return PopUpsManager.GetInstance().a(true, this.a, this.b);
    }

}
