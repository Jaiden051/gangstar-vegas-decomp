// Decompiled from classes.dex (SourceFile: eq$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.content.Intent;
class eq$1 implements android.content.DialogInterface.OnClickListener {
    // Fields
    final java.lang.String a;
    final com.google.android.gms.internal.eq b;

    // Methods
    eq$1(com.google.android.gms.internal.eq p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void onClick(android.content.DialogInterface p0, int p1)
    {
      eq.a(this.b).startActivity(Intent.createChooser(
                                   new android.content.Intent("android.intent.action.SEND").setType("text/plain").putExtra("android.intent.extra.TEXT", this.a),
                                   "Share via"));
    }

}
