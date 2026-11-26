// Decompiled from classes.dex (SourceFile: fa$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class fa$5 implements android.content.DialogInterface.OnClickListener {
    // Fields
    final android.webkit.JsPromptResult a;

    // Methods
    fa$5(android.webkit.JsPromptResult p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onClick(android.content.DialogInterface p0, int p1)
    {
      this.a.cancel();
    }

}
