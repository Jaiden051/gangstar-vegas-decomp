// Decompiled from classes.dex (SourceFile: ax.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.provider.Settings;
import java.security.MessageDigest;
import java.util.regex.Pattern;
final class ax {
    // Fields
    private static com.amazon.device.associates.ax l;
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private boolean i;
    private boolean j;
    private boolean k;

    // Methods
    static
    {
      l = null;
    }

    private ax(android.content.Context p0)
    {
      super();
      this.a = "android";
      this.c = null;
      this.e = null;
      this.f = null;
      this.g = null;
      this.h = null;
      this.i = false;
      this.j = false;
      this.k = false;
      this.b = "app";
      this.d = "3p";
      this.c(p0);
      this.b(p0);
      this.b();
    }

    protected static final synchronized com.amazon.device.associates.ax a(android.content.Context p0)
    {
      if ( l == null )
        l = new com.amazon.device.associates.ax(p0);
      return l;
    }

    private String a(String p0)
 throws java.security.NoSuchAlgorithmException {
      java.security.MessageDigest Instance;
      byte[] v3;
      StringBuffer v4;
      int i;
      try
      {
        Instance = MessageDigest.getInstance("SHA-1");
        Instance.update(p0.getBytes());
        v3 = Instance.digest();
        v4 = new StringBuffer();
        for ( i = 0; i < v3.length; ++i )
          v4.append(Integer.toHexString((int)v3[i] | 0x100).substring(1));
        return v4.toString();
      }
      catch ( java.security.NoSuchAlgorithmException v7 )
      {
        throw v7;
      }
    }

    private void b()
    {
      String v1;
      try
      {
        v1 = (String)android.os.Build.class.getDeclaredField("SERIAL").get(android.os.Build.class);
        if ( v1 != null && v1.length() != 0 && !v1.equalsIgnoreCase("unknown") )
          this.g = au.a(this.a(v1));
        else
          this.i = true;
      }
      catch ( java.security.NoSuchAlgorithmException e )
      {
        this.i = true;
      }
      catch ( Exception e )
      {
      }
    }

    private void b(android.content.Context p0)
    {
      String String; // RETVAL
      String v3;
      try
      {
        String = Settings.Secure.getString(p0.getContentResolver(), "android_id");
        v3 = String;
        if ( String != null && String.length() != 0 && !v3.equalsIgnoreCase("9774d56d682e549c") )
        {
          this.f = au.a(this.a(v3));
        }
        else
        {
          this.f = null;
          this.j = true;
        }
      }
      catch ( java.security.NoSuchAlgorithmException e )
      {
        this.j = true;
      }
    }

    private void c(android.content.Context p0)
    {
      android.net.wifi.WifiInfo ConnectionInfo; // RETVAL
      String MacAddress;
      try
      {
        ConnectionInfo = ((android.net.wifi.WifiManager)p0.getSystemService("wifi")).getConnectionInfo();
        if ( ConnectionInfo != null )
          MacAddress = ConnectionInfo.getMacAddress();
        else
          MacAddress = null;
        if ( MacAddress != null && MacAddress.length() != 0 )
        {
          if ( Pattern.compile("((([0-9a-fA-F]){1,2}[-:]){5}([0-9a-fA-F]){1,2})").matcher(MacAddress).find() )
          {
            this.e = au.a(this.a(MacAddress));
          }
          else
          {
            this.e = null;
            this.k = true;
          }
        }
        else
        {
          this.e = null;
          this.k = true;
        }
      }
      catch ( java.security.NoSuchAlgorithmException e )
      {
        this.k = true;
      }
      catch ( SecurityException e )
      {
        this.e = null;
      }
    }

    protected final java.util.ArrayList<org.apache.http.NameValuePair> a()
    {
      java.util.ArrayList v1;
      v1 = new java.util.ArrayList();
      v1.add(new org.apache.http.message.BasicNameValuePair("dt", this.a));
      v1.add(new org.apache.http.message.BasicNameValuePair("app", this.b));
      v1.add(new org.apache.http.message.BasicNameValuePair("aud", this.d));
      v1.add(new org.apache.http.message.BasicNameValuePair("sdkVer", "123"));
      if ( this.e != null )
        v1.add(new org.apache.http.message.BasicNameValuePair("sha1_mac", this.e));
      if ( this.f != null )
        v1.add(new org.apache.http.message.BasicNameValuePair("sha1_udid", this.f));
      if ( this.g != null )
        v1.add(new org.apache.http.message.BasicNameValuePair("sha1_serial", this.g));
      if ( this.h != null )
        v1.add(new org.apache.http.message.BasicNameValuePair("ua", au.a(this.h)));
      if ( this.k )
        v1.add(new org.apache.http.message.BasicNameValuePair("badMac", "true"));
      if ( this.i )
        v1.add(new org.apache.http.message.BasicNameValuePair("badSerial", "true"));
      if ( this.j )
        v1.add(new org.apache.http.message.BasicNameValuePair("badUdid", "true"));
      return v1;
    }

}
