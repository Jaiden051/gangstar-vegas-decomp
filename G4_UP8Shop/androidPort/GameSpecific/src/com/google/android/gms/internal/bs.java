// Decompiled from classes.dex (SourceFile: bs.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Collections;
public final class bs {
    // Methods
    public static java.util.List<String> a(org.json.JSONObject p0, String p1)
 throws org.json.JSONException {
      org.json.JSONArray v2; // RETVAL
      org.json.JSONArray v3;
      java.util.List v4;
      int i;
      v2 = p0.optJSONArray(p1);
      v3 = v2;
      if ( v2 == null )
        return null;
      v4 = new java.util.ArrayList(v2.length());
      for ( i = 0; i < v3.length(); ++i )
        v4.add(v3.getString(i));
      return Collections.unmodifiableList(v4);
    }

    public static void a(
            android.content.Context p0,
            String p1,
            com.google.android.gms.internal.eg p2,
            String p3,
            boolean p4,
            java.util.List<String> p5)
    {
      String v6;
      java.util.Iterator v7;
      String v8; // RETVAL
      String v9;
      if ( p4 )
        v6 = "1";
      else
        v6 = "0";
      v7 = p5.iterator();
      while ( v7.hasNext() )
      {
        v8 = ((String)v7.next()).replaceAll("@gw_adlocid@", p3).replaceAll("@gw_adnetrefresh@", v6).replaceAll("@gw_qdata@", p2.o.f).replaceAll("@gw_sdkver@", p1).replaceAll("@gw_sessid@", ei.a).replaceAll("@gw_seqnum@", p2.i);
        v9 = v8;
        if ( p2.l != null )
          v9 = v8.replaceAll("@gw_adnetid@", p2.l.b).replaceAll("@gw_allocid@", p2.l.d);
        new com.google.android.gms.internal.et(p0, p1, v9).e();
      }
    }

}
