// Decompiled from classes.dex (SourceFile: t.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.os.Process;
import android.text.TextUtils;
import com.google.android.gms.internal.it;
class t extends java.lang.Thread implements com.google.android.gms.analytics.f {
    // Fields
    private static com.google.android.gms.analytics.t f;
    private final java.util.concurrent.LinkedBlockingQueue a;
    private volatile boolean b;
    private volatile boolean c;
    private volatile java.util.List d;
    private volatile java.lang.String e;
    private volatile com.google.android.gms.analytics.ag g;
    private final android.content.Context h;

    // Methods
    private t(android.content.Context p0)
    {
      super("GAThread");
      this.a = new java.util.concurrent.LinkedBlockingQueue();
      this.b = false;
      this.c = false;
      if ( p0 != null )
        this.h = p0.getApplicationContext();
      else
        this.h = null;
      this.start();
    }

    static int O(String p0)
    {
      int v1;
      int i;
      char v3; // RETVAL
    
      v1 = 1;
      if ( !TextUtils.isEmpty(p0) )
      {
        v1 = 0;
        for ( i = p0.length() - 1; i >= 0; --i )
        {
          v3 = p0.charAt(i);
          v1 = ((v1 << 6) & 0xFFFFFFF) + v3 + (v3 << 14);
          if ( (v1 & 0xFE00000) != 0 )
            v1 ^= (v1 & 0xFE00000) >> 21;
        }
      }
      return v1;
    }

    /* synthetic */ static android.content.Context a(com.google.android.gms.analytics.t p0)
    {
      return p0.h;
    }

    /* synthetic */ static String a(com.google.android.gms.analytics.t p0, String p1)
    {
      p0.e = p1;
      return p1;
    }

    private static String a(Throwable p0)
    {
      java.io.ByteArrayOutputStream v1;
      java.io.PrintStream v2;
      v1 = new java.io.ByteArrayOutputStream();
      v2 = new java.io.PrintStream(v1);
      p0.printStackTrace(v2);
      v2.flush();
      return new String(v1.toByteArray());
    }

    /* synthetic */ static void a(com.google.android.gms.analytics.t p0, java.util.Map p1)
    {
      com.google.android.gms.analytics.m v2;
      v2 = com.google.android.gms.analytics.a.p(p0.h);
      ak.a(p1, "&adid", v2.a("&adid"));
      ak.a(p1, "&ate", v2.a("&ate"));
    }

    private void a(Runnable p0)
    {
      this.a.add(p0);
    }

    /* synthetic */ static String b(com.google.android.gms.analytics.t p0)
    {
      return p0.e;
    }

    private void b(java.util.Map<String, String> p0)
    {
      com.google.android.gms.analytics.m v2;
      v2 = com.google.android.gms.analytics.a.p(this.h);
      ak.a(p0, "&adid", v2.a("&adid"));
      ak.a(p0, "&ate", v2.a("&ate"));
    }

    /* synthetic */ static boolean b(com.google.android.gms.analytics.t p0, java.util.Map p1)
    {
      double v2;
      String v3;
      Object[] v4;
      if ( p1.get("&sf") == null )
        return false;
      v2 = ak.a((String)p1.get("&sf"), 100.0);
      if ( v2 >= 100.0 || (double)(O((String)p1.get("&cid")) % 10000) < v2 * 100.0 )
        return false;
      if ( p1.get("&t") != null )
        v3 = (String)p1.get("&t");
      else
        v3 = "unknown";
      v4 = new Object[1];
      v4[0] = v3;
      aa.C(String.format("%s hit sampled out", v4));
      return true;
    }

    /* synthetic */ static java.util.List c(com.google.android.gms.analytics.t p0)
    {
      return p0.d;
    }

    /* synthetic */ static void c(com.google.android.gms.analytics.t p0, java.util.Map p1)
    {
      com.google.android.gms.analytics.g v2;
      v2 = com.google.android.gms.analytics.g.cp();
      ak.a(p1, "&an", ((com.google.android.gms.analytics.m)v2).a("&an"));
      ak.a(p1, "&av", ((com.google.android.gms.analytics.m)v2).a("&av"));
      ak.a(p1, "&aid", ((com.google.android.gms.analytics.m)v2).a("&aid"));
      ak.a(p1, "&aiid", ((com.google.android.gms.analytics.m)v2).a("&aiid"));
      p1.put("&v", "1");
    }

    /* synthetic */ static com.google.android.gms.analytics.ag d(com.google.android.gms.analytics.t p0)
    {
      return p0.g;
    }

    /* synthetic */ static String d(com.google.android.gms.analytics.t p0, java.util.Map p1)
    {
      if ( !p1.containsKey("useSecure") )
        return "https:";
      if ( ak.d((String)p1.get("useSecure"), true) )
        return "https:";
      return "http:";
    }

    private void f()
    {
      com.google.android.gms.analytics.ag g;
      java.util.List d;
      java.util.List v3;
      java.util.List v4;
      g = this.g;
      g.d();
      this.d = new java.util.ArrayList();
      d = this.d;
      d.add(new com.google.android.gms.internal.fe("appendVersion", "&_v".substring(1), "ma4.0.2"));
      v3 = this.d;
      v3.add(new com.google.android.gms.internal.fe("appendQueueTime", "&qt".substring(1), null));
      v4 = this.d;
      v4.add(new com.google.android.gms.internal.fe("appendCacheBuster", "&z".substring(1), null));
    }

