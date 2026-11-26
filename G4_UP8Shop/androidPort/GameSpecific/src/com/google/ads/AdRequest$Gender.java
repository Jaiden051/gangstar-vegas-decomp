// Decompiled from classes.dex (SourceFile: AdRequest$Gender.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads;

public final class AdRequest$Gender extends com.gameloft.android.DecompRT.EnumBase<AdRequest$Gender> {
    // Fields
    public static final com.google.ads.AdRequest$Gender a;
    public static final com.google.ads.AdRequest$Gender b;
    public static final com.google.ads.AdRequest$Gender c;
    private static final com.google.ads.AdRequest$Gender[] d;

    // Methods
    static
    {
      com.google.ads.AdRequest$Gender[] v0;
      a = new com.google.ads.AdRequest$Gender("UNKNOWN", 0);
      b = new com.google.ads.AdRequest$Gender("MALE", 1);
      c = new com.google.ads.AdRequest$Gender("FEMALE", 2);
      v0 = new com.google.ads.AdRequest$Gender[3];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      d = (com.google.ads.AdRequest$Gender[])v0;
    }

    private AdRequest$Gender(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.google.ads.AdRequest$Gender valueOf(String p0)
    {
      return (com.google.ads.AdRequest$Gender)com.gameloft.android.DecompRT.EnumBase.valueOf(com.google.ads.AdRequest$Gender.class, p0);
    }

    public static com.google.ads.AdRequest$Gender[] values()
    {
      return (com.google.ads.AdRequest$Gender[])d.clone();
    }

}
