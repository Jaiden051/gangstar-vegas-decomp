// Decompiled from classes.dex (SourceFile: PurchaseExperience.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public final class PurchaseExperience extends com.gameloft.android.DecompRT.EnumBase<PurchaseExperience> {
    // Fields
    public static final com.amazon.device.associates.PurchaseExperience DIRECT_WITH_DETAIL;
    public static final com.amazon.device.associates.PurchaseExperience DIRECT_WITH_PREVIEW;
    public static final com.amazon.device.associates.PurchaseExperience IN_APP;
    private static final com.amazon.device.associates.PurchaseExperience[] a;

    // Methods
    static
    {
      com.amazon.device.associates.PurchaseExperience[] v0;
      IN_APP = new com.amazon.device.associates.PurchaseExperience("IN_APP", 0);
      DIRECT_WITH_DETAIL = new com.amazon.device.associates.PurchaseExperience("DIRECT_WITH_DETAIL", 1);
      DIRECT_WITH_PREVIEW = new com.amazon.device.associates.PurchaseExperience("DIRECT_WITH_PREVIEW", 2);
      v0 = new com.amazon.device.associates.PurchaseExperience[3];
      v0[0] = IN_APP;
      v0[1] = DIRECT_WITH_DETAIL;
      v0[2] = DIRECT_WITH_PREVIEW;
      a = (com.amazon.device.associates.PurchaseExperience[])v0;
    }

    private PurchaseExperience(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.PurchaseExperience valueOf(String p0)
    {
      return (com.amazon.device.associates.PurchaseExperience)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                com.amazon.device.associates.PurchaseExperience.class,
                                                                p0);
    }

    public static com.amazon.device.associates.PurchaseExperience[] values()
    {
      return (com.amazon.device.associates.PurchaseExperience[])a.clone();
    }

}
