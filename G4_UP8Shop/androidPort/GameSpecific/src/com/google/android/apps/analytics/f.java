// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

final class f implements java.lang.Runnable {
    // Fields
    final com.google.android.apps.analytics.GoogleAnalyticsTracker a;

    // Methods
    f(com.google.android.apps.analytics.GoogleAnalyticsTracker p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      this.a.a();
    }

}
