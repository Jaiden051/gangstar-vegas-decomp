// Decompiled from classes.dex (SourceFile: ag.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class ag implements android.content.DialogInterface.OnClickListener {
    // Fields
    final java.lang.Runnable a;
    final boolean b;
    final android.app.Activity c;
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils d;

    // Methods
    ag(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils p0, Runnable p1, boolean p2, android.app.Activity p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    public final void onClick(android.content.DialogInterface p0, int p1)
    {
      if ( this.a != null )
        this.a.run();
      p0.dismiss();
      if ( this.b && !this.d.H )
        this.c.finish();
    }

}
