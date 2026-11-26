// Decompiled from classes.dex (SourceFile: BundleJSONConverter$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class BundleJSONConverter$5 implements com.facebook.internal.BundleJSONConverter$Setter {
    // Methods
    BundleJSONConverter$5()
    {
      super();
    }

    public final void setOnBundle(android.os.Bundle p0, String p1, Object p2)
    {
      p0.putString(p1, (String)p2);
    }

    public final void setOnJSON(org.json.JSONObject p0, String p1, Object p2)
 throws org.json.JSONException {
      p0.put(p1, p2);
    }

}
