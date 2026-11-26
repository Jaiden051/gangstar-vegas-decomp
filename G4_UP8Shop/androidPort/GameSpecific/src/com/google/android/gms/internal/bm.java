// Decompiled from classes.dex (SourceFile: bm.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Collections;
public final class bm {
    // Fields
    public final java.lang.String a;
    public final java.lang.String b;
    public final java.util.List c;
    public final java.lang.String d;
    public final java.lang.String e;
    public final java.util.List f;
    public final java.lang.String g;

    // Methods
    public bm(org.json.JSONObject p0)
 throws org.json.JSONException {
      super();
      String v2;
      org.json.JSONArray JSONArray;
      java.util.List v4;
      int i;
      org.json.JSONObject v6; // RETVAL
      String v7;
      org.json.JSONObject v8; // RETVAL
      org.json.JSONObject v9;
      String v10;
      v2 = null;
      this.b = p0.getString("id");
      JSONArray = p0.getJSONArray("adapters");
      v4 = new java.util.ArrayList(JSONArray.length());
      for ( i = 0; i < JSONArray.length(); ++i )
        v4.add(JSONArray.getString(i));
      this.c = Collections.unmodifiableList(v4);
      this.d = p0.optString("allocation_id", null);
      this.f = bs.a(p0, "imp_urls");
      v6 = p0.optJSONObject("ad");
      if ( v6 != null )
        v7 = v6.toString();
      else
        v7 = null;
      this.a = v7;
      v8 = p0.optJSONObject("data");
      v9 = v8;
      if ( v8 != null )
        v10 = v8.toString();
      else
        v10 = null;
      this.g = v10;
      if ( v9 != null )
        v2 = v9.optString("class_name");
      this.e = v2;
    
    }

}
