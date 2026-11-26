// Decompiled from classes.dex (SourceFile: PurchaseUpdatesResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

import java.util.Arrays;
public final class PurchaseUpdatesResponse {
    // Fields
    private static java.lang.String HAS_MORE;
    private static java.lang.String RECEIPTS;
    private static java.lang.String REQUEST_ID;
    private static java.lang.String REQUEST_STATUS;
    private static java.lang.String TO_STRING_FORMAT;
    private static java.lang.String USER_DATA;
    private final boolean hasMore;
    private final java.util.List receipts;
    private final com.amazon.device.iap.model.RequestId requestId;
    private final com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus requestStatus;
    private final com.amazon.device.iap.model.UserData userData;

    // Methods
    public PurchaseUpdatesResponse(com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder p0)
    {
      super();
      java.util.List Receipts;
      com.amazon.device.iap.internal.util.d.a(p0.getRequestId(), "requestId");
      com.amazon.device.iap.internal.util.d.a(p0.getRequestStatus(), "requestStatus");
      if ( PurchaseUpdatesResponse$RequestStatus.SUCCESSFUL == p0.getRequestStatus() )
      {
        com.amazon.device.iap.internal.util.d.a(p0.getUserData(), "userData");
        com.amazon.device.iap.internal.util.d.a(p0.getReceipts(), "receipts");
      }
      this.requestId = p0.getRequestId();
      this.requestStatus = p0.getRequestStatus();
      this.userData = p0.getUserData();
      if ( p0.getReceipts() != null )
        Receipts = p0.getReceipts();
      else
        Receipts = new java.util.ArrayList();
      this.receipts = Receipts;
      this.hasMore = p0.hasMore();
    
    }

    public final java.util.List<com.amazon.device.iap.model.Receipt> getReceipts()
    {
      return this.receipts;
    }

    public final com.amazon.device.iap.model.RequestId getRequestId()
    {
      return this.requestId;
    }

    public final com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus getRequestStatus()
    {
      return this.requestStatus;
    }

    public final com.amazon.device.iap.model.UserData getUserData()
    {
      return this.userData;
    }

    public final boolean hasMore()
    {
      return this.hasMore;
    }

    public final org.json.JSONObject toJSON()
 throws org.json.JSONException {
      org.json.JSONObject v1;
      Object v2;
      org.json.JSONArray v3;
      java.util.Iterator i;
      v1 = new org.json.JSONObject();
      v1.put("REQUEST_ID", this.requestId);
      v1.put("REQUEST_STATUS", this.requestStatus);
      if ( this.userData != null )
        v2 = this.userData.toJSON();
      else
        v2 = "";
      v1.put("USER_DATA", v2);
      v3 = new org.json.JSONArray();
      if ( this.receipts != null )
      {
        for ( i = this.receipts.iterator(); i.hasNext(); v3.put(((com.amazon.device.iap.model.Receipt)i.next()).toJSON()) )
          ;
      }
      v1.put("RECEIPTS", v3);
      v1.put("HAS_MORE", this.hasMore);
      return v1;
    }

    public final String toString()
    {
      Object[] v1;
      String v2;
      v1 = new Object[6];
      v1[0] = super.toString();
      v1[1] = this.requestId;
      v1[2] = this.requestStatus;
      v1[3] = this.userData;
      if ( this.receipts != null )
        v2 = Arrays.toString(this.receipts.toArray());
      else
        v2 = "null";
      v1[4] = v2;
      v1[5] = Boolean.valueOf(this.hasMore);
      return String.format(
               "(%s, requestId: \"%s\", requestStatus: \"%s\", userData: \"%s\", receipts: %s, hasMore: \"%b\")",
               v1);
    }

}
