// Decompiled from classes.dex (SourceFile: r$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class r$2 implements android.os.Handler.Callback {
    // Fields
    final com.google.android.gms.analytics.r a;

    // Methods
    r$2(com.google.android.gms.analytics.r p0)
    {
      super();
      this.a = p0;
    
    }

    public boolean handleMessage(android.os.Message p0)
    {
      if ( p0.what == 1 && r.cE().equals(p0.obj) )
      {
        u.cP().a(true);
        this.a.a();
        u.cP().a(false);
        if ( r.b(this.a) > 0 && !r.c(this.a) )
          r.d(this.a).sendMessageDelayed(r.d(this.a).obtainMessage(1, r.cE()), 1000 * r.b(this.a));
      }
      return true;
    }

}
