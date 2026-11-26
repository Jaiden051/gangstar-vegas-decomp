// Decompiled from classes.dex (SourceFile: dz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.graphics.Color;
import android.text.TextUtils;
import java.util.Locale;
public final class dz {
    // Fields
    private static final java.text.SimpleDateFormat a;

    // Methods
    static
    {
      a = new java.text.SimpleDateFormat("yyyyMMdd");
    }

    public static com.google.android.gms.internal.dv a(
            android.content.Context p0,
            com.google.android.gms.internal.dt p1,
            String p2)
    {
      org.json.JSONObject v3;
      String b;
      String v5;
      String v6;
      String c;
      long n;
      String v9;
      long g;
      String v11;
      int l;
      com.google.android.gms.internal.dv v15; // RETVAL
      com.google.android.gms.internal.dv v16;
      org.json.JSONArray v17; // RETVAL
      org.json.JSONArray v18;
      java.util.List d;
      int i;
      java.util.List v22;
      org.json.JSONArray v23; // RETVAL
      org.json.JSONArray v24;
      java.util.List f;
      int j;
      java.util.List v27;
      org.json.JSONArray v28; // RETVAL
      org.json.JSONArray v29;
      java.util.List v30;
      int k;
      java.util.List v32;
      String v33;
      String v34;
      boolean v35;
      try
      {
        v3 = new org.json.JSONObject(p2);
        b = v3.optString("ad_base_url", null);
        v5 = v3.optString("ad_url", null);
        v6 = v3.optString("ad_size", null);
        c = v3.optString("ad_html", null);
        n = -1;
        v9 = v3.optString("debug_dialog", null);
        if ( v3.has("interstitial_timeout") )
          g = (long)(v3.getDouble("interstitial_timeout") * 1000.0);
        else
          g = -1;
        v11 = v3.optString("orientation", null);
        l = -1;
        if ( "portrait".equals(v11) )
        {
          l = ep.bN();
        }
        else if ( "landscape".equals(v11) )
        {
          l = ep.bM();
        }
        if ( TextUtils.isEmpty(c) )
        {
          if ( TextUtils.isEmpty(v5) )
          {
            ev.D("Could not parse the mediation config: Missing required ad_html or ad_url field.");
            return new com.google.android.gms.internal.dv(0);
          }
          v15 = dy.a(p0, p1.k.b, v5, null, null);
          b = v15.b;
          c = v15.c;
          n = v15.n;
          v16 = v15;
        }
        else
        {
          if ( TextUtils.isEmpty(b) )
          {
            ev.D("Could not parse the mediation config: Missing required ad_base_url field");
            return new com.google.android.gms.internal.dv(0);
          }
          v16 = null;
        }
        v17 = v3.optJSONArray("click_urls");
        v18 = v17;
        if ( v16 != null )
          d = v16.d;
        else
          d = null;
        if ( v17 != null )
        {
          if ( d == null )
            d = new java.util.LinkedList();
          for ( i = 0; i < v18.length(); ++i )
            d.add(v18.getString(i));
          v22 = d;
        }
        else
        {
          v22 = d;
        }
        v23 = v3.optJSONArray("impression_urls");
        v24 = v23;
        if ( v16 != null )
          f = v16.f;
        else
          f = null;
        if ( v23 != null )
        {
          if ( f == null )
            f = new java.util.LinkedList();
          for ( j = 0; j < v24.length(); ++j )
            f.add(v24.getString(j));
          v27 = f;
        }
        else
        {
          v27 = f;
        }
        v28 = v3.optJSONArray("manual_impression_urls");
        v29 = v28;
        if ( v16 != null )
          v30 = v16.j;
        else
          v30 = null;
        if ( v28 != null )
        {
          if ( v30 == null )
            v30 = new java.util.LinkedList();
          for ( k = 0; k < v29.length(); ++k )
            v30.add(v29.getString(k));
          v32 = v30;
        }
        else
        {
          v32 = v30;
        }
        if ( v16 != null )
        {
          if ( v16.l != -1 )
            l = v16.l;
          if ( v16.g > 0 )
            g = v16.g;
        }
        v33 = v3.optString("active_view");
        v34 = null;
        v35 = v3.optBoolean("ad_is_javascript", false);
        if ( v35 )
          v34 = v3.optString("ad_passback_url", null);
        return new com.google.android.gms.internal.dv(b, c, v22, v27, g, false, -1, v32, -1, l, v6, n, v9, v35, v34, v33);
      }
      catch ( org.json.JSONException v21 )
      {
        ev.D("Could not parse the mediation config: " + v21.getMessage());
        return new com.google.android.gms.internal.dv(0);
      }
    }

