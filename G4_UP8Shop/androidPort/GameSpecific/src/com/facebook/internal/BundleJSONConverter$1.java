// Decompiled from classes.dex (SourceFile: BundleJSONConverter$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class BundleJSONConverter$1 implements com.facebook.internal.BundleJSONConverter$Setter {
    // Methods
    BundleJSONConverter$1()
    {
      super();
    }

    public final void setOnBundle(android.os.Bundle p0, String p1, Object p2)
    {
      p0.putBoolean(p1, ((Boolean)p2).booleanValue());
    }

    public final void setOnJSON(org.json.JSONObject p0, String p1, Object p2)
 throws org.json.JSONException {
      p0.put(p1, p2);
    }

}
