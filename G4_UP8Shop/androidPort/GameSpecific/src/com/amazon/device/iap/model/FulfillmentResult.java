// Decompiled from classes.dex (SourceFile: FulfillmentResult.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class FulfillmentResult extends com.gameloft.android.DecompRT.EnumBase<FulfillmentResult> {
    // Fields
    private static final com.amazon.device.iap.model.FulfillmentResult[] $VALUES;
    public static final com.amazon.device.iap.model.FulfillmentResult FULFILLED;
    public static final com.amazon.device.iap.model.FulfillmentResult UNAVAILABLE;

    // Methods
    static
    {
      com.amazon.device.iap.model.FulfillmentResult[] v0;
      FULFILLED = new com.amazon.device.iap.model.FulfillmentResult("FULFILLED", 0);
      UNAVAILABLE = new com.amazon.device.iap.model.FulfillmentResult("UNAVAILABLE", 1);
      v0 = new com.amazon.device.iap.model.FulfillmentResult[2];
      v0[0] = FULFILLED;
      v0[1] = UNAVAILABLE;
      $VALUES = (com.amazon.device.iap.model.FulfillmentResult[])v0;
    }

    private FulfillmentResult(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.iap.model.FulfillmentResult valueOf(String p0)
    {
      return (com.amazon.device.iap.model.FulfillmentResult)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                              com.amazon.device.iap.model.FulfillmentResult.class,
                                                              p0);
    }

    public static com.amazon.device.iap.model.FulfillmentResult[] values()
    {
      return (com.amazon.device.iap.model.FulfillmentResult[])$VALUES.clone();
    }

}
