// Decompiled from classes.dex (SourceFile: a$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

import com.google.android.gms.common.GooglePlayServicesUtil;
final class a$5 implements android.view.View.OnClickListener {
    // Fields
    final android.content.Context a;
    final int b;

    // Methods
    a$5(android.content.Context p0, int p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void onClick(android.view.View p0)
    {
      this.a.startActivity(GooglePlayServicesUtil.c(this.a, this.b));
    }

}
