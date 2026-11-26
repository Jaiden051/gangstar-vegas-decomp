// Decompiled from classes.dex (SourceFile: BundleJSONConverter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import org.json.JSONObject;
public class BundleJSONConverter {
    // Fields
    private static final java.util.Map SETTERS;

    // Methods
    static
    {
      java.util.HashMap v0;
      v0 = new java.util.HashMap();
      SETTERS = v0;
      v0.put(Boolean.class, new com.facebook.internal.BundleJSONConverter$1());
      SETTERS.put(Integer.class, new com.facebook.internal.BundleJSONConverter$2());
      SETTERS.put(Long.class, new com.facebook.internal.BundleJSONConverter$3());
      SETTERS.put(Double.class, new com.facebook.internal.BundleJSONConverter$4());
      SETTERS.put(String.class, new com.facebook.internal.BundleJSONConverter$5());
      SETTERS.put(String[].class, new com.facebook.internal.BundleJSONConverter$6());
      SETTERS.put(org.json.JSONArray.class, new com.facebook.internal.BundleJSONConverter$7());
    }

    public BundleJSONConverter()
    {
      super();
    }

    public static android.os.Bundle convertToBundle(org.json.JSONObject p0)
 throws org.json.JSONException {
      android.os.Bundle v1;
      java.util.Iterator v2;
      String v3;
      Object v4; // RETVAL
      Object v5;
      com.facebook.internal.BundleJSONConverter$Setter v6;
      v1 = new android.os.Bundle();
      v2 = p0.keys();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v4 = p0.get(v3);
        v5 = v4;
        if ( v4 != null && v4 != JSONObject.NULL )
        {
          if ( v4 instanceof org.json.JSONObject )
          {
            v1.putBundle(v3, BundleJSONConverter.convertToBundle((org.json.JSONObject)v4));
          }
          else
          {
            v6 = (com.facebook.internal.BundleJSONConverter$Setter)SETTERS.get(v4.getClass());
            if ( v6 == null )
              throw new IllegalArgumentException("Unsupported type: " + v5.getClass());
            v6.setOnBundle(v1, v3, v5);
          }
        }
      }
      return v1;
    }

    public static org.json.JSONObject convertToJSON(android.os.Bundle p0)
 throws org.json.JSONException {
      org.json.JSONObject v1;
      java.util.Iterator v2;
      String v3;
      Object v4; // RETVAL
      Object v5;
      org.json.JSONArray v6;
      java.util.Iterator i;
      com.facebook.internal.BundleJSONConverter$Setter v8;
      v1 = new org.json.JSONObject();
      v2 = p0.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v4 = p0.get(v3);
        v5 = v4;
        if ( v4 != null )
        {
          if ( v4 instanceof java.util.List )
          {
            v6 = new org.json.JSONArray();
            for ( i = ((java.util.List)v4).iterator(); i.hasNext(); v6.put((String)i.next()) )
              ;
            v1.put(v3, v6);
          }
          else if ( v4 instanceof android.os.Bundle )
          {
            v1.put(v3, BundleJSONConverter.convertToJSON((android.os.Bundle)v4));
          }
          else
          {
            v8 = (com.facebook.internal.BundleJSONConverter$Setter)SETTERS.get(v4.getClass());
            if ( v8 == null )
              throw new IllegalArgumentException("Unsupported type: " + v5.getClass());
            v8.setOnJSON(v1, v3, v5);
          }
        }
      }
      return v1;
    }

}
