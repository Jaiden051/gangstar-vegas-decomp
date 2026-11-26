// Decompiled from classes.dex (SourceFile: fa$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class fa$2 implements android.content.DialogInterface.OnClickListener {
    // Fields
    final android.webkit.JsResult a;

    // Methods
    fa$2(android.webkit.JsResult p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onClick(android.content.DialogInterface p0, int p1)
    {
      this.a.cancel();
    }

}
