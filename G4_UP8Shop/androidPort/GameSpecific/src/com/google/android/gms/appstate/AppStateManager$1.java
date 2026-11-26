// Decompiled from classes.dex (SourceFile: AppStateManager$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

final class AppStateManager$1 implements com.google.android.gms.common.api.Api$b {
    // Methods
    AppStateManager$1()
    {
      super();
    }

    private static com.google.android.gms.internal.gb b$4c9d9731(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p3,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p4)
    {
      return new com.google.android.gms.internal.gb(p0, p1, p3, p4, p2.b(), (String[])p2.d().toArray(new String[0]));
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
      return (com.google.android.gms.common.api.Api$a)new com.google.android.gms.internal.gb(p0, p1, p4, p5, p2.b(), (String[])p2.d().toArray(new String[0]));
    }

}
