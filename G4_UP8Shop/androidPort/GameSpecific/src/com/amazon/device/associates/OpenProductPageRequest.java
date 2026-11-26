// Decompiled from classes.dex (SourceFile: OpenProductPageRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class OpenProductPageRequest extends com.amazon.device.associates.OpenRetailPageRequest {
    // Fields
    private java.lang.String a;

    // Methods
    public OpenProductPageRequest(String p0)
    {
      super();
      an.a(p0, "productId");
      this.a = p0;
    }

    public String getProductId()
    {
      return this.a;
    }

}
