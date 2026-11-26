// Decompiled from classes.dex (SourceFile: BundleJSONConverter$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class BundleJSONConverter$3 implements com.facebook.internal.BundleJSONConverter$Setter {
    // Methods
    BundleJSONConverter$3()
    {
      super();
    }

    public final void setOnBundle(android.os.Bundle p0, String p1, Object p2)
    {
      p0.putLong(p1, ((Long)p2).longValue());
    }

    public final void setOnJSON(org.json.JSONObject p0, String p1, Object p2)
 throws org.json.JSONException {
      p0.put(p1, p2);
    }

}
