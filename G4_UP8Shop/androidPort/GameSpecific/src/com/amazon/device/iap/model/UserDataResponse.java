// Decompiled from classes.dex (SourceFile: UserDataResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class UserDataResponse {
    // Fields
    private static java.lang.String REQUEST_ID;
    private static java.lang.String REQUEST_STATUS;
    private static java.lang.String TO_STRING_FORMAT;
    private static java.lang.String USER_DATA;
    private final com.amazon.device.iap.model.RequestId requestId;
    private final com.amazon.device.iap.model.UserDataResponse$RequestStatus requestStatus;
    private final com.amazon.device.iap.model.UserData userData;

    // Methods
    public UserDataResponse(com.amazon.device.iap.internal.model.UserDataResponseBuilder p0)
    {
      super();
      com.amazon.device.iap.internal.util.d.a(p0.getRequestId(), "requestId");
      com.amazon.device.iap.internal.util.d.a(p0.getRequestStatus(), "requestStatus");
      this.requestId = p0.getRequestId();
      this.requestStatus = p0.getRequestStatus();
      this.userData = p0.getUserData();
    }

    public final com.amazon.device.iap.model.RequestId getRequestId()
    {
      return this.requestId;
    }

    public final com.amazon.device.iap.model.UserDataResponse$RequestStatus getRequestStatus()
    {
      return this.requestStatus;
    }

    public final com.amazon.device.iap.model.UserData getUserData()
    {
      return this.userData;
    }

    public final org.json.JSONObject toJSON()
 throws org.json.JSONException {
      org.json.JSONObject v1;
      Object v2;
      v1 = new org.json.JSONObject();
      v1.put("REQUEST_ID", this.requestId);
      v1.put("REQUEST_STATUS", this.requestStatus);
      if ( this.userData != null )
        v2 = this.userData.toJSON();
      else
        v2 = "";
      v1.put("USER_DATA", v2);
      return v1;
    }

    public final String toString()
    {
      Object[] v1;
      String v2;
      String v3;
      v1 = new Object[4];
      v1[0] = super.toString();
      v1[1] = this.requestId;
      if ( this.requestStatus != null )
        v2 = this.requestStatus.toString();
      else
        v2 = "null";
      v1[2] = v2;
      if ( this.userData != null )
        v3 = this.userData.toString();
      else
        v3 = "null";
      v1[3] = v3;
      return String.format("(%s, requestId: \"%s\", requestStatus: \"%s\", userData: \"%s\")", v1);
    }

}
