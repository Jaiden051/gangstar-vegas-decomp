// Decompiled from classes.dex (SourceFile: fa$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class fa$1 implements android.content.DialogInterface.OnCancelListener {
    // Fields
    final android.webkit.JsResult a;

    // Methods
    fa$1(android.webkit.JsResult p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onCancel(android.content.DialogInterface p0)
    {
      this.a.cancel();
    }

}
