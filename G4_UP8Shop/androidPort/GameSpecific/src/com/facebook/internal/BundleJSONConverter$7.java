// Decompiled from classes.dex (SourceFile: BundleJSONConverter$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class BundleJSONConverter$7 implements com.facebook.internal.BundleJSONConverter$Setter {
    // Methods
    BundleJSONConverter$7()
    {
      super();
    }

    public final void setOnBundle(android.os.Bundle p0, String p1, Object p2)
 throws org.json.JSONException {
      org.json.JSONArray v4;
      java.util.ArrayList v5;
      int i;
      Object v7; // RETVAL
    
      v4 = (org.json.JSONArray)p2;
      v5 = new java.util.ArrayList();
      if ( v4.length() != 0 )
      {
        for ( i = 0; i < v4.length(); ++i )
        {
          v7 = v4.get(i);
          if ( !(v7 instanceof String) )
            throw new IllegalArgumentException("Unexpected type in an array: " + v7.getClass());
          v5.add((String)v7);
        }
      }
      p0.putStringArrayList(p1, v5);
    }

    public final void setOnJSON(org.json.JSONObject p0, String p1, Object p2)
    {
      throw new IllegalArgumentException("JSONArray's are not supported in bundles.");
    }

}
