// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

final class b {
    // Fields
    public static int a;
    public static java.lang.String b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    private final int g;
    private final java.lang.String h;
    private final java.lang.String i;
    private final int j;

    // Methods
    private b(int p0, String p1, String p2)
    {
      this(p0, p1, p2, 3);
    }

    public b(int p0, String p1, String p2, int p3)
    {
      super();
      int v5; // RETVAL
      if ( p3 != 1 && p3 != 2 && p3 != 3 )
        throw new IllegalArgumentException("Invalid Scope:" + p3);
      if ( p0 <= 0 || p0 > 5 )
        throw new IllegalArgumentException("Index must be between 1 and 5 inclusive.");
      if ( p1 == null || p1.length() == 0 )
        throw new IllegalArgumentException("Invalid argument for name:  Cannot be empty");
      if ( p2 == null || p2.length() == 0 )
        throw new IllegalArgumentException("Invalid argument for value:  Cannot be empty");
      v5 = AnalyticsParameterEncoder.encode(p1 + p2).length();
      if ( v5 > 64 )
        throw new IllegalArgumentException("Encoded form of name and value must not exceed 64 characters combined.  Character length: "
                                         + v5);
      this.j = p0;
      this.g = p3;
      this.h = p1;
      this.i = p2;
    
    }

    public final int a()
    {
      return this.g;
    }

    public final String b()
    {
      return this.h;
    }

    public final String c()
    {
      return this.i;
    }

    public final int d()
    {
      return this.j;
    }

}
