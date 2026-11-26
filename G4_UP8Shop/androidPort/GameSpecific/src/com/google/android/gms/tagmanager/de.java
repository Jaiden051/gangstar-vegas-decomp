// Decompiled from classes.dex (SourceFile: de.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import com.google.android.gms.analytics.GoogleAnalytics;
class de {
    // Fields
    private com.google.android.gms.analytics.GoogleAnalytics a;
    private android.content.Context b;
    private com.google.android.gms.analytics.Tracker c;

    // Methods
    de(android.content.Context p0)
    {
      super();
      this.b = p0;
    }

    private synchronized void b(String p0)
    {
      if ( this.a == null )
      {
        this.a = GoogleAnalytics.getInstance(this.b);
        this.a.a((com.google.android.gms.analytics.Logger)new com.google.android.gms.tagmanager.de$a());
        this.c = this.a.a(p0);
      }
    }

    public final com.google.android.gms.analytics.Tracker a(String p0)
    {
      this.b(p0);
      return this.c;
    }

}
