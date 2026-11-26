// Decompiled from classes.dex (SourceFile: FilterType.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public final class FilterType extends com.gameloft.android.DecompRT.EnumBase<FilterType> {
    // Fields
    public static final com.amazon.device.associates.FilterType Brand;
    public static final com.amazon.device.associates.FilterType MaximumPrice;
    public static final com.amazon.device.associates.FilterType MinimumPrice;
    private static final com.amazon.device.associates.FilterType[] a;

    // Methods
    static
    {
      com.amazon.device.associates.FilterType[] v0;
      MaximumPrice = new com.amazon.device.associates.FilterType("MaximumPrice", 0);
      MinimumPrice = new com.amazon.device.associates.FilterType("MinimumPrice", 1);
      Brand = new com.amazon.device.associates.FilterType("Brand", 2);
      v0 = new com.amazon.device.associates.FilterType[3];
      v0[0] = MaximumPrice;
      v0[1] = MinimumPrice;
      v0[2] = Brand;
      a = (com.amazon.device.associates.FilterType[])v0;
    }

    private FilterType(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.FilterType valueOf(String p0)
    {
      return (com.amazon.device.associates.FilterType)com.gameloft.android.DecompRT.EnumBase.valueOf(com.amazon.device.associates.FilterType.class, p0);
    }

    public static com.amazon.device.associates.FilterType[] values()
    {
      return (com.amazon.device.associates.FilterType[])a.clone();
    }

}
