// Decompiled from classes.dex (SourceFile: aj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class aj implements android.content.DialogInterface.OnCancelListener {
    // Fields
    final android.app.Activity a;
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils b;

    // Methods
    aj(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils p0, android.app.Activity p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void onCancel(android.content.DialogInterface p0)
    {
      SamsungHelper.IABResultCallBack(1);
      this.a.finish();
    }

}
