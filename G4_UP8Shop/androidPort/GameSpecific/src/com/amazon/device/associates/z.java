// Decompiled from classes.dex (SourceFile: z.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.content.pm.PackageInfo;
class z {
    // Fields
    private static com.amazon.device.associates.z f;
    private final java.lang.String a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final java.lang.String e;

    // Methods
    static
    {
      f = null;
    }

    private z(android.content.Context p0)
    {
      super();
      android.content.pm.PackageManager PackageManager;
      android.content.pm.PackageInfo PackageInfo;
      String v4;
      String v5;
      org.json.JSONObject v6;
      this.a = p0.getPackageName();
      PackageManager = p0.getPackageManager();
      this.b = (String)PackageManager.getApplicationLabel(p0.getApplicationInfo());
      try
      {
        PackageInfo = PackageManager.getPackageInfo(this.a, 0);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        PackageInfo = null;
      }
      if ( PackageInfo != null )
        v4 = PackageInfo.versionName;
      else
        v4 = "";
      this.d = v4;
      if ( PackageInfo != null )
        v5 = Integer.toString(PackageInfo.versionCode);
      else
        v5 = "";
      this.c = v5;
      v6 = new org.json.JSONObject();
      try
      {
        v6.put("lbl", this.b);
        v6.put("pn", this.a);
        if ( !this.c.equals("") )
          v6.put("v", this.c);
        if ( !this.d.equals("") )
          v6.put("vn", this.d);
      }
      catch ( org.json.JSONException e )
      {
      }
      this.e = v6.toString();
    
    }

    protected static final synchronized com.amazon.device.associates.z a(android.content.Context p0)
    {
      if ( f == null )
        f = new com.amazon.device.associates.z(p0);
      return f;
    }

    protected org.apache.http.message.BasicNameValuePair a()
    {
      if ( this.e != null )
        return new org.apache.http.message.BasicNameValuePair("pkg", au.a(this.e.toString()));
      else
        return null;
    }

}
