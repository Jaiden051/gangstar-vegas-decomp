// Decompiled from classes.dex (SourceFile: s$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class s$c extends java.util.TimerTask {
    // Fields
    final com.google.android.gms.analytics.s a;

    // Methods
    private s$c(com.google.android.gms.analytics.s p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ s$c(com.google.android.gms.analytics.s p0, int p1)
    {
      this(p0);
    }

    public void run()
    {
      if ( s.b(this.a) == s$a.a )
        s.c(this.a);
    }

}
