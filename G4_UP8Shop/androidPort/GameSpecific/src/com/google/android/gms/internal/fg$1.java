// Decompiled from classes.dex (SourceFile: fg$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class fg$1 implements com.google.android.gms.common.api.Api$b {
    // Methods
    fg$1()
    {
      super();
    }

    private static com.google.android.gms.internal.fy a$4c9d9829(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3)
    {
      return new com.google.android.gms.internal.fy(p0, p1, p2, p3);
    }

    public final int a()
    {
      return 0x7FFFFFFF;
    }

    /* synthetic */ public final com.google.android.gms.common.api.Api$a a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            Object p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      return (com.google.android.gms.common.api.Api$a)new com.google.android.gms.internal.fy(p0, p1, p4, p5);
    }

}
