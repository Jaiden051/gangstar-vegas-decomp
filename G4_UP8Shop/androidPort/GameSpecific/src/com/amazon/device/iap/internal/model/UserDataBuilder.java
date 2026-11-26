// Decompiled from classes.dex (SourceFile: UserDataBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.model;

public class UserDataBuilder {
    // Fields
    private java.lang.String marketplace;
    private java.lang.String userId;

    // Methods
    public UserDataBuilder()
    {
      super();
    }

    public com.amazon.device.iap.model.UserData build()
    {
      return new com.amazon.device.iap.model.UserData(this);
    }

    public String getMarketplace()
    {
      return this.marketplace;
    }

    public String getUserId()
    {
      return this.userId;
    }

    public com.amazon.device.iap.internal.model.UserDataBuilder setMarketplace(String p0)
    {
      this.marketplace = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.UserDataBuilder setUserId(String p0)
    {
      this.userId = p0;
      return this;
    }

}
