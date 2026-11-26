// Decompiled from classes.dex (SourceFile: Wearable$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

final class Wearable$1 implements com.google.android.gms.common.api.Api$b {
    // Methods
    Wearable$1()
    {
      super();
    }

    private static com.google.android.gms.wearable.internal.au a$43e91ea6(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.wearable.Wearable$WearableOptions p2,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p3,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p4)
    {
      if ( p2 == null )
        new com.google.android.gms.wearable.Wearable$WearableOptions(new com.google.android.gms.wearable.Wearable$WearableOptions$Builder());
      return new com.google.android.gms.wearable.internal.au(p0, p1, p3, p4);
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
      if ( (com.google.android.gms.wearable.Wearable$WearableOptions)p3 == null )
        new com.google.android.gms.wearable.Wearable$WearableOptions(new com.google.android.gms.wearable.Wearable$WearableOptions$Builder());
      return (com.google.android.gms.common.api.Api$a)new com.google.android.gms.wearable.internal.au(p0, p1, p4, p5);
    }

}
