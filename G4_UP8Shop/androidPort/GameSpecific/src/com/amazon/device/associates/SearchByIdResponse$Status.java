// Decompiled from classes.dex (SourceFile: SearchByIdResponse$Status.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public final class SearchByIdResponse$Status extends com.gameloft.android.DecompRT.EnumBase<SearchByIdResponse$Status> {
    // Fields
    public static final com.amazon.device.associates.SearchByIdResponse$Status FAILED;
    public static final com.amazon.device.associates.SearchByIdResponse$Status INVALID_PARAMETER;
    public static final com.amazon.device.associates.SearchByIdResponse$Status NOT_SUPPORTED;
    public static final com.amazon.device.associates.SearchByIdResponse$Status SUCCESSFUL;
    private static final com.amazon.device.associates.SearchByIdResponse$Status[] a;

    // Methods
    static
    {
      com.amazon.device.associates.SearchByIdResponse$Status[] v0;
      SUCCESSFUL = new com.amazon.device.associates.SearchByIdResponse$Status("SUCCESSFUL", 0);
      FAILED = new com.amazon.device.associates.SearchByIdResponse$Status("FAILED", 1);
      INVALID_PARAMETER = new com.amazon.device.associates.SearchByIdResponse$Status("INVALID_PARAMETER", 2);
      NOT_SUPPORTED = new com.amazon.device.associates.SearchByIdResponse$Status("NOT_SUPPORTED", 3);
      v0 = new com.amazon.device.associates.SearchByIdResponse$Status[4];
      v0[0] = SUCCESSFUL;
      v0[1] = FAILED;
      v0[2] = INVALID_PARAMETER;
      v0[3] = NOT_SUPPORTED;
      a = (com.amazon.device.associates.SearchByIdResponse$Status[])v0;
    }

    private SearchByIdResponse$Status(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.SearchByIdResponse$Status valueOf(String p0)
    {
      return (com.amazon.device.associates.SearchByIdResponse$Status)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                       com.amazon.device.associates.SearchByIdResponse$Status.class,
                                                                       p0);
    }

    public static com.amazon.device.associates.SearchByIdResponse$Status[] values()
    {
      return (com.amazon.device.associates.SearchByIdResponse$Status[])a.clone();
    }

}
