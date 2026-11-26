// Decompiled from classes.dex (SourceFile: ShoppingServiceResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public abstract class ShoppingServiceResponse {
    // Fields
    private final com.amazon.device.associates.RequestId a;

    // Methods
    ShoppingServiceResponse(com.amazon.device.associates.RequestId p0)
    {
      super();
      an.a(p0, "requestId");
      this.a = p0;
    }

    protected abstract boolean a();

    public com.amazon.device.associates.RequestId getRequestId()
    {
      return this.a;
    }

}
