// Decompiled from classes.dex (SourceFile: bp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.os.Build;
final class bp {
    // Fields
    private static com.amazon.device.associates.bp b;
    org.json.JSONObject a;
    private final java.lang.String c;
    private final java.lang.String d;
    private final java.lang.String e;
    private final java.lang.String f;

    // Methods
    static
    {
      b = null;
    }

    private bp()
    {
      super();
      this.a = new org.json.JSONObject();
      this.c = "Android";
      this.d = Build.MODEL;
      this.e = Build.MANUFACTURER;
      this.f = Build.VERSION.RELEASE;
    }

    protected static final synchronized com.amazon.device.associates.bp a(android.content.Context p0)
    {
      if ( b == null )
        b = new com.amazon.device.associates.bp();
      return b;
    }

    protected final org.apache.http.message.BasicNameValuePair a()
    {
      org.apache.http.message.BasicNameValuePair v1;
      v1 = null;
      try
      {
        this.a = new org.json.JSONObject();
        this.a.put("os", this.c);
        this.a.put("model", this.d);
        this.a.put("make", this.e);
        this.a.put("osVersion", this.f);
        if ( this.a != null )
          return new org.apache.http.message.BasicNameValuePair("dinfo", au.a(this.a.toString()));
        return v1;
      }
      catch ( Exception e )
      {
      }
      return v1;
    }

}
