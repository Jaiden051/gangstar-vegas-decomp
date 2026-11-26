// Decompiled from classes.dex (SourceFile: ba.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import org.json.JSONObject;
class ba {
    // Methods
    public static com.google.android.gms.tagmanager.cq$c bY(String p0)
 throws org.json.JSONException {
      com.google.android.gms.internal.d$a v1;
      com.google.android.gms.tagmanager.cq$d v2;
      int i;
      v1 = k(new org.json.JSONObject(p0));
      v2 = cq$c.mm();
      for ( i = 0; i < v1.d.length; ++i )
        v2.a(cq$a.mi().a(com.google.android.gms.internal.b.aN.toString(), v1.d[i]).a(com.google.android.gms.internal.b.aC.toString(), dh.cp(m.lf())).a(m.lg(), v1.e[i]).a());
      return v2.a();
    }

    private static com.google.android.gms.internal.d$a k(Object p0)
 throws org.json.JSONException {
      return dh.r(l(p0));
    }

    static Object l(Object p0)
 throws org.json.JSONException {
      org.json.JSONObject v1;
      java.util.Map v2;
      java.util.Iterator v3;
      String v4;
      if ( p0 instanceof org.json.JSONArray )
        throw new RuntimeException("JSONArrays are not supported");
      if ( JSONObject.NULL.equals(p0) )
        throw new RuntimeException("JSON nulls are not supported");
      if ( p0 instanceof org.json.JSONObject )
      {
        v1 = (org.json.JSONObject)p0;
        v2 = new java.util.HashMap();
        v3 = v1.keys();
        while ( v3.hasNext() )
        {
          v4 = (String)v3.next();
          v2.put(v4, ba.l(v1.get(v4)));
        }
        return v2;
      }
      return p0;
    }

}
