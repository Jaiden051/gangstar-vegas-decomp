// Decompiled from classes.dex (SourceFile: ah.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class ah implements android.content.DialogInterface.OnClickListener {
    // Fields
    final boolean a;
    final android.app.Activity b;
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils c;

    // Methods
    ah(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils p0, boolean p1, android.app.Activity p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void onClick(android.content.DialogInterface p0, int p1)
    {
      p0.dismiss();
      SamsungHelper.IABResultCallBack(1);
      if ( this.a )
        this.b.finish();
    }

}
