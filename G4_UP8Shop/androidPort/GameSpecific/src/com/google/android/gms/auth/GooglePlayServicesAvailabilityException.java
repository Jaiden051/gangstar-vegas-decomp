// Decompiled from classes.dex (SourceFile: GooglePlayServicesAvailabilityException.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.auth;

public class GooglePlayServicesAvailabilityException extends com.google.android.gms.auth.UserRecoverableAuthException {
    // Fields
    private final int a;

    // Methods
    GooglePlayServicesAvailabilityException(int p0, String p1, android.content.Intent p2)
    {
      super(p1, p2);
      this.a = p0;
    }

    public final int a()
    {
      return this.a;
    }

}
