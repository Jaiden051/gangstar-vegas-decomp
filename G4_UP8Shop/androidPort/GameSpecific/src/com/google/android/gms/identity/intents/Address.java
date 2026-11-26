// Decompiled from classes.dex (SourceFile: Address.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.identity.intents;

public final class Address {
    // Fields
    static final com.google.android.gms.common.api.Api$c a;
    public static final com.google.android.gms.common.api.Api b;
    private static final com.google.android.gms.common.api.Api$b c;

    // Methods
    static
    {
      a = new com.google.android.gms.common.api.Api$c();
      c = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.identity.intents.Address$1();
      b = new com.google.android.gms.common.api.Api(c, a, new com.google.android.gms.common.api.Scope[0]);
    }

    public Address()
    {
      super();
    }

    public static void requestUserAddress(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.identity.intents.UserAddressRequest p1,
            int p2)
 throws android.os.RemoteException {
      p0.a(new com.google.android.gms.identity.intents.Address$2(p1, p2));
    }

}
