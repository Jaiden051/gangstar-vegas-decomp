// Decompiled from classes.dex (SourceFile: ExceptionReporter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class ExceptionReporter implements java.lang.Thread.UncaughtExceptionHandler {
    // Fields
    private final java.lang.Thread.UncaughtExceptionHandler a;
    private final com.google.android.gms.analytics.Tracker b;
    private final android.content.Context c;
    private com.google.android.gms.analytics.ExceptionParser d;

    // Methods
    public ExceptionReporter(
            com.google.android.gms.analytics.Tracker p0,
            Thread.UncaughtExceptionHandler p1,
            android.content.Context p2)
    {
      super();
      StringBuilder v4;
      String Name;
      if ( p0 == null )
        throw new NullPointerException("tracker cannot be null");
      if ( p2 == null )
        throw new NullPointerException("context cannot be null");
      this.a = p1;
      this.b = p0;
      this.d = (com.google.android.gms.analytics.ExceptionParser)new com.google.android.gms.analytics.StandardExceptionParser(p2, new java.util.ArrayList());
      this.c = p2.getApplicationContext();
      v4 = new StringBuilder("ExceptionReporter created, original handler is ");
      if ( p1 != null )
        Name = p1.getClass().getName();
      else
        Name = "null";
      aa.C(v4.append(Name).toString());
    
    }

    private void a(com.google.android.gms.analytics.ExceptionParser p0)
    {
      this.d = p0;
    }

    private com.google.android.gms.analytics.ExceptionParser b()
    {
      return this.d;
    }

    final Thread.UncaughtExceptionHandler a()
    {
      return this.a;
    }

    public void uncaughtException(Thread p0, Throwable p1)
    {
      String v3;
      String Name;
      v3 = "UncaughtException";
      if ( this.d != null )
      {
        if ( p0 != null )
          Name = p0.getName();
        else
          Name = null;
        v3 = this.d.a(Name, p1);
      }
      aa.C("Tracking Exception: " + v3);
      this.b.a(new com.google.android.gms.analytics.HitBuilders$ExceptionBuilder().a(v3).a(true).a());
      GoogleAnalytics.getInstance(this.c).d();
      if ( this.a != null )
      {
        aa.C("Passing exception to original handler.");
        this.a.uncaughtException(p0, p1);
      }
    }

}
