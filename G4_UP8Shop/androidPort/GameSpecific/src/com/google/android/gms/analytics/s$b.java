// Decompiled from classes.dex (SourceFile: s$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class s$b extends java.util.TimerTask {
    // Fields
    final com.google.android.gms.analytics.s a;

    // Methods
    private s$b(com.google.android.gms.analytics.s p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ s$b(com.google.android.gms.analytics.s p0, int p1)
    {
      this(p0);
    }

    public void run()
    {
      if ( s.b(this.a) == s$a.b && s.e(this.a).isEmpty() && s.f(this.a) + s.g(this.a) < s.h(this.a).a() )
      {
        aa.C("Disconnecting due to inactivity");
        s.i(this.a);
      }
      else
      {
        s.j(this.a).schedule(new com.google.android.gms.analytics.s$b(this.a), s.g(this.a));
      }
    }

}
