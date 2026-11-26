// Decompiled from classes.dex (SourceFile: ActivityRecognition$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

final class ActivityRecognition$1 implements com.google.android.gms.common.api.Api$b {
    // Methods
    ActivityRecognition$1()
    {
      super();
    }

    private static com.google.android.gms.internal.jh c$4c9d8b34(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3)
    {
      return new com.google.android.gms.internal.jh(p0, p1, p2, p3, "activity_recognition");
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
      return (com.google.android.gms.common.api.Api$a)new com.google.android.gms.internal.jh(p0, p1, p4, p5, "activity_recognition");
    }

}
