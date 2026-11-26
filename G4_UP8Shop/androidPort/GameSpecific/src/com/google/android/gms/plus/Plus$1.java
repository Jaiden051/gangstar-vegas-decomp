// Decompiled from classes.dex (SourceFile: Plus$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

final class Plus$1 implements com.google.android.gms.common.api.Api$b {
    // Methods
    Plus$1()
    {
      super();
    }

    private static com.google.android.gms.plus.internal.e a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            com.google.android.gms.plus.Plus$PlusOptions p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      if ( p3 == null )
        p3 = new com.google.android.gms.plus.Plus$PlusOptions(0);
      return new com.google.android.gms.plus.internal.e(p0, p1, p4, p5, new com.google.android.gms.plus.internal.h(p2.b(), p2.e(), (String[])p3.b.toArray(new String[0]), new String[0], p0.getPackageName(), p0.getPackageName(), null, new com.google.android.gms.plus.internal.PlusCommonExtras()));
    }

    public final int a()
    {
      return 2;
    }

    /* synthetic */ public final com.google.android.gms.common.api.Api$a a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            Object p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      com.google.android.gms.plus.Plus$PlusOptions v7;
      v7 = (com.google.android.gms.plus.Plus$PlusOptions)p3;
      if ( v7 == null )
        v7 = new com.google.android.gms.plus.Plus$PlusOptions(0);
      return (com.google.android.gms.common.api.Api$a)new com.google.android.gms.plus.internal.e(p0, p1, p4, p5, new com.google.android.gms.plus.internal.h(p2.b(), p2.e(), (String[])v7.b.toArray(new String[0]), new String[0], p0.getPackageName(), p0.getPackageName(), null, new com.google.android.gms.plus.internal.PlusCommonExtras()));
    }

}
