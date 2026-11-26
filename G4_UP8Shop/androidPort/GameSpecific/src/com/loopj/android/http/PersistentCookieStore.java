// Decompiled from classes.dex (SourceFile: PersistentCookieStore.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

import android.text.TextUtils;
public final class PersistentCookieStore implements org.apache.http.client.CookieStore {
    // Fields
    private static java.lang.String a;
    private static java.lang.String b;
    private static java.lang.String c;
    private final java.util.concurrent.ConcurrentHashMap d;
    private final android.content.SharedPreferences e;

    // Methods
    private PersistentCookieStore(android.content.Context p0)
    {
      super();
      int v2;
      String String; // RETVAL
      String[] v4;
      int v5;
      String v6;
      String v7; // RETVAL
      org.apache.http.cookie.Cookie v8; // RETVAL
      v2 = 0;
      this.e = p0.getSharedPreferences("CookiePrefsFile", 0);
      this.d = new java.util.concurrent.ConcurrentHashMap();
      String = this.e.getString("names", null);
      if ( String != null )
      {
        v4 = TextUtils.split(String, ",");
        v5 = v4.length;
        while ( v2 < v5 )
        {
          v6 = v4[v2];
          v7 = this.e.getString("cookie_" + v6, null);
          if ( v7 != null )
          {
            v8 = this.a(v7);
            if ( v8 != null )
              this.d.put(v6, v8);
          }
          ++v2;
        }
        this.clearExpired(new java.util.Date());
      }
    
    }

    private String a(com.loopj.android.http.g p0)
    {
      java.io.ByteArrayOutputStream v2;
      v2 = new java.io.ByteArrayOutputStream();
      try
      {
        new java.io.ObjectOutputStream(v2).writeObject(p0);
        return byteArrayToHexString(v2.toByteArray());
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    private org.apache.http.cookie.Cookie a(String p0)
    {
      int v2;
      byte[] v3;
      int i;
      java.io.ByteArrayInputStream v5;
      v2 = p0.length();
      v3 = new byte[(v2 / 2)];
      for ( i = 0; i < v2; i += 2 )
        v3[i / 2] = (byte)(16 * Character.digit(p0.charAt(i), 16) + Character.digit(p0.charAt(i + 1), 16));
      v5 = new java.io.ByteArrayInputStream(v3);
      try
      {
        return ((com.loopj.android.http.g)new java.io.ObjectInputStream(v5).readObject()).a();
      }
      catch ( Exception v8 )
      {
        v8.printStackTrace();
        return null;
      }
    }

    private static String byteArrayToHexString(byte[] p0)
    {
      StringBuffer v1;
      int v2;
      int i;
      int v4;
      v1 = new StringBuffer(2 * p0.length);
      v2 = p0.length;
      for ( i = 0; i < v2; ++i )
      {
        v4 = (int)p0[i];
        if ( v4 < 16 )
          v1.append('0');
        v1.append(Integer.toHexString(v4));
      }
      return v1.toString().toUpperCase();
    }

    private static byte[] hexStringToByteArray(String p0)
    {
      int v1;
      byte[] v2;
      int i;
      v1 = p0.length();
      v2 = new byte[(v1 / 2)];
      for ( i = 0; i < v1; i += 2 )
        v2[i / 2] = (byte)(16 * Character.digit(p0.charAt(i), 16) + Character.digit(p0.charAt(i + 1), 16));
      return (byte[])v2;
    }

    public final void addCookie(org.apache.http.cookie.Cookie p0)
    {
      String Name;
      android.content.SharedPreferences.Editor v3;
      Name = p0.getName();
      if ( p0.isExpired(new java.util.Date()) )
        this.d.remove(Name);
      else
        this.d.put(Name, p0);
      v3 = this.e.edit();
      v3.putString("names", TextUtils.join(",", this.d.keySet()));
      v3.putString("cookie_" + Name, this.a(new com.loopj.android.http.g(p0)));
      v3.commit();
    }

    public final void clear()
    {
      android.content.SharedPreferences.Editor v1;
      java.util.Iterator i;
      this.d.clear();
      v1 = this.e.edit();
      for ( i = this.d.keySet().iterator(); i.hasNext(); v1.remove("cookie_" + (String)i.next()) )
        ;
      v1.remove("names");
      v1.commit();
    }

    public final boolean clearExpired(java.util.Date p0)
    {
      android.content.SharedPreferences.Editor v2;
      java.util.Iterator v3;
      boolean v4;
      java.util.Map.Entry v5;
      String v6;
      int v7;
      v2 = this.e.edit();
      v3 = this.d.entrySet().iterator();
      v4 = false;
      while ( v3.hasNext() )
      {
        v5 = (java.util.Map.Entry)v3.next();
        v6 = (String)v5.getKey();
        if ( ((org.apache.http.cookie.Cookie)v5.getValue()).isExpired(p0) )
        {
          this.d.remove(v6);
          v2.remove("cookie_" + v6);
          v7 = 1;
        }
        else
        {
          v7 = v4 ? 1 : 0;
        }
        v4 = v7 != 0;
      }
      if ( v4 )
        v2.putString("names", TextUtils.join(",", this.d.keySet()));
      v2.commit();
      return v4;
    }

    public final java.util.List<org.apache.http.cookie.Cookie> getCookies()
    {
      return new java.util.ArrayList(this.d.values());
    }

}
