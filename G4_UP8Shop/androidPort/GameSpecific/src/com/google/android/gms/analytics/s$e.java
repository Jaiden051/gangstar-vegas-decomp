// Decompiled from classes.dex (SourceFile: s$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class s$e extends java.util.TimerTask {
    // Fields
    final com.google.android.gms.analytics.s a;

    // Methods
    private s$e(com.google.android.gms.analytics.s p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ s$e(com.google.android.gms.analytics.s p0, int p1)
    {
      this(p0);
    }

    public void run()
    {
      s.d(this.a);
    }

}
