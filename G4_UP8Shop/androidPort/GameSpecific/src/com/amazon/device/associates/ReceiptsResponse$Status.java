// Decompiled from classes.dex (SourceFile: ReceiptsResponse$Status.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public final class ReceiptsResponse$Status extends com.gameloft.android.DecompRT.EnumBase<ReceiptsResponse$Status> {
    // Fields
    public static final com.amazon.device.associates.ReceiptsResponse$Status FAILED;
    public static final com.amazon.device.associates.ReceiptsResponse$Status NOT_SUPPORTED;
    public static final com.amazon.device.associates.ReceiptsResponse$Status NO_MORE_DATA;
    public static final com.amazon.device.associates.ReceiptsResponse$Status SUCCESSFUL;
    private static final com.amazon.device.associates.ReceiptsResponse$Status[] a;

    // Methods
    static
    {
      com.amazon.device.associates.ReceiptsResponse$Status[] v0;
      SUCCESSFUL = new com.amazon.device.associates.ReceiptsResponse$Status("SUCCESSFUL", 0);
      FAILED = new com.amazon.device.associates.ReceiptsResponse$Status("FAILED", 1);
      NO_MORE_DATA = new com.amazon.device.associates.ReceiptsResponse$Status("NO_MORE_DATA", 2);
      NOT_SUPPORTED = new com.amazon.device.associates.ReceiptsResponse$Status("NOT_SUPPORTED", 3);
      v0 = new com.amazon.device.associates.ReceiptsResponse$Status[4];
      v0[0] = SUCCESSFUL;
      v0[1] = FAILED;
      v0[2] = NO_MORE_DATA;
      v0[3] = NOT_SUPPORTED;
      a = (com.amazon.device.associates.ReceiptsResponse$Status[])v0;
    }

    private ReceiptsResponse$Status(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.associates.ReceiptsResponse$Status valueOf(String p0)
    {
      return (com.amazon.device.associates.ReceiptsResponse$Status)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                     com.amazon.device.associates.ReceiptsResponse$Status.class,
                                                                     p0);
    }

    public static com.amazon.device.associates.ReceiptsResponse$Status[] values()
    {
      return (com.amazon.device.associates.ReceiptsResponse$Status[])a.clone();
    }

}
