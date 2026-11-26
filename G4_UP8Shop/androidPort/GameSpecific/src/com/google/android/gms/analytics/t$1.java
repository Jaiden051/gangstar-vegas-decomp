// Decompiled from classes.dex (SourceFile: t$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.text.TextUtils;
class t$1 implements java.lang.Runnable {
    // Fields
    final java.util.Map a;
    final com.google.android.gms.analytics.t b;

    // Methods
    t$1(com.google.android.gms.analytics.t p0, java.util.Map p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      t.a(this.b, this.a);
      if ( TextUtils.isEmpty((CharSequence)this.a.get("&cid")) )
        this.a.put("&cid", h.cq().a("&cid"));
      if ( !GoogleAnalytics.getInstance(t.a(this.b)).b() && !t.b(this.b, this.a) )
      {
        if ( !TextUtils.isEmpty(t.b(this.b)) )
        {
          u.cP().a(true);
          this.a.putAll(new com.google.android.gms.analytics.HitBuilders$HitBuilder().d(t.b(this.b)).a());
          u.cP().a(false);
          t.a(this.b, (String)null);
        }
        t.c(this.b, this.a);
        t.d(this.b).a(y.u(this.a), Long.valueOf((String)this.a.get("&ht")).longValue(), t.d(this.b, this.a), t.c(this.b));
      }
    }

}
