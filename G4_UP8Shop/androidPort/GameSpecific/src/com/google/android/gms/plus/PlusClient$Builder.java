// Decompiled from classes.dex (SourceFile: PlusClient$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

public class PlusClient$Builder {
    // Fields
    private final android.content.Context a;
    private final com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks b;
    private final com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener c;
    private final com.google.android.gms.plus.internal.i d;

    // Methods
    private PlusClient$Builder(
            android.content.Context p0,
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p1,
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = new com.google.android.gms.plus.internal.i(this.a);
    }

    private com.google.android.gms.plus.PlusClient$Builder a()
    {
      this.d.a();
      return this;
    }

    private com.google.android.gms.plus.PlusClient$Builder a(String p0)
    {
      this.d.a(p0);
      return this;
    }

    private com.google.android.gms.plus.PlusClient$Builder a(String[] p0)
    {
      this.d.a(p0);
      return this;
    }

    private com.google.android.gms.plus.PlusClient$Builder b(String[] p0)
    {
      this.d.b(p0);
      return this;
    }

    private com.google.android.gms.plus.PlusClient b()
    {
      return new com.google.android.gms.plus.PlusClient(new com.google.android.gms.plus.internal.e(this.a, this.b, this.c, this.d.b()));
    }

}
