// Decompiled from classes.dex (SourceFile: OpenSearchPageRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class OpenSearchPageRequest extends com.amazon.device.associates.OpenRetailPageRequest {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private com.amazon.device.associates.SortType d;

    // Methods
    public OpenSearchPageRequest(String p0)
    {
      super();
      an.a(p0, "searchTerm");
      this.a = p0;
    }

    public OpenSearchPageRequest(String p0, String p1)
    {
      super();
      an.a(p1, "searchTerm");
      an.a(p0, "category");
      this.b = p0;
      this.a = p1;
    }

    public String getBrand()
    {
      return this.c;
    }

    public String getCategory()
    {
      return this.b;
    }

    public String getSearchTerm()
    {
      return this.a;
    }

    public com.amazon.device.associates.SortType getSortType()
    {
      return this.d;
    }

    public void setBrand(String p0)
    {
      this.c = p0;
    }

    public void setSortType(com.amazon.device.associates.SortType p0)
    {
      this.d = p0;
    }

}
