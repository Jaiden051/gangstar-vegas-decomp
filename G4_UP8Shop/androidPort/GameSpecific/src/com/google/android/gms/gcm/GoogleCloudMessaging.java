// Decompiled from classes.dex (SourceFile: GoogleCloudMessaging.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.gcm;

import android.app.PendingIntent;
import android.os.Looper;
import java.util.concurrent.TimeUnit;
public class GoogleCloudMessaging {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    static com.google.android.gms.gcm.GoogleCloudMessaging f;
    final java.util.concurrent.BlockingQueue g;
    private android.content.Context h;
    private android.app.PendingIntent i;
    private android.os.Handler j;
    private android.os.Messenger k;

    // Methods
    public GoogleCloudMessaging()
    {
      super();
      this.g = new java.util.concurrent.LinkedBlockingQueue();
      this.j = new com.google.android.gms.gcm.GoogleCloudMessaging$1(this, Looper.getMainLooper());
      this.k = new android.os.Messenger(this.j);
    }

    private void a()
    {
      this.d();
    }

    private synchronized void a(android.content.Intent p0)
    {
      android.content.Intent v2;
      if ( this.i == null )
      {
        v2 = new android.content.Intent();
        v2.setPackage("com.google.example.invalidpackage");
        this.i = PendingIntent.getBroadcast(this.h, 0, v2, 0);
      }
      p0.putExtra("app", this.i);
    }

    private void a(String p0, String p1, long p2, int p4, android.os.Bundle p5)
 throws java.io.IOException {
      android.content.Intent v6;
      if ( Looper.getMainLooper() == Looper.myLooper() )
        throw new java.io.IOException("MAIN_THREAD");
      if ( p0 == null )
        throw new IllegalArgumentException("Missing 'to'");
      v6 = new android.content.Intent("com.google.android.gcm.intent.SEND");
      v6.putExtras(p5);
      this.a(v6);
      v6.setPackage("com.google.android.gms");
      v6.putExtra("google.to", p0);
      v6.putExtra("google.message_id", p1);
      v6.putExtra("google.ttl", Long.toString(p2));
      v6.putExtra("google.delay", Integer.toString(-1));
      this.h.sendOrderedBroadcast(v6, "com.google.android.gtalkservice.permission.GTALK_SERVICE");
    }

    private void a(String p0, String p1, long p2, android.os.Bundle p4)
 throws java.io.IOException {
      android.content.Intent v5;
      if ( Looper.getMainLooper() == Looper.myLooper() )
        throw new java.io.IOException("MAIN_THREAD");
      if ( p0 == null )
        throw new IllegalArgumentException("Missing 'to'");
      v5 = new android.content.Intent("com.google.android.gcm.intent.SEND");
      v5.putExtras(p4);
      this.a(v5);
      v5.setPackage("com.google.android.gms");
      v5.putExtra("google.to", p0);
      v5.putExtra("google.message_id", p1);
      v5.putExtra("google.ttl", Long.toString(-1));
      v5.putExtra("google.delay", Integer.toString(-1));
      this.h.sendOrderedBroadcast(v5, "com.google.android.gtalkservice.permission.GTALK_SERVICE");
    }

    private void a(String p0, String p1, android.os.Bundle p2)
 throws java.io.IOException {
      android.content.Intent v4;
      if ( Looper.getMainLooper() == Looper.myLooper() )
        throw new java.io.IOException("MAIN_THREAD");
      if ( p0 == null )
        throw new IllegalArgumentException("Missing 'to'");
      v4 = new android.content.Intent("com.google.android.gcm.intent.SEND");
      v4.putExtras(p2);
      this.a(v4);
      v4.setPackage("com.google.android.gms");
      v4.putExtra("google.to", p0);
      v4.putExtra("google.message_id", p1);
      v4.putExtra("google.ttl", Long.toString(-1));
      v4.putExtra("google.delay", Integer.toString(-1));
      this.h.sendOrderedBroadcast(v4, "com.google.android.gtalkservice.permission.GTALK_SERVICE");
    }

