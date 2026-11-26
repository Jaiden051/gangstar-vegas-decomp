// Decompiled from classes.dex (SourceFile: JsonUtil.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

class JsonUtil {
    // Methods
    JsonUtil()
    {
      super();
    }

    static void jsonObjectClear(org.json.JSONObject p0)
    {
      java.util.Iterator i;
      for ( i = p0.keys(); i.hasNext(); i.remove() )
        i.next();
    }

    static boolean jsonObjectContainsValue(org.json.JSONObject p0, Object p1)
    {
      java.util.Iterator v2;
      Object v3; // RETVAL
    
      v2 = p0.keys();
      while ( v2.hasNext() )
      {
        v3 = p0.opt((String)v2.next());
        if ( v3 != null && v3.equals(p1) )
          return true;
      }
      return false;
    }

    static java.util.Set<java.util.Map.Entry<String, Object>> jsonObjectEntrySet(org.json.JSONObject p0)
    {
      java.util.HashSet v1;
      java.util.Iterator v2;
      String v3;
      v1 = new java.util.HashSet();
      v2 = p0.keys();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v1.add(new com.facebook.model.JsonUtil$JSONObjectEntry(v3, p0.opt(v3)));
      }
      return v1;
    }

    static java.util.Set<String> jsonObjectKeySet(org.json.JSONObject p0)
    {
      java.util.HashSet v1;
      java.util.Iterator i;
      v1 = new java.util.HashSet();
      for ( i = p0.keys(); i.hasNext(); v1.add(i.next()) )
        ;
      return v1;
    }

    static void jsonObjectPutAll(org.json.JSONObject p0, java.util.Map<String, Object> p1)
    {
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      v2 = p1.entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        try
        {
          p0.putOpt((String)v3.getKey(), v3.getValue());
        }
        catch ( org.json.JSONException v4 )
        {
          throw new IllegalArgumentException(v4);
        }
      }
    }

    static java.util.Collection<Object> jsonObjectValues(org.json.JSONObject p0)
    {
      java.util.ArrayList v1;
      java.util.Iterator i;
      v1 = new java.util.ArrayList();
      for ( i = p0.keys(); i.hasNext(); v1.add(p0.opt((String)i.next())) )
        ;
      return v1;
    }

}
