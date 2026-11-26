// Decompiled from classes.dex (SourceFile: dg.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class dg implements android.view.View.OnClickListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.RateGameDialogFragment a;

    // Methods
    dg(com.gameloft.android.GAND.GloftGGSS.RateGameDialogFragment p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onClick(android.view.View p0)
    {
      Game.nativeRateMenuAnswerCallback(RateGameDialogFragment.access$000(this.a));
      RateGameDialogFragment.access$100(this.a).cancel();
    }

}
