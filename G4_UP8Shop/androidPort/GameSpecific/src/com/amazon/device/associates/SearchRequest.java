// Decompiled from classes.dex (SourceFile: SearchRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.util.Collections;
public class SearchRequest extends com.amazon.device.associates.ShoppingServiceRequest {
    // Fields
    private final java.lang.String a;
    private final java.lang.String b;
    private final java.util.Map c;
    private com.amazon.device.associates.SortType d;
    private final int e;

    // Methods
    public SearchRequest(String p0, String p1)
    {
      this(p0, p1, 1);
    }

    public SearchRequest(String p0, String p1, int p2)
    {
      super();
      this.c = new java.util.HashMap();
      an.a(p0, "category");
      an.a(p1, "searchTerm");
      an.a(p2, "page");
      this.a = p0;
      this.b = p1;
      this.d = SortType.RELEVANCE;
      this.e = p2;
    }

    org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      org.json.JSONObject v2;
      java.util.Iterator v3;
      com.amazon.device.associates.FilterType v4;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("category", this.a);
        v1.put("searchTerm", this.b);
        v2 = new org.json.JSONObject();
        v3 = this.c.keySet().iterator();
        while ( v3.hasNext() )
        {
          v4 = (com.amazon.device.associates.FilterType)v3.next();
          v2.put(v4.toString(), this.c.get(v4));
        }
        v1.put("filters", v2);
        v1.put("sortType", this.d.toString());
        v1.put("page", this.e);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public void addFilter(com.amazon.device.associates.FilterType p0, String p1)
    {
      this.c.put(p0, p1);
    }

    public String getCategory()
    {
      return this.a;
    }

    public java.util.Map<com.amazon.device.associates.FilterType, String> getFilters()
    {
      return Collections.unmodifiableMap(this.c);
    }

    public int getPage()
    {
      return this.e;
    }

    public String getSearchTerm()
    {
      return this.b;
    }

    public com.amazon.device.associates.SortType getSortType()
    {
      return this.d;
    }

    public void removeFilter(com.amazon.device.associates.FilterType p0)
    {
      this.c.remove(p0);
    }

    public void setSortType(com.amazon.device.associates.SortType p0)
    {
      this.d = p0;
    }

    public String toString()
    {
      String v1;
      v1 = null;
      try
      {
        return this.a().toString(4);
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

}
