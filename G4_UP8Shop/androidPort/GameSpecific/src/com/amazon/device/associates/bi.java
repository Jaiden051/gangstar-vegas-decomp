// Decompiled from classes.dex (SourceFile: bi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.os.Message;
class bi extends com.amazon.device.associates.ac {
    // Fields
    private static com.amazon.device.associates.bi b;
    private static java.lang.String c;
    private static java.lang.String d;
    private static java.lang.String e;
    private static java.lang.String f;
    private static boolean g;
    private static java.lang.String h;
    private static long i;
    private static android.content.Context j;
    private static java.lang.String k;
    private static boolean l;

    // Methods
    static
    {
      b = null;
      c = "s.amazon-adsystem.com/api3";
      d = "/update_dev_info";
      e = "/generate_did";
      f = "AmazonMobileAssociates";
      g = false;
      h = null;
      l = true;
    }

    bi()
    {
      super();
    }

    private static synchronized void a(long p0)
    {
      android.content.SharedPreferences.Editor v1;
      i = p0;
      v1 = j.getSharedPreferences(f, 0).edit();
      v1.putLong("amzn-ad-sis-last-checkin", p0);
      v1.commit();
    }

    private static void a(String p0)
    {
      android.content.SharedPreferences.Editor v1;
      if ( !p0.equals(h) )
      {
        v1 = j.getSharedPreferences(f, 0).edit();
        v1.putString("amzn-ad-id", p0);
        v1.commit();
        h = p0;
      }
    }

    public static final synchronized com.amazon.device.associates.bi d()
    {
      if ( b == null )
        b = new com.amazon.device.associates.bi();
      j = bo.a();
      h = h();
      k = bo.b();
      f();
      return b;
    }

    protected static synchronized void f()
    {
      long v0; // RETVAL
      long v1;
      String v2;
      v0 = System.currentTimeMillis();
      v1 = v0;
      v2 = h;
      try
      {
        if ( v2 != null )
        {
          if ( v0 - g() <= 86400000 )
          {
            l = false;
          }
          else
          {
            a(v1);
            g = true;
          }
          return;
        }
        a(v0);
        g = false;
      }
      finally
      {
      }
    }

    private static synchronized long g()
    {
      if ( i == 0 )
        i = j.getSharedPreferences(f, 0).getLong("amzn-ad-sis-last-checkin", 0);
      return i;
    }

    private static String h()
    {
      return j.getSharedPreferences(f, 0).getString("amzn-ad-id", null);
    }

    protected void a()
    {
      StringBuilder v1;
      java.util.ArrayList v2;
      org.apache.http.message.BasicNameValuePair v3; // RETVAL
      org.apache.http.message.BasicNameValuePair v4; // RETVAL
    
      v1 = new StringBuilder("http://" + c);
      if ( g )
        v1.append(d);
      else
        v1.append(e);
      new java.util.ArrayList();
      v2 = ax.a(j).a();
      v2.add(new org.apache.http.message.BasicNameValuePair("appId", k));
      v3 = bp.a(j).a();
      if ( v3 != null )
        v2.add(v3);
      v4 = z.a(j).a();
      if ( v4 != null )
        v2.add(v4);
      this.a = new com.amazon.device.associates.aq(v1.toString());
      this.a.a(v2);
    }

    protected synchronized void b()
 throws Exception {
      org.json.JSONObject v1;
      int Int;
      String String;
      String v4; // RETVAL
    
      if ( !l )
        return;
      try
      {
        try
        {
          this.a.a(s.a);
          v1 = (org.json.JSONObject)new org.json.JSONTokener(this.a.a()).nextValue();
          Int = v1.getInt("rcode");
          String = v1.getString("msg");
          v4 = v1.getString("adId");
          if ( Int != 1 )
            throw new Exception("SIS failed registering device -- code: " + Int + "--Message " + String);
          a(v4);
          return;
        }
        catch ( org.json.JSONException v5 )
        {
          throw new Exception("JSON error parsing return from SIS: " + v5.getMessage());
        }
        catch ( java.io.UnsupportedEncodingException e )
        {
          throw new Exception("Could not make a Service call. Could not encode input parameters");
        }
      }
      finally
      {
      }
    }

    protected String c()
    {
      return "SISCall";
    }

}
