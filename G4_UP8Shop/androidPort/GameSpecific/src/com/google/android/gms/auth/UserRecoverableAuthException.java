// Decompiled from classes.dex (SourceFile: UserRecoverableAuthException.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.auth;

public class UserRecoverableAuthException extends com.google.android.gms.auth.GoogleAuthException {
    // Fields
    private final android.content.Intent a;

    // Methods
    public UserRecoverableAuthException(String p0, android.content.Intent p1)
    {
      super(p0);
      this.a = p1;
    }

    private android.content.Intent a()
    {
      if ( this.a != null )
        return new android.content.Intent(this.a);
      else
        return null;
    }

}
