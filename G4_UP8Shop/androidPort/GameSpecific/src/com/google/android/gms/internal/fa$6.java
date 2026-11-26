// Decompiled from classes.dex (SourceFile: fa$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class fa$6 implements android.content.DialogInterface.OnClickListener {
    // Fields
    final android.webkit.JsPromptResult a;
    final android.widget.EditText b;

    // Methods
    fa$6(android.webkit.JsPromptResult p0, android.widget.EditText p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void onClick(android.content.DialogInterface p0, int p1)
    {
      this.a.confirm(this.b.getText().toString());
    }

}
