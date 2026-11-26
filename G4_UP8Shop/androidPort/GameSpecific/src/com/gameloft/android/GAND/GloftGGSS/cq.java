// Decompiled from classes.dex (SourceFile: cq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class cq implements java.lang.Runnable {
    // Fields
    final boolean a;
    final java.lang.String b;
    final com.gameloft.android.GAND.GloftGGSS.PopUpsManager c;

    // Methods
    cq(com.gameloft.android.GAND.GloftGGSS.PopUpsManager p0, boolean p1, String p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void run()
    {
      if ( this.a )
      {
        if ( PopUpsManager.access$000(this.c) != null )
        {
          PopUpsManager.access$000(this.c).dismiss();
          PopUpsManager.access$002(this.c, new android.app.ProgressDialog(PopUpsManager.access$100(this.c)));
          PopUpsManager.access$000(this.c).setCancelable(false);
          PopUpsManager.access$000(this.c).setProgressStyle(0);
          PopUpsManager.access$000(this.c).setMessage(this.b);
          PopUpsManager.access$000(this.c).show();
        }
        else if ( PopUpsManager.access$000(this.c) != null )
        {
          PopUpsManager.access$000(this.c).hide();
          PopUpsManager.access$002(this.c, null);
        }
      }
    }

}
