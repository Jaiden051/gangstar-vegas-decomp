// Decompiled from classes.dex (SourceFile: GoogleAnalytics$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class GoogleAnalytics$b implements android.app.Application.ActivityLifecycleCallbacks {
    // Fields
    final com.google.android.gms.analytics.GoogleAnalytics a;

    // Methods
    GoogleAnalytics$b(com.google.android.gms.analytics.GoogleAnalytics p0)
    {
      super();
      this.a = p0;
    
    }

    public void onActivityCreated(android.app.Activity p0, android.os.Bundle p1)
    {
      ;
    }

    public void onActivityDestroyed(android.app.Activity p0)
    {
      ;
    }

    public void onActivityPaused(android.app.Activity p0)
    {
      ;
    }

    public void onActivityResumed(android.app.Activity p0)
    {
      ;
    }

    public void onActivitySaveInstanceState(android.app.Activity p0, android.os.Bundle p1)
    {
      ;
    }

    public void onActivityStarted(android.app.Activity p0)
    {
      GoogleAnalytics.a(this.a, p0);
    }

    public void onActivityStopped(android.app.Activity p0)
    {
      GoogleAnalytics.b(this.a, p0);
    }

}
