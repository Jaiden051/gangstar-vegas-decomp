// Decompiled from classes.dex (SourceFile: PurchaseResponse$RequestStatus.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class PurchaseResponse$RequestStatus extends com.gameloft.android.DecompRT.EnumBase<PurchaseResponse$RequestStatus> {
    // Fields
    private static final com.amazon.device.iap.model.PurchaseResponse$RequestStatus[] $VALUES;
    public static final com.amazon.device.iap.model.PurchaseResponse$RequestStatus ALREADY_PURCHASED;
    public static final com.amazon.device.iap.model.PurchaseResponse$RequestStatus FAILED;
    public static final com.amazon.device.iap.model.PurchaseResponse$RequestStatus INVALID_SKU;
    public static final com.amazon.device.iap.model.PurchaseResponse$RequestStatus NOT_SUPPORTED;
    public static final com.amazon.device.iap.model.PurchaseResponse$RequestStatus SUCCESSFUL;

    // Methods
    static
    {
      com.amazon.device.iap.model.PurchaseResponse$RequestStatus[] v0;
      SUCCESSFUL = new com.amazon.device.iap.model.PurchaseResponse$RequestStatus("SUCCESSFUL", 0);
      FAILED = new com.amazon.device.iap.model.PurchaseResponse$RequestStatus("FAILED", 1);
      INVALID_SKU = new com.amazon.device.iap.model.PurchaseResponse$RequestStatus("INVALID_SKU", 2);
      ALREADY_PURCHASED = new com.amazon.device.iap.model.PurchaseResponse$RequestStatus("ALREADY_PURCHASED", 3);
      NOT_SUPPORTED = new com.amazon.device.iap.model.PurchaseResponse$RequestStatus("NOT_SUPPORTED", 4);
      v0 = new com.amazon.device.iap.model.PurchaseResponse$RequestStatus[5];
      v0[0] = SUCCESSFUL;
      v0[1] = FAILED;
      v0[2] = INVALID_SKU;
      v0[3] = ALREADY_PURCHASED;
      v0[4] = NOT_SUPPORTED;
      $VALUES = (com.amazon.device.iap.model.PurchaseResponse$RequestStatus[])v0;
    }

    private PurchaseResponse$RequestStatus(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.iap.model.PurchaseResponse$RequestStatus safeValueOf(
            String p0)
    {
      if ( com.amazon.device.iap.internal.util.d.a(p0) )
        return null;
      if ( "ALREADY_ENTITLED".equalsIgnoreCase(p0) )
        return ALREADY_PURCHASED;
      return valueOf(p0.toUpperCase());
    }

    public static com.amazon.device.iap.model.PurchaseResponse$RequestStatus valueOf(
            String p0)
    {
      return (com.amazon.device.iap.model.PurchaseResponse$RequestStatus)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                           com.amazon.device.iap.model.PurchaseResponse$RequestStatus.class,
                                                                           p0);
    }

    public static com.amazon.device.iap.model.PurchaseResponse$RequestStatus[] values()
    {
      return (com.amazon.device.iap.model.PurchaseResponse$RequestStatus[])$VALUES.clone();
    }

}
