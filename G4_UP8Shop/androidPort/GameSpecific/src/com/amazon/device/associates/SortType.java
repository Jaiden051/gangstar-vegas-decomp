// Decompiled from classes.dex (SourceFile: SortType.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public final class SortType extends com.gameloft.android.DecompRT.EnumBase<SortType> {
    // Fields
    public static final com.amazon.device.associates.SortType BESTSELLING;
    public static final com.amazon.device.associates.SortType PRICE_HIGH_TO_LOW;
    public static final com.amazon.device.associates.SortType PRICE_LOW_TO_HIGH;
    public static final com.amazon.device.associates.SortType RELEVANCE;
    private static final com.amazon.device.associates.SortType[] a;

    // Methods
    static
    {
      com.amazon.device.associates.SortType[] v0;
      PRICE_LOW_TO_HIGH = new com.amazon.device.associates.SortType("PRICE_LOW_TO_HIGH", 0);
      PRICE_HIGH_TO_LOW = new com.amazon.device.associates.SortType("PRICE_HIGH_TO_LOW", 1);
      RELEVANCE = new com.amazon.device.associates.SortType("RELEVANCE", 2);
      BESTSELLING = new com.amazon.device.associates.SortType("BESTSELLING", 3);
      v0 = new com.amazon.device.associates.SortType[4];
      v0[0] = PRICE_LOW_TO_HIGH;
      v0[1] = PRICE_HIGH_TO_LOW;
      v0[2] = RELEVANCE;
      v0[3] = BESTSELLING;
      a = (com.amazon.device.associates.SortType[])v0;
    }

    private SortType(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.SortType valueOf(String p0)
    {
      return (com.amazon.device.associates.SortType)com.gameloft.android.DecompRT.EnumBase.valueOf(com.amazon.device.associates.SortType.class, p0);
    }

    public static com.amazon.device.associates.SortType[] values()
    {
      return (com.amazon.device.associates.SortType[])a.clone();
    }

}
