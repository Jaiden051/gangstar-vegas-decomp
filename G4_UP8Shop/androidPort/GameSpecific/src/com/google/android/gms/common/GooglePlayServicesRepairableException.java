// Decompiled from classes.dex (SourceFile: GooglePlayServicesRepairableException.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

public class GooglePlayServicesRepairableException extends com.google.android.gms.common.UserRecoverableException {
    // Fields
    private final int a;

    // Methods
    GooglePlayServicesRepairableException(int p0, String p1, android.content.Intent p2)
    {
      super(p1, p2);
      this.a = p0;
    }

    public final int a()
    {
      return this.a;
    }

}
