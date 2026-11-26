// Decompiled from classes.dex (SourceFile: ai.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class ai implements android.content.DialogInterface.OnCancelListener {
    // Fields
    final android.app.Activity a;
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils b;

    // Methods
    ai(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils p0, android.app.Activity p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void onCancel(android.content.DialogInterface p0)
    {
      SamsungHelper.IABResultCallBack(0);
      this.a.finish();
    }

}
