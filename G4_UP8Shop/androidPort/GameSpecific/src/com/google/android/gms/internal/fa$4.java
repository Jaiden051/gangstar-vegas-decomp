// Decompiled from classes.dex (SourceFile: fa$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class fa$4 implements android.content.DialogInterface.OnCancelListener {
    // Fields
    final android.webkit.JsPromptResult a;

    // Methods
    fa$4(android.webkit.JsPromptResult p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onCancel(android.content.DialogInterface p0)
    {
      this.a.cancel();
    }

}