    public static String a(
            com.google.android.gms.internal.dt p0,
            com.google.android.gms.internal.ed p1,
            android.location.Location p2,
            String p3)
    {
      java.util.HashMap v4;
      StringBuilder v5;
      com.google.android.gms.internal.am[] h;
      int v7;
      int i;
      com.google.android.gms.internal.am v9;
      int f;
      int c;
      try
      {
        v4 = new java.util.HashMap();
        if ( p3 != null && p3.trim() != "" )
          v4.put("eid", p3);
        if ( p0.b != null )
          v4.put("ad_pos", p0.b);
        a(v4, p0.c);
        v4.put("format", p0.d.b);
        if ( p0.d.f == -1 )
          v4.put("smart_w", "full");
        if ( p0.d.c == -2 )
          v4.put("smart_h", "auto");
        if ( p0.d.h != null )
        {
          v5 = new StringBuilder();
          h = p0.d.h;
          v7 = h.length;
          for ( i = 0; i < v7; ++i )
          {
            v9 = h[i];
            if ( v5.length() != 0 )
              v5.append("|");
            if ( v9.f == -1 )
              f = (int)((float)v9.g / p1.q);
            else
              f = v9.f;
            v5.append(f);
            v5.append("x");
            if ( v9.c == -2 )
              c = (int)((float)v9.d / p1.q);
            else
              c = v9.c;
            v5.append(c);
          }
          v4.put("sz", v5);
        }
        v4.put("slotname", p0.e);
        v4.put("pn", p0.f.packageName);
        if ( p0.g != null )
          v4.put("vc", Integer.valueOf(p0.g.versionCode));
        v4.put("ms", p0.h);
        v4.put("seq_num", p0.i);
        v4.put("session_id", p0.j);
        v4.put("js", p0.k.b);
        a(v4, p1);
        if ( p0.c.a >= 2 && p0.c.k != null )
          a(v4, p0.c.k);
        if ( p0.a >= 2 )
          v4.put("quality_signals", p0.l);
        if ( ev.p(2) )
          ev.C("Ad Request JSON: " + ep.o(v4).toString(2));
        return ep.o(v4).toString();
      }
      catch ( org.json.JSONException v14 )
      {
        ev.D("Problem serializing ad request to JSON: " + v14.getMessage());
        return null;
      }
    }

    private static void a(java.util.HashMap<String, Object> p0, android.location.Location p1)
    {
      java.util.HashMap v2;
      Float v3;
      Long v4;
      Long v5;
      Long v6;
      v2 = new java.util.HashMap();
      v3 = Float.valueOf(p1.getAccuracy() * 1000.0f);
      v4 = Long.valueOf(1000 * p1.getTime());
      v5 = Long.valueOf((long)(p1.getLatitude() * 10000000.0));
      v6 = Long.valueOf((long)(p1.getLongitude() * 10000000.0));
      v2.put("radius", v3);
      v2.put("lat", v5);
      v2.put("long", v6);
      v2.put("time", v4);
      p0.put("uule", v2);
    }

    private static void a(java.util.HashMap<String, Object> p0, com.google.android.gms.internal.aj p1)
    {
      String v2; // RETVAL
    
      v2 = em.bK();
      if ( v2 != null )
        p0.put("abf", v2);
      if ( p1.b != -1 )
        p0.put("cust_age", a.format(new java.util.Date(p1.b)));
      if ( p1.c != null )
        p0.put("extras", p1.c);
      if ( p1.d != -1 )
        p0.put("cust_gender", Integer.valueOf(p1.d));
      if ( p1.e != null )
        p0.put("kw", p1.e);
      if ( p1.g != -1 )
        p0.put("tag_for_child_directed_treatment", Integer.valueOf(p1.g));
      if ( p1.f )
        p0.put("adtest", "on");
      if ( p1.a >= 2 )
      {
        if ( p1.h )
          p0.put("d_imp_hdr", Integer.valueOf(1));
        if ( !TextUtils.isEmpty(p1.i) )
          p0.put("ppid", p1.i);
        if ( p1.j != null )
          a(p0, p1.j);
      }
      if ( p1.a >= 3 && p1.l != null )
        p0.put("url", p1.l);
    }

