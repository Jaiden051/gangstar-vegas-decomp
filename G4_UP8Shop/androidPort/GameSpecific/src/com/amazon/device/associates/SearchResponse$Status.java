// Decompiled from classes.dex (SourceFile: SearchResponse$Status.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public final class SearchResponse$Status extends com.gameloft.android.DecompRT.EnumBase<SearchResponse$Status> {
    // Fields
    public static final com.amazon.device.associates.SearchResponse$Status FAILED;
    public static final com.amazon.device.associates.SearchResponse$Status INVALID_PARAMETER;
    public static final com.amazon.device.associates.SearchResponse$Status NOT_SUPPORTED;
    public static final com.amazon.device.associates.SearchResponse$Status SUCCESSFUL;
    private static final com.amazon.device.associates.SearchResponse$Status[] a;

    // Methods
    static
    {
      com.amazon.device.associates.SearchResponse$Status[] v0;
      SUCCESSFUL = new com.amazon.device.associates.SearchResponse$Status("SUCCESSFUL", 0);
      INVALID_PARAMETER = new com.amazon.device.associates.SearchResponse$Status("INVALID_PARAMETER", 1);
      FAILED = new com.amazon.device.associates.SearchResponse$Status("FAILED", 2);
      NOT_SUPPORTED = new com.amazon.device.associates.SearchResponse$Status("NOT_SUPPORTED", 3);
      v0 = new com.amazon.device.associates.SearchResponse$Status[4];
      v0[0] = SUCCESSFUL;
      v0[1] = INVALID_PARAMETER;
      v0[2] = FAILED;
      v0[3] = NOT_SUPPORTED;
      a = (com.amazon.device.associates.SearchResponse$Status[])v0;
    }

    private SearchResponse$Status(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.SearchResponse$Status valueOf(String p0)
    {
      return (com.amazon.device.associates.SearchResponse$Status)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                   com.amazon.device.associates.SearchResponse$Status.class,
                                                                   p0);
    }

    public static com.amazon.device.associates.SearchResponse$Status[] values()
    {
      return (com.amazon.device.associates.SearchResponse$Status[])a.clone();
    }

}
