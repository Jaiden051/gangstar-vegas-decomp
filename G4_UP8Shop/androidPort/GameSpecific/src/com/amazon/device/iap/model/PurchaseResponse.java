// Decompiled from classes.dex (SourceFile: PurchaseResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class PurchaseResponse {
    // Fields
    private static java.lang.String RECEIPT;
    private static java.lang.String REQUEST_ID;
    private static java.lang.String REQUEST_STATUS;
    private static java.lang.String TO_STRING_FORMAT;
    private static java.lang.String USER_DATA;
    private final com.amazon.device.iap.model.Receipt receipt;
    private final com.amazon.device.iap.model.RequestId requestId;
    private final com.amazon.device.iap.model.PurchaseResponse$RequestStatus requestStatus;
    private final com.amazon.device.iap.model.UserData userData;

    // Methods
    public PurchaseResponse(com.amazon.device.iap.internal.model.PurchaseResponseBuilder p0)
    {
      super();
      com.amazon.device.iap.internal.util.d.a(p0.getRequestId(), "requestId");
      com.amazon.device.iap.internal.util.d.a(p0.getRequestStatus(), "requestStatus");
      if ( p0.getRequestStatus() == PurchaseResponse$RequestStatus.SUCCESSFUL )
      {
        com.amazon.device.iap.internal.util.d.a(p0.getReceipt(), "receipt");
        com.amazon.device.iap.internal.util.d.a(p0.getUserData(), "userData");
      }
      this.requestId = p0.getRequestId();
      this.userData = p0.getUserData();
      this.receipt = p0.getReceipt();
      this.requestStatus = p0.getRequestStatus();
    }

    public final com.amazon.device.iap.model.Receipt getReceipt()
    {
      return this.receipt;
    }

    public final com.amazon.device.iap.model.RequestId getRequestId()
    {
      return this.requestId;
    }

    public final com.amazon.device.iap.model.PurchaseResponse$RequestStatus getRequestStatus()
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
      Object v3;
      v1 = new org.json.JSONObject();
      v1.put("requestId", this.requestId);
      v1.put("requestStatus", this.requestStatus);
      if ( this.userData != null )
        v2 = this.userData.toJSON();
      else
        v2 = "";
      v1.put("userData", v2);
      if ( this.getReceipt() != null )
        v3 = this.getReceipt().toJSON();
      else
        v3 = "";
      v1.put("receipt", v3);
      return v1;
    }

    public final String toString()
    {
      Object[] v1;
      String v2;
      v1 = new Object[5];
      v1[0] = super.toString();
      v1[1] = this.requestId;
      if ( this.requestStatus != null )
        v2 = this.requestStatus.toString();
      else
        v2 = "null";
      v1[2] = v2;
      v1[3] = this.userData;
      v1[4] = this.receipt;
      return String.format("(%s, requestId: \"%s\", purchaseRequestStatus: \"%s\", userId: \"%s\", receipt: %s)", v1);
    }

}
