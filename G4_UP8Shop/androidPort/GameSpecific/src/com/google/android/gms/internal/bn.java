// Decompiled from classes.dex (SourceFile: bn.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.facebook.Response;
import java.util.Collections;
public final class bn {
    // Fields
    public final java.util.List a;
    public final long b;
    public final java.util.List c;
    public final java.util.List d;
    public final java.util.List e;
    public final java.lang.String f;
    public final long g;
    public int h;
    public int i;

    // Methods
    public bn(String p0)
 throws org.json.JSONException {
      super();
      org.json.JSONObject v2;
      org.json.JSONArray JSONArray;
      java.util.List v4;
      int v5;
      int i;
      com.google.android.gms.internal.bm v7;
      org.json.JSONObject v8; // RETVAL
      org.json.JSONObject v9;
      long v10; // RETVAL
      long v11;
      v2 = new org.json.JSONObject(p0);
      if ( ev.p(2) )
        ev.C("Mediation Response JSON: " + v2.toString(2));
      JSONArray = v2.getJSONArray("ad_networks");
      v4 = new java.util.ArrayList(JSONArray.length());
      v5 = -1;
      for ( i = 0; i < JSONArray.length(); ++i )
      {
        v7 = new com.google.android.gms.internal.bm(JSONArray.getJSONObject(i));
        v4.add(v7);
        if ( v5 < 0 && a(v7) )
          v5 = i;
      }
      this.h = v5;
      this.i = JSONArray.length();
      this.a = Collections.unmodifiableList(v4);
      this.f = v2.getString("qdata");
      v8 = v2.optJSONObject("settings");
      v9 = v8;
      if ( v8 != null )
      {
        this.b = v8.optLong("ad_network_timeout_millis", -1);
        this.c = bs.a(v9, "click_urls");
        this.d = bs.a(v9, "imp_urls");
        this.e = bs.a(v9, "nofill_urls");
        v10 = v9.optLong("refresh", -1);
        if ( v10 <= 0 )
          v11 = -1;
        else
          v11 = 1000 * v10;
        this.g = v11;
      }
      else
      {
        this.b = -1;
        this.c = null;
        this.d = null;
        this.e = null;
        this.g = -1;
      }
    
    }

    private static boolean a(com.google.android.gms.internal.bm p0)
    {
      java.util.Iterator v1;
      v1 = p0.c.iterator();
      while ( v1.hasNext() )
      {
        if ( ((String)v1.next()).equals("com.google.ads.mediation.admob.AdMobAdapter") )
          return true;
      }
      return false;
    }

}
