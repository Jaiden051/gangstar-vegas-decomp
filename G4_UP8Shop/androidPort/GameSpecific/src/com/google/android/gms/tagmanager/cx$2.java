// Decompiled from classes.dex (SourceFile: cx$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cx$2 implements android.os.Handler.Callback {
    // Fields
    final com.google.android.gms.tagmanager.cx a;

    // Methods
    cx$2(com.google.android.gms.tagmanager.cx p0)
    {
      super();
      this.a = p0;
    
    }

    public boolean handleMessage(android.os.Message p0)
    {
      if ( p0.what == 1 && cx.cE().equals(p0.obj) )
      {
        this.a.c();
        if ( cx.b(this.a) > 0 && !cx.c(this.a) )
          cx.d(this.a).sendMessageDelayed(cx.d(this.a).obtainMessage(1, cx.cE()), cx.b(this.a));
      }
      return true;
    }

}
