// Decompiled from classes.dex (SourceFile: cf.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class cf implements android.content.DialogInterface.OnCancelListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.ce a;

    // Methods
    cf(com.gameloft.android.GAND.GloftGGSS.ce p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onCancel(android.content.DialogInterface p0)
    {
      InGameBrowser.access$2100(this.a.b.a);
    }

}
