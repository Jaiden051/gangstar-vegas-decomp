// Decompiled from classes.dex (SourceFile: as.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class as extends java.lang.Thread implements com.google.android.gms.tagmanager.ar {
    // Fields
    private static com.google.android.gms.tagmanager.as d;
    private final java.util.concurrent.LinkedBlockingQueue a;
    private volatile boolean b;
    private volatile boolean c;
    private volatile com.google.android.gms.tagmanager.at e;
    private final android.content.Context f;

    // Methods
    private as(android.content.Context p0)
    {
      super("GAThread");
      this.a = new java.util.concurrent.LinkedBlockingQueue();
      this.b = false;
      this.c = false;
      if ( p0 != null )
        this.f = p0.getApplicationContext();
      else
        this.f = null;
      this.start();
    }

    static com.google.android.gms.tagmanager.as M(android.content.Context p0)
    {
      if ( d == null )
        d = new com.google.android.gms.tagmanager.as(p0);
      return d;
    }

    /* synthetic */ static com.google.android.gms.tagmanager.at a(com.google.android.gms.tagmanager.as p0)
    {
      return p0.e;
    }

    /* synthetic */ static com.google.android.gms.tagmanager.at a(
            com.google.android.gms.tagmanager.as p0,
            com.google.android.gms.tagmanager.at p1)
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

    private void a(String p0, long p1)
    {
      this.a((Runnable)new com.google.android.gms.tagmanager.as$1(this, this, p1, p0));
    }

    /* synthetic */ static android.content.Context b(com.google.android.gms.tagmanager.as p0)
    {
      return p0.f;
    }

    public final void a(Runnable p0)
    {
      this.a.add(p0);
    }

    public final void a(String p0)
    {
      this.a((Runnable)new com.google.android.gms.tagmanager.as$1(this, this, System.currentTimeMillis(), p0));
    }

    public void run()
    {
      Runnable v2;
      java.io.ByteArrayOutputStream v6;
      java.io.PrintStream v7;
      while ( !this.c )
      {
        try
        {
          try
          {
            v2 = (Runnable)this.a.take();
            if ( !this.b )
              v2.run();
          }
          catch ( InterruptedException v4 )
          {
            bh.B(v4.toString());
          }
        }
        catch ( Throwable v5 )
        {
          v6 = new java.io.ByteArrayOutputStream();
          v7 = new java.io.PrintStream(v6);
          v5.printStackTrace(v7);
          v7.flush();
          bh.A("Error on GAThread: " + new String(v6.toByteArray()));
          bh.A("Google Analytics is shutting down.");
          this.b = true;
        }
      }
    }

}
