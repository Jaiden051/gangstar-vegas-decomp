// Decompiled from classes.dex (SourceFile: PurchaseResponse$Status.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public final class PurchaseResponse$Status extends com.gameloft.android.DecompRT.EnumBase<PurchaseResponse$Status> {
    // Fields
    public static final com.amazon.device.associates.PurchaseResponse$Status FAILED;
    public static final com.amazon.device.associates.PurchaseResponse$Status INVALID_ID;
    public static final com.amazon.device.associates.PurchaseResponse$Status NOT_SUPPORTED;
    public static final com.amazon.device.associates.PurchaseResponse$Status PENDING;
    public static final com.amazon.device.associates.PurchaseResponse$Status SUCCESSFUL;
    private static final com.amazon.device.associates.PurchaseResponse$Status[] a;

    // Methods
    static
    {
      com.amazon.device.associates.PurchaseResponse$Status[] v0;
      SUCCESSFUL = new com.amazon.device.associates.PurchaseResponse$Status("SUCCESSFUL", 0);
      FAILED = new com.amazon.device.associates.PurchaseResponse$Status("FAILED", 1);
      PENDING = new com.amazon.device.associates.PurchaseResponse$Status("PENDING", 2);
      INVALID_ID = new com.amazon.device.associates.PurchaseResponse$Status("INVALID_ID", 3);
      NOT_SUPPORTED = new com.amazon.device.associates.PurchaseResponse$Status("NOT_SUPPORTED", 4);
      v0 = new com.amazon.device.associates.PurchaseResponse$Status[5];
      v0[0] = SUCCESSFUL;
      v0[1] = FAILED;
      v0[2] = PENDING;
      v0[3] = INVALID_ID;
      v0[4] = NOT_SUPPORTED;
      a = (com.amazon.device.associates.PurchaseResponse$Status[])v0;
    }

    private PurchaseResponse$Status(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.PurchaseResponse$Status valueOf(String p0)
    {
      return (com.amazon.device.associates.PurchaseResponse$Status)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                     com.amazon.device.associates.PurchaseResponse$Status.class,
                                                                     p0);
    }

    public static com.amazon.device.associates.PurchaseResponse$Status[] values()
    {
      return (com.amazon.device.associates.PurchaseResponse$Status[])a.clone();
    }

}
