// Decompiled from classes.dex (SourceFile: BundleJSONConverter$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class BundleJSONConverter$6 implements com.facebook.internal.BundleJSONConverter$Setter {
    // Methods
    BundleJSONConverter$6()
    {
      super();
    }

    public final void setOnBundle(android.os.Bundle p0, String p1, Object p2)
    {
      throw new IllegalArgumentException("Unexpected type from JSON");
    }

    public final void setOnJSON(org.json.JSONObject p0, String p1, Object p2)
 throws org.json.JSONException {
      org.json.JSONArray v4;
      String[] v5;
      int v6;
      int i;
      v4 = new org.json.JSONArray();
      v5 = (String[])p2;
      v6 = v5.length;
      for ( i = 0; i < v6; ++i )
        v4.put(v5[i]);
      p0.put(p1, v4);
    }

}
