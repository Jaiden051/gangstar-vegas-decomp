// Decompiled from classes.dex (SourceFile: dy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.location.Location;
import android.os.SystemClock;
import android.text.TextUtils;
import com.facebook.Response;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
public final class dy extends com.google.android.gms.internal.dx$a {
    // Fields
    private static final java.lang.Object a;
    private static com.google.android.gms.internal.dy b;
    private final android.content.Context c;
    private final com.google.android.gms.internal.ee d;
    private final com.google.android.gms.internal.bj e;
    private final com.google.android.gms.internal.az f;

    // Methods
    static
    {
      a = new Object();
    }

    private dy(
            android.content.Context p0,
            com.google.android.gms.internal.az p1,
            com.google.android.gms.internal.bj p2,
            com.google.android.gms.internal.ee p3)
    {
      super();
      this.c = p0;
      this.d = p3;
      this.e = p2;
      this.f = p1;
    }

    private static com.google.android.gms.internal.dv a(
            android.content.Context p0,
            com.google.android.gms.internal.az p1,
            com.google.android.gms.internal.bj p2,
            com.google.android.gms.internal.ee p3,
            com.google.android.gms.internal.dt p4)
    {
      com.google.android.gms.internal.ed v5;
      com.google.android.gms.internal.ea v8;
      String String; // RETVAL
      String v10;
      String v11; // RETVAL
      com.google.android.gms.internal.ec v12; // RETVAL
      com.google.android.gms.internal.ec v13;
      ev.z("Starting ad request from service.");
      p2.a();
      v5 = new com.google.android.gms.internal.ed(p0);
      if ( v5.l == -1 )
      {
        ev.z("Device is offline.");
        return new com.google.android.gms.internal.dv(2);
      }
      else
      {
        v8 = new com.google.android.gms.internal.ea(p4.f.packageName);
        if ( p4.c.c != null && (String = p4.c.c.getString("_ad")) != null )
        {
          return dz.a(p0, p4, String);
        }
        else
        {
          p2.b();
          v10 = p1.a();
          v11 = dz.a(p4, v5, null, p1.b());
          if ( v11 != null )
          {
            eu.a.post((Runnable)new com.google.android.gms.internal.dy$1(p0, p4, v8, s(v11), v10));
            v12 = v8.b();
            v13 = v12;
            if ( v12 != null && !TextUtils.isEmpty(v12.c()) )
            {
              if ( v13.e() )
                p3.a();
              return a(p0, p4.k.b, v13.c(), null, v13);
            }
            else
            {
              return new com.google.android.gms.internal.dv(v8.a());
            }
          }
          else
          {
            return new com.google.android.gms.internal.dv(0);
          }
        }
      }
    }

    public static com.google.android.gms.internal.dv a(
            android.content.Context p0,
            String p1,
            String p2,
            String p3,
            com.google.android.gms.internal.ec p4)
    {
      int v5;
      com.google.android.gms.internal.eb v6;
      long v7;
      java.net.URL v8;
      int v9;
      java.net.HttpURLConnection v10;
      byte[] Bytes;
      java.io.BufferedOutputStream v12;
      int ResponseCode;
      java.util.Map HeaderFields;
      String v15;
      String v16; // RETVAL
      String HeaderField;
      v5 = 0;
      try
      {
        v6 = new com.google.android.gms.internal.eb();
        v7 = SystemClock.elapsedRealtime();
        v8 = new java.net.URL(p2);
        v9 = 0;
        while ( true )
        {
          v10 = (java.net.HttpURLConnection)v8.openConnection();
          try
          {
            ep.a(p0, p1, false, v10);
            if ( !TextUtils.isEmpty(p3) )
              v10.addRequestProperty("x-afma-drt-cookie", p3);
            if ( p4 != null && !TextUtils.isEmpty(p4.b()) )
            {
              v10.setDoOutput(true);
              Bytes = p4.b().getBytes();
              v10.setFixedLengthStreamingMode(Bytes.length);
              v12 = new java.io.BufferedOutputStream(v10.getOutputStream());
              v12.write(Bytes);
              v12.close();
            }
            ResponseCode = v10.getResponseCode();
            HeaderFields = v10.getHeaderFields();
            if ( ResponseCode >= 200 && ResponseCode < 300 )
            {
              v15 = v8.toString();
              v16 = ep.a(new java.io.InputStreamReader(v10.getInputStream()));
              a(v15, HeaderFields, v16, ResponseCode);
              v6.a(v15, HeaderFields, v16);
              return v6.a(v7);
            }
            a(v8.toString(), HeaderFields, null, ResponseCode);
            if ( ResponseCode < 300 || ResponseCode >= 400 )
            {
              ev.D("Received error HTTP response code: " + ResponseCode);
              return new com.google.android.gms.internal.dv(0);
            }
            HeaderField = v10.getHeaderField("Location");
            if ( TextUtils.isEmpty(HeaderField) )
            {
              ev.D("No location header to follow redirect.");
              return new com.google.android.gms.internal.dv(0);
            }
            v8 = new java.net.URL(HeaderField);
            if ( ++v9 > 5 )
            {
              ev.D("Too many redirects.");
              return new com.google.android.gms.internal.dv(0);
            }
            v6.a(HeaderFields);
          }
          finally
          {
            v10.disconnect();
          }
        }
      }
      catch ( java.io.IOException v21 )
      {
        ev.D("Error while connecting to ad server: " + v21.getMessage());
        return new com.google.android.gms.internal.dv(2);
      }
    }

    public static com.google.android.gms.internal.dy a(
            android.content.Context p0,
            com.google.android.gms.internal.az p1,
            com.google.android.gms.internal.bj p2,
            com.google.android.gms.internal.ee p3)
    {
      Object v4;
      v4 = a;
      synchronized ( v4 )
      {
        if ( b == null )
          b = new com.google.android.gms.internal.dy(p0.getApplicationContext(), p1, p2, p3);
        return b;
      }
    }

    private static void a(String p0, java.util.Map<String, java.util.List<String>> p1, String p2, int p3)
    {
      java.util.Iterator v4;
      String v5;
      java.util.Iterator i;
      int j;
      if ( ev.p(2) )
      {
        ev.C("Http Response: {\n  URL:\n    " + p0 + "\n  Headers:");
        if ( p1 != null )
        {
          v4 = p1.keySet().iterator();
          while ( v4.hasNext() )
          {
            v5 = (String)v4.next();
            ev.C("    " + v5 + ":");
            for ( i = ((java.util.List)p1.get(v5)).iterator(); i.hasNext(); ev.C("      " + (String)i.next()) )
              ;
          }
        }
        ev.C("  Body:");
        if ( p2 != null )
        {
          for ( j = 0; j < Math.min(p2.length(), 100000); j += 1000 )
            ev.C(p2.substring(j, Math.min(p2.length(), j + 1000)));
        }
        else
        {
          ev.C("    null");
        }
        ev.C("  Response Code:\n    " + p3 + "\n}");
      }
    }

    private static com.google.android.gms.internal.ez$a s(String p0)
    {
      return (com.google.android.gms.internal.ez$a)new com.google.android.gms.internal.dy$2(p0);
    }

    public final com.google.android.gms.internal.dv a(com.google.android.gms.internal.dt p0)
    {
      return a(this.c, this.f, this.e, this.d, p0);
    }

}
