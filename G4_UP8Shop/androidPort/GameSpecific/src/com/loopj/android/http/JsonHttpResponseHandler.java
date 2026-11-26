// Decompiled from classes.dex (SourceFile: JsonHttpResponseHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

public final class JsonHttpResponseHandler extends com.loopj.android.http.AsyncHttpResponseHandler {
    // Fields
    protected static int e;

    // Methods
    public JsonHttpResponseHandler()
    {
      super();
    }

    private void a(org.json.JSONArray p0)
    {
      ;
    }

    private void a(org.json.JSONObject p0)
    {
      ;
    }

    private void b(int p0, Object p1)
    {
      if ( !(p1 instanceof org.json.JSONObject) && !(p1 instanceof org.json.JSONArray) )
        new org.json.JSONException("Unexpected type " + p1.getClass().getName());
    }

    private static void onFailure$496443a()
    {
      ;
    }

    private static void onFailure$759ccde2()
    {
      ;
    }

    private static void onSuccess$41803e97()
    {
      ;
    }

    private static void onSuccess$48551f8f()
    {
      ;
    }

    private static Object parseResponse(String p0)
 throws org.json.JSONException {
      Object Value;
      String v2;
      Value = null;
      v2 = p0.trim();
      if ( v2.startsWith("{") || v2.startsWith("[") )
        Value = new org.json.JSONTokener(v2).nextValue();
      if ( Value != null )
        return Value;
      return v2;
    }

    protected final void a(int p0, String p1)
    {
      Object v3;
      Object[] v4;
      Object[] v6;
      if ( p0 == 204 )
      {
        v6 = new Object[2];
        v6[0] = Integer.valueOf(204);
        v6[1] = new org.json.JSONObject();
        this.b(this.a(100, v6));
        return;
      }
      try
      {
        v3 = parseResponse(p1);
        v4 = new Object[2];
        v4[0] = Integer.valueOf(p0);
        v4[1] = v3;
        this.b(this.a(100, v4));
      }
      catch ( org.json.JSONException v5 )
      {
        this.b(v5, p1);
      }
    }

    protected final void a(android.os.Message p0)
    {
      Object[] v2;
      Object v3;
      if ( p0.what == 100 )
      {
        v2 = (Object[])p0.obj;
        ((Integer)v2[0]).intValue();
        v3 = v2[1];
        if ( !(v3 instanceof org.json.JSONObject) && !(v3 instanceof org.json.JSONArray) )
          new org.json.JSONException("Unexpected type " + v3.getClass().getName());
      }
      else
      {
        super.a(p0);
      }
    }

    protected final void c(Throwable p0, String p1)
    {
      Object v3; // RETVAL
    
      if ( p1 == null )
      {
        this.a(p0, "");
        return;
      }
      try
      {
        v3 = parseResponse(p1);
        if ( !(v3 instanceof org.json.JSONObject) && !(v3 instanceof org.json.JSONArray) )
          this.a(p0, p1);
      }
      catch ( org.json.JSONException e )
      {
        this.a(p0, p1);
      }
    }

}
