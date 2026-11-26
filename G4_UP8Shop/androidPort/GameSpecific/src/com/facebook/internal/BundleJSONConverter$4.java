// Decompiled from classes.dex (SourceFile: BundleJSONConverter$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class BundleJSONConverter$4 implements com.facebook.internal.BundleJSONConverter$Setter {
    // Methods
    BundleJSONConverter$4()
    {
      super();
    }

    public final void setOnBundle(android.os.Bundle p0, String p1, Object p2)
    {
      p0.putDouble(p1, ((Double)p2).doubleValue());
    }

    public final void setOnJSON(org.json.JSONObject p0, String p1, Object p2)
 throws org.json.JSONException {
      p0.put(p1, p2);
    }

}
