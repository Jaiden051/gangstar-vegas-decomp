// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class h implements android.view.View.OnSystemUiVisibilityChangeListener {
    // Fields
    final android.app.Activity a;

    // Methods
    h(android.app.Activity p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onSystemUiVisibilityChange(int p0)
    {
      if ( p0 == 0 )
        new android.os.Handler().postDelayed((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.i(this), 3000);
    }

}
