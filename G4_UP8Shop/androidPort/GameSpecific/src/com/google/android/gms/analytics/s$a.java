// Decompiled from classes.dex (SourceFile: s$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

final class s$a extends com.gameloft.android.DecompRT.EnumBase<s$a> {
    // Fields
    public static final com.google.android.gms.analytics.s$a a;
    public static final com.google.android.gms.analytics.s$a b;
    public static final com.google.android.gms.analytics.s$a c;
    public static final com.google.android.gms.analytics.s$a d;
    public static final com.google.android.gms.analytics.s$a e;
    public static final com.google.android.gms.analytics.s$a f;
    public static final com.google.android.gms.analytics.s$a g;
    private static final com.google.android.gms.analytics.s$a[] h;

    // Methods
    static
    {
      com.google.android.gms.analytics.s$a[] v0;
      a = new com.google.android.gms.analytics.s$a("CONNECTING", 0);
      b = new com.google.android.gms.analytics.s$a("CONNECTED_SERVICE", 1);
      c = new com.google.android.gms.analytics.s$a("CONNECTED_LOCAL", 2);
      d = new com.google.android.gms.analytics.s$a("BLOCKED", 3);
      e = new com.google.android.gms.analytics.s$a("PENDING_CONNECTION", 4);
      f = new com.google.android.gms.analytics.s$a("PENDING_DISCONNECT", 5);
      g = new com.google.android.gms.analytics.s$a("DISCONNECTED", 6);
      v0 = new com.google.android.gms.analytics.s$a[7];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      v0[3] = d;
      v0[4] = e;
      v0[5] = f;
      v0[6] = g;
      h = (com.google.android.gms.analytics.s$a[])v0;
    }

    private s$a(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.google.android.gms.analytics.s$a valueOf(String p0)
    {
      return (com.google.android.gms.analytics.s$a)com.gameloft.android.DecompRT.EnumBase.valueOf(com.google.android.gms.analytics.s$a.class, p0);
    }

    public static com.google.android.gms.analytics.s$a[] values()
    {
      return (com.google.android.gms.analytics.s$a[])h.clone();
    }

}
