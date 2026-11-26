// Decompiled from classes.dex (SourceFile: Plus.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

import com.google.android.gms.internal.hn;
public final class Plus {
    // Fields
    public static final com.google.android.gms.common.api.Api$c a;
    static final com.google.android.gms.common.api.Api$b b;
    public static final com.google.android.gms.common.api.Api c;
    public static final com.google.android.gms.common.api.Scope d;
    public static final com.google.android.gms.common.api.Scope e;
    public static final com.google.android.gms.plus.Moments f;
    public static final com.google.android.gms.plus.People g;
    public static final com.google.android.gms.plus.Account h;
    public static final com.google.android.gms.plus.b i;
    public static final com.google.android.gms.plus.a j;

    // Methods
    static
    {
      a = new com.google.android.gms.common.api.Api$c();
      b = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.plus.Plus$1();
      c = new com.google.android.gms.common.api.Api(b, a, new com.google.android.gms.common.api.Scope[0]);
      d = new com.google.android.gms.common.api.Scope("https://www.googleapis.com/auth/plus.login");
      e = new com.google.android.gms.common.api.Scope("https://www.googleapis.com/auth/plus.me");
      f = (com.google.android.gms.plus.Moments)new com.google.android.gms.internal.km();
      g = (com.google.android.gms.plus.People)new com.google.android.gms.internal.kn();
      h = (com.google.android.gms.plus.Account)new com.google.android.gms.internal.kj();
      i = (com.google.android.gms.plus.b)new com.google.android.gms.internal.kl();
      j = (com.google.android.gms.plus.a)new com.google.android.gms.internal.kk();
    }

    private Plus()
    {
      super();
    }

    public static com.google.android.gms.plus.internal.e a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.common.api.Api$c<com.google.android.gms.plus.internal.e> p1)
    {
      com.google.android.gms.plus.internal.e v2;
      hn.b(p0 != null, "GoogleApiClient parameter is required.");
      hn.a(p0.g(), "GoogleApiClient must be connected.");
      v2 = (com.google.android.gms.plus.internal.e)p0.a(p1);
      hn.a(
        v2 != null,
        "GoogleApiClient is not configured to use the Plus.API Api. Pass this into GoogleApiClient.Builder#addApi() to use this feature.");
      return v2;
    }

}
