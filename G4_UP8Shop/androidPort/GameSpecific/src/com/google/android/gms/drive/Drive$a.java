// Decompiled from classes.dex (SourceFile: Drive$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public abstract class Drive$a<O extends com.google.android.gms.common.api.Api$ApiOptions> implements com.google.android.gms.common.api.Api$b<com.google.android.gms.drive.internal.r, O> {
    // Methods
    public Drive$a()
    {
      super();
    }

    public com.google.android.gms.drive.internal.r a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            O p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      java.util.List v7;
      v7 = p2.d();
      return new com.google.android.gms.drive.internal.r(p0, p1, p2, p4, p5, (String[])v7.toArray(new String[v7.size()]), this.a((O)p3));
    }

    public final int a()
    {
      return 0x7FFFFFFF;
    }

    protected abstract android.os.Bundle a(O p0);



}
