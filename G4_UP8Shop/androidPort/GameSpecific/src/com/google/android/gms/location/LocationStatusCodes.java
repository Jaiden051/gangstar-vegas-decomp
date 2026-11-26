// Decompiled from classes.dex (SourceFile: LocationStatusCodes.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

public final class LocationStatusCodes {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;

    // Methods
    private LocationStatusCodes()
    {
      super();
    }

    public static int cJ(int p0)
    {
      if ( (p0 < 0 || p0 > 1) && (p0 < 1000 || p0 > 1002) )
        return 1;
      return p0;
    }

    public static com.google.android.gms.common.api.Status cK(int p0)
    {
      if ( p0 == 1 )
        p0 = 13;
      return new com.google.android.gms.common.api.Status(p0);
    }

}
