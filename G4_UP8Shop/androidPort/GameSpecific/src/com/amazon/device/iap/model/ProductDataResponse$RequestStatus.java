// Decompiled from classes.dex (SourceFile: ProductDataResponse$RequestStatus.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class ProductDataResponse$RequestStatus extends com.gameloft.android.DecompRT.EnumBase<ProductDataResponse$RequestStatus> {
    // Fields
    private static final com.amazon.device.iap.model.ProductDataResponse$RequestStatus[] $VALUES;
    public static final com.amazon.device.iap.model.ProductDataResponse$RequestStatus FAILED;
    public static final com.amazon.device.iap.model.ProductDataResponse$RequestStatus NOT_SUPPORTED;
    public static final com.amazon.device.iap.model.ProductDataResponse$RequestStatus SUCCESSFUL;

    // Methods
    static
    {
      com.amazon.device.iap.model.ProductDataResponse$RequestStatus[] v0;
      SUCCESSFUL = new com.amazon.device.iap.model.ProductDataResponse$RequestStatus("SUCCESSFUL", 0);
      FAILED = new com.amazon.device.iap.model.ProductDataResponse$RequestStatus("FAILED", 1);
      NOT_SUPPORTED = new com.amazon.device.iap.model.ProductDataResponse$RequestStatus("NOT_SUPPORTED", 2);
      v0 = new com.amazon.device.iap.model.ProductDataResponse$RequestStatus[3];
      v0[0] = SUCCESSFUL;
      v0[1] = FAILED;
      v0[2] = NOT_SUPPORTED;
      $VALUES = (com.amazon.device.iap.model.ProductDataResponse$RequestStatus[])v0;
    }

    private ProductDataResponse$RequestStatus(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.iap.model.ProductDataResponse$RequestStatus valueOf(
            String p0)
    {
      return (com.amazon.device.iap.model.ProductDataResponse$RequestStatus)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                              com.amazon.device.iap.model.ProductDataResponse$RequestStatus.class,
                                                                              p0);
    }

    public static com.amazon.device.iap.model.ProductDataResponse$RequestStatus[] values()
    {
      return (com.amazon.device.iap.model.ProductDataResponse$RequestStatus[])$VALUES.clone();
    }

}