    private static String q(java.util.Map<String, String> p0)
    {
      if ( !p0.containsKey("useSecure") )
        return "https:";
      if ( ak.d((String)p0.get("useSecure"), true) )
        return "https:";
      return "http:";
    }

    private static boolean r(java.util.Map<String, String> p0)
    {
      double v3;
      String v4;
      Object[] v5;
      if ( p0.get("&sf") == null )
        return false;
      v3 = ak.a((String)p0.get("&sf"), 100.0);
      if ( v3 >= 100.0 )
        return false;
      if ( (double)(O((String)p0.get("&cid")) % 10000) < v3 * 100.0 )
        return false;
      if ( p0.get("&t") != null )
        v4 = (String)p0.get("&t");
      else
        v4 = "unknown";
      v5 = new Object[1];
      v5[0] = v4;
      aa.C(String.format("%s hit sampled out", v5));
      return true;
    }

    private static void t(java.util.Map<String, String> p0)
    {
      com.google.android.gms.analytics.g v1;
      v1 = com.google.android.gms.analytics.g.cp();
      ak.a(p0, "&an", ((com.google.android.gms.analytics.m)v1).a("&an"));
      ak.a(p0, "&av", ((com.google.android.gms.analytics.m)v1).a("&av"));
      ak.a(p0, "&aid", ((com.google.android.gms.analytics.m)v1).a("&aid"));
      ak.a(p0, "&aiid", ((com.google.android.gms.analytics.m)v1).a("&aiid"));
      p0.put("&v", "1");
    }

    static com.google.android.gms.analytics.t u(android.content.Context p0)
    {
      if ( f == null )
        f = new com.google.android.gms.analytics.t(p0);
      return f;
    }

    static String v(android.content.Context p0)
    {
      String v1;
      java.io.FileInputStream v2;
      byte[] v3;
      int v4;
      String v6;
      v1 = null;
      try
      {
        v2 = p0.openFileInput("gaInstallData");
        v3 = new byte[0x2000];
        v4 = v2.read(v3, 0, 0x2000);
        if ( v2.available() <= 0 )
        {
          v2.close();
          p0.deleteFile("gaInstallData");
          if ( v4 > 0 )
          {
            v6 = new String(v3, 0, v4);
            aa.B("Campaign found: " + v6);
            return v6;
          }
          else
          {
            aa.D("Campaign file is empty.");
          }
        }
        else
        {
          aa.A("Too much campaign data, ignoring it.");
          v2.close();
          p0.deleteFile("gaInstallData");
        }
        return v1;
      }
      catch ( java.io.FileNotFoundException e )
      {
        aa.B("No campaign data found.");
        return v1;
      }
      catch ( java.io.IOException e )
      {
        aa.A("Error reading campaign data.");
        p0.deleteFile("gaInstallData");
      }
      return v1;
    }

    public final void a()
    {
      this.a((Runnable)new com.google.android.gms.analytics.t$2(this));
    }

    public final void a(java.util.Map<String, String> p0)
    {
      java.util.Map v2;
      String v3;
      v2 = new java.util.HashMap(p0);
      v3 = (String)p0.get("&ht");
      if ( v3 != null )
      {
        try
        {
          Long.valueOf(v3);
        }
        catch ( NumberFormatException e )
        {
          v3 = null;
        }
      }
      if ( v3 == null )
        v2.put("&ht", Long.toString(System.currentTimeMillis()));
      this.a((Runnable)new com.google.android.gms.analytics.t$1(this, v2));
    }

    public final void b()
    {
      this.a((Runnable)new com.google.android.gms.analytics.t$3(this));
    }

    public final void c()
    {
      this.a((Runnable)new com.google.android.gms.analytics.t$4(this));
    }

    public final java.util.concurrent.LinkedBlockingQueue<Runnable> d()
    {
      return this.a;
    }

    public final Thread e()
    {
      return this;
    }

    public void run()
    {
      com.google.android.gms.analytics.ag g;
      com.google.android.gms.analytics.ag v2;
      java.util.List d;
      java.util.List v4;
      java.util.List v5;
      Runnable v7;
      Process.setThreadPriority(10);
      try
      {
        Thread.sleep(5000);
      }
      catch ( InterruptedException e )
      {
        aa.D("sleep interrupted in GAThread initialize");
      }
      try
      {
        g = this.g;
        if ( g == null )
          this.g = (com.google.android.gms.analytics.ag)new com.google.android.gms.analytics.s(this.h, this);
        v2 = this.g;
        v2.d();
        this.d = new java.util.ArrayList();
        d = this.d;
        d.add(new com.google.android.gms.internal.fe("appendVersion", "&_v".substring(1), "ma4.0.2"));
        v4 = this.d;
        v4.add(new com.google.android.gms.internal.fe("appendQueueTime", "&qt".substring(1), null));
        v5 = this.d;
        v5.add(new com.google.android.gms.internal.fe("appendCacheBuster", "&z".substring(1), null));
        this.e = v(this.h);
        aa.C("Initialized GA Thread");
      }
      catch ( Throwable v11 )
      {
        aa.A("Error initializing the GAThread: " + a(v11));
        aa.A("Google Analytics will not start up.");
        this.b = true;
      }
      while ( !this.c )
      {
        try
        {
          try
          {
            v7 = (Runnable)this.a.take();
            if ( !this.b )
              v7.run();
          }
          catch ( InterruptedException v9 )
          {
            aa.B(v9.toString());
          }
        }
        catch ( Throwable v10 )
        {
          aa.A("Error on GAThread: " + a(v10));
          aa.A("Google Analytics is shutting down.");
          this.b = true;
        }
      }
    }

}
