// Decompiled from classes.dex (SourceFile: UserRecoverableException.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

public class UserRecoverableException extends java.lang.Exception {
    // Fields
    private final android.content.Intent a;

    // Methods
    public UserRecoverableException(String p0, android.content.Intent p1)
    {
      super(p0);
      this.a = p1;
    }

    public final android.content.Intent b()
    {
      return new android.content.Intent(this.a);
    }

}
