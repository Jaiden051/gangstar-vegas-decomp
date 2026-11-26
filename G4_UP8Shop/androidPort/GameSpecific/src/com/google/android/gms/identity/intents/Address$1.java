// Decompiled from classes.dex (SourceFile: Address$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.identity.intents;

import com.google.android.gms.internal.hn;
final class Address$1 implements com.google.android.gms.common.api.Api$b {
    // Methods
    Address$1()
    {
      super();
    }

    private static com.google.android.gms.internal.ix a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            com.google.android.gms.identity.intents.Address$AddressOptions p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      hn.b(p0 instanceof android.app.Activity, "An Activity must be used for Address APIs");
      if ( p3 == null )
        p3 = new com.google.android.gms.identity.intents.Address$AddressOptions();
      return new com.google.android.gms.internal.ix((android.app.Activity)p0, p1, p4, p5, p2.a(), p3.a);
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
      com.google.android.gms.identity.intents.Address$AddressOptions v7;
      v7 = (com.google.android.gms.identity.intents.Address$AddressOptions)p3;
      hn.b(p0 instanceof android.app.Activity, "An Activity must be used for Address APIs");
      if ( v7 == null )
        v7 = new com.google.android.gms.identity.intents.Address$AddressOptions();
      return (com.google.android.gms.common.api.Api$a)new com.google.android.gms.internal.ix((android.app.Activity)p0, p1, p4, p5, p2.a(), v7.a);
    }

}
