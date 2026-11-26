// Decompiled from classes.dex (SourceFile: AdRequest$ErrorCode.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads;

public final class AdRequest$ErrorCode extends com.gameloft.android.DecompRT.EnumBase<AdRequest$ErrorCode> {
    // Fields
    public static final com.google.ads.AdRequest$ErrorCode a;
    public static final com.google.ads.AdRequest$ErrorCode b;
    public static final com.google.ads.AdRequest$ErrorCode c;
    public static final com.google.ads.AdRequest$ErrorCode d;
    private static final com.google.ads.AdRequest$ErrorCode[] f;
    private final java.lang.String e;

    // Methods
    static
    {
      com.google.ads.AdRequest$ErrorCode[] v0;
      a = new com.google.ads.AdRequest$ErrorCode("INVALID_REQUEST", 0, "Invalid Ad request.");
      b = new com.google.ads.AdRequest$ErrorCode("NO_FILL", 1, "Ad request successful, but no ad returned due to lack of ad inventory.");
      c = new com.google.ads.AdRequest$ErrorCode("NETWORK_ERROR", 2, "A network error occurred.");
      d = new com.google.ads.AdRequest$ErrorCode("INTERNAL_ERROR", 3, "There was an internal error.");
      v0 = new com.google.ads.AdRequest$ErrorCode[4];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      v0[3] = d;
      f = (com.google.ads.AdRequest$ErrorCode[])v0;
    }

    private AdRequest$ErrorCode(String p0, int p1, String p2)
    {
      super(p0, p1);
      this.e = p2;
    }

    public static com.google.ads.AdRequest$ErrorCode valueOf(String p0)
    {
      return (com.google.ads.AdRequest$ErrorCode)com.gameloft.android.DecompRT.EnumBase.valueOf(com.google.ads.AdRequest$ErrorCode.class, p0);
    }

    public static com.google.ads.AdRequest$ErrorCode[] values()
    {
      return (com.google.ads.AdRequest$ErrorCode[])f.clone();
    }

    public final String toString()
    {
      return this.e;
    }

}
