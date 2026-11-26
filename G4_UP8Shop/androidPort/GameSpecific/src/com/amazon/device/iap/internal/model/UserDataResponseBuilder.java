// Decompiled from classes.dex (SourceFile: UserDataResponseBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.model;

public class UserDataResponseBuilder {
    // Fields
    private com.amazon.device.iap.model.RequestId requestId;
    private com.amazon.device.iap.model.UserDataResponse$RequestStatus requestStatus;
    private com.amazon.device.iap.model.UserData userData;

    // Methods
    public UserDataResponseBuilder()
    {
      super();
    }

    public com.amazon.device.iap.model.UserDataResponse build()
    {
      return new com.amazon.device.iap.model.UserDataResponse(this);
    }

    public com.amazon.device.iap.model.RequestId getRequestId()
    {
      return this.requestId;
    }

    public com.amazon.device.iap.model.UserDataResponse$RequestStatus getRequestStatus()
    {
      return this.requestStatus;
    }

    public com.amazon.device.iap.model.UserData getUserData()
    {
      return this.userData;
    }

    public com.amazon.device.iap.internal.model.UserDataResponseBuilder setRequestId(
            com.amazon.device.iap.model.RequestId p0)
    {
      this.requestId = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.UserDataResponseBuilder setRequestStatus(
            com.amazon.device.iap.model.UserDataResponse$RequestStatus p0)
    {
      this.requestStatus = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.UserDataResponseBuilder setUserData(
            com.amazon.device.iap.model.UserData p0)
    {
      this.userData = p0;
      return this;
    }

}