    private void b()
 throws java.io.IOException {
      android.content.Intent v1;
      android.content.Intent v2;
      String StringExtra; // RETVAL
    
      if ( Looper.getMainLooper() == Looper.myLooper() )
        throw new java.io.IOException("MAIN_THREAD");
      v1 = new android.content.Intent("com.google.android.c2dm.intent.UNREGISTER");
      v1.setPackage("com.google.android.gms");
      this.g.clear();
      v1.putExtra("google.messenger", this.k);
      this.a(v1);
      this.h.startService(v1);
      try
      {
        v2 = (android.content.Intent)this.g.poll(5000, TimeUnit.MILLISECONDS);
        if ( v2 == null )
          throw new java.io.IOException("SERVICE_NOT_AVAILABLE");
        if ( v2.getStringExtra("unregistered") == null )
        {
          StringExtra = v2.getStringExtra("error");
          if ( StringExtra != null )
            throw new java.io.IOException(StringExtra);
          throw new java.io.IOException("SERVICE_NOT_AVAILABLE");
        }
        return;
      }
      catch ( InterruptedException v3 )
      {
        throw new java.io.IOException(v3.getMessage());
      }
    }

    private void b(String[] p0)
    {
      StringBuilder v2;
      int i;
      String v4;
      android.content.Intent v5;
      if ( p0 == null || p0.length == 0 )
        throw new IllegalArgumentException("No senderIds");
      v2 = new StringBuilder(p0[0]);
      for ( i = 1; i < p0.length; ++i )
        v2.append(',').append(p0[i]);
      v4 = v2.toString();
      v5 = new android.content.Intent("com.google.android.c2dm.intent.REGISTER");
      v5.setPackage("com.google.android.gms");
      v5.putExtra("google.messenger", this.k);
      this.a(v5);
      v5.putExtra("sender", v4);
      this.h.startService(v5);
    }

    private void c()
    {
      android.content.Intent v1;
      v1 = new android.content.Intent("com.google.android.c2dm.intent.UNREGISTER");
      v1.setPackage("com.google.android.gms");
      this.g.clear();
      v1.putExtra("google.messenger", this.k);
      this.a(v1);
      this.h.startService(v1);
    }

    private static String d(String[] p0)
    {
      StringBuilder v1;
      int i;
      if ( p0 == null || p0.length == 0 )
        throw new IllegalArgumentException("No senderIds");
      v1 = new StringBuilder(p0[0]);
      for ( i = 1; i < p0.length; ++i )
        v1.append(',').append(p0[i]);
      return v1.toString();
    }

    private synchronized void d()
    {
      if ( this.i != null )
      {
        this.i.cancel();
        this.i = null;
      }
    }

    public static synchronized com.google.android.gms.gcm.GoogleCloudMessaging getInstance(
            android.content.Context p0)
    {
      com.google.android.gms.gcm.GoogleCloudMessaging v1;
      if ( f == null )
      {
        v1 = new com.google.android.gms.gcm.GoogleCloudMessaging();
        f = v1;
        v1.h = p0;
      }
      return f;
    }

    private static String getMessageType(android.content.Intent p0)
    {
      String StringExtra;
      if ( !"com.google.android.c2dm.intent.RECEIVE".equals(p0.getAction()) )
        return null;
      StringExtra = p0.getStringExtra("message_type");
      if ( StringExtra == null )
        return "gcm";
      return StringExtra;
    }

    public final String a(String[] p0)
 throws java.io.IOException {
      android.os.Looper MainLooper;
      android.os.Looper v3; // RETVAL
      android.content.Intent v4;
      String result; // RETVAL
      String StringExtra; // RETVAL
    
      MainLooper = Looper.getMainLooper();
      v3 = Looper.myLooper();
      if ( MainLooper == v3 )
        throw new java.io.IOException("MAIN_THREAD");
      this.g.clear();
      this.b(p0);
      try
      {
        v4 = (android.content.Intent)this.g.poll(5000, TimeUnit.MILLISECONDS);
        if ( v4 == null )
          throw new java.io.IOException("SERVICE_NOT_AVAILABLE");
        result = v4.getStringExtra("registration_id");
        if ( result == null )
        {
          v4.getStringExtra("error");
          StringExtra = v4.getStringExtra("error");
          if ( StringExtra != null )
            throw new java.io.IOException(StringExtra);
          throw new java.io.IOException("SERVICE_NOT_AVAILABLE");
        }
        return result;
      }
      catch ( InterruptedException v5 )
      {
        throw new java.io.IOException(v5.getMessage());
      }
    }

}
