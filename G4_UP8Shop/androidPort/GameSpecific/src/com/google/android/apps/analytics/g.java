// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

final class g implements com.google.android.apps.analytics.d {
    // Fields
    final com.google.android.apps.analytics.GoogleAnalyticsTracker a;

    // Methods
    g(com.google.android.apps.analytics.GoogleAnalyticsTracker p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a()
    {
      GoogleAnalyticsTracker.access$000(this.a).post((Runnable)new com.google.android.apps.analytics.h(this));
    }

    public final void a(long p0)
    {
      GoogleAnalyticsTracker.access$100(this.a).a(p0);
    }

}