    private static void a(java.util.HashMap<String, Object> p0, com.google.android.gms.internal.ax p1)
    {
      String v2;
      String v3;
      v2 = null;
      if ( Color.alpha(p1.b) != 0 )
        p0.put("acolor", o(p1.b));
      if ( Color.alpha(p1.c) != 0 )
        p0.put("bgcolor", o(p1.c));
      if ( Color.alpha(p1.d) != 0 && Color.alpha(p1.e) != 0 )
      {
        p0.put("gradientto", o(p1.d));
        p0.put("gradientfrom", o(p1.e));
      }
      if ( Color.alpha(p1.f) != 0 )
        p0.put("bcolor", o(p1.f));
      p0.put("bthick", Integer.toString(p1.g));
      switch ( p1.h )
      {
        case 0:
          v3 = "none";
          break;
        case 1:
          v3 = "dashed";
          break;
        case 2:
          v3 = "dotted";
          break;
        case 3:
          v3 = "solid";
          break;
        default:
          v3 = null;
          break;
      }
      if ( v3 != null )
        p0.put("btype", v3);
      switch ( p1.i )
      {
        case 0:
          v2 = "light";
          break;
        case 1:
          v2 = "medium";
          break;
        case 2:
          v2 = "dark";
          break;
        default:
          break;
      }
      if ( v2 != null )
        p0.put("callbuttoncolor", v2);
      if ( p1.j != null )
        p0.put("channel", p1.j);
      if ( Color.alpha(p1.k) != 0 )
        p0.put("dcolor", o(p1.k));
      if ( p1.l != null )
        p0.put("font", p1.l);
      if ( Color.alpha(p1.m) != 0 )
        p0.put("hcolor", o(p1.m));
      p0.put("headersize", Integer.toString(p1.n));
      if ( p1.o != null )
        p0.put("q", p1.o);
    }

    private static void a(java.util.HashMap<String, Object> p0, com.google.android.gms.internal.ed p1)
    {
      android.os.Bundle v2;
      android.os.Bundle v3;
      p0.put("am", Integer.valueOf(p1.a));
      p0.put("cog", m(p1.b));
      p0.put("coh", m(p1.c));
      if ( !TextUtils.isEmpty(p1.d) )
        p0.put("carrier", p1.d);
      p0.put("gl", p1.e);
      if ( p1.f )
        p0.put("simulator", Integer.valueOf(1));
      p0.put("ma", m(p1.g));
      p0.put("sp", m(p1.h));
      p0.put("hl", p1.i);
      if ( !TextUtils.isEmpty(p1.j) )
        p0.put("mv", p1.j);
      p0.put("muv", Integer.valueOf(p1.k));
      if ( p1.l != -2 )
        p0.put("cnt", Integer.valueOf(p1.l));
      p0.put("gnt", Integer.valueOf(p1.m));
      p0.put("pt", Integer.valueOf(p1.n));
      p0.put("rm", Integer.valueOf(p1.o));
      p0.put("riv", Integer.valueOf(p1.p));
      p0.put("u_sd", Float.valueOf(p1.q));
      p0.put("sh", Integer.valueOf(p1.s));
      p0.put("sw", Integer.valueOf(p1.r));
      v2 = new android.os.Bundle();
      v2.putInt("active_network_state", p1.w);
      v2.putBoolean("active_network_metered", p1.v);
      p0.put("connectivity", v2);
      v3 = new android.os.Bundle();
      v3.putBoolean("is_charging", p1.u);
      v3.putDouble("battery_level", p1.t);
      p0.put("battery", v3);
    }

    private static Integer m(boolean p0)
    {
      return Integer.valueOf(com.gameloft.android.DecompRT.b2i(p0));
    }

    private static String o(int p0)
    {
      Object[] v1;
      v1 = new Object[1];
      v1[0] = Integer.valueOf(p0 & 0xFFFFFF);
      return String.format(Locale.US, "#%06x", v1);
    }

}
