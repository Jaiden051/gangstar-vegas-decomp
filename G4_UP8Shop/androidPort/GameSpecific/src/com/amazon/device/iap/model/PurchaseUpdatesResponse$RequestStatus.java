// Decompiled from classes.dex (SourceFile: PurchaseUpdatesResponse$RequestStatus.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class PurchaseUpdatesResponse$RequestStatus extends com.gameloft.android.DecompRT.EnumBase<PurchaseUpdatesResponse$RequestStatus> {
    // Fields
    private static final com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus[] $VALUES;
    public static final com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus FAILED;
    public static final com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus NOT_SUPPORTED;
    public static final com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus SUCCESSFUL;

    // Methods
    static
    {
      com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus[] v0;
      SUCCESSFUL = new com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus("SUCCESSFUL", 0);
      FAILED = new com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus("FAILED", 1);
      NOT_SUPPORTED = new com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus("NOT_SUPPORTED", 2);
      v0 = new com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus[3];
      v0[0] = SUCCESSFUL;
      v0[1] = FAILED;
      v0[2] = NOT_SUPPORTED;
      $VALUES = (com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus[])v0;
    }

    private PurchaseUpdatesResponse$RequestStatus(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus valueOf(
            String p0)
    {
      return (com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                                  com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus.class,
                                                                                  p0);
    }

    public static com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus[] values()
    {
      return (com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus[])$VALUES.clone();
    }

}
