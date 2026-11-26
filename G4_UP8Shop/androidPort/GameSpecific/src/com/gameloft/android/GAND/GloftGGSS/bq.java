// Decompiled from classes.dex (SourceFile: bq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bq implements android.content.DialogInterface.OnCancelListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.bp a;

    // Methods
    bq(com.gameloft.android.GAND.GloftGGSS.bp p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onCancel(android.content.DialogInterface p0)
    {
      this.a.b.a.a();
    }

}
