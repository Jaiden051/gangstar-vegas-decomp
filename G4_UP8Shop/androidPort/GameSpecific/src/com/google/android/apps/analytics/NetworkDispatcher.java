// Decompiled from classes.dex (SourceFile: NetworkDispatcher.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import android.os.Build;
import com.google.android.gms.analytics.GoogleAnalytics;
import java.util.Locale;
class NetworkDispatcher implements com.google.android.apps.analytics.c {
    // Fields
    private static java.lang.String a;
    private static int b;
    private static int c;
    private static int d;
    private static java.lang.String e;
    private static int g;
    private static int h;
    private static long i;
    private final java.lang.String f;
    private final org.apache.http.HttpHost j;
    private com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread k;
    private boolean l;

    // Methods
    public NetworkDispatcher()
    {
      this("GoogleAnalytics", "1.4.2");
    }

    public NetworkDispatcher(String p0, String p1)
    {
      this(p0, p1, "www.google-analytics.com", 80);
    }

    private NetworkDispatcher(String p0, String p1, String p2, int p3)
    {
      super();
      java.util.Locale Default;
      Object[] v6;
      String v7;
      String v8;
      this.l = false;
      this.j = new org.apache.http.HttpHost(p2, 80);
      Default = Locale.getDefault();
      v6 = new Object[7];
      v6[0] = p0;
      v6[1] = p1;
      v6[2] = Build.VERSION.RELEASE;
      if ( Default.getLanguage() != null )
        v7 = Default.getLanguage().toLowerCase();
      else
        v7 = "en";
      v6[3] = v7;
      if ( Default.getCountry() != null )
        v8 = Default.getCountry().toLowerCase();
      else
        v8 = "";
      v6[4] = v8;
      v6[5] = Build.MODEL;
      v6[6] = Build.ID;
      this.f = String.format("%s/%s (Linux; U; Android %s; %s-%s; %s Build/%s)", v6);
    
    }

    private void a(com.google.android.apps.analytics.d p0, com.google.android.apps.analytics.o p1)
    {
      this.a();
      this.k = new com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread(p0, p1, this.f, this, 0);
      this.k.start();
    }

    /* synthetic */ static org.apache.http.HttpHost access$200(
            com.google.android.apps.analytics.NetworkDispatcher p0)
    {
      return p0.j;
    }

    private void c()
    {
      android.os.Handler a;
      this.k.getLooper();
      while ( true )
      {
        a = this.k.a;
        if ( a != null )
          break;
        Thread.yield();
      }
    }

    private String d()
    {
      return this.f;
    }

    public final void a()
    {
      if ( this.k != null && this.k.getLooper() != null )
      {
        this.k.getLooper().quit();
        this.k = null;
      }
    }

    public final void a(com.google.android.apps.analytics.d p0)
    {
      this.a();
      this.k = new com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread(p0, this.f, this, 0);
      this.k.start();
    }

    public final void a(boolean p0)
    {
      this.l = p0;
    }

    public final void a(com.google.android.apps.analytics.i[] p0)
    {
      if ( this.k != null )
        this.k.a(p0);
    }

    public final boolean b()
    {
      return this.l;
    }

}
