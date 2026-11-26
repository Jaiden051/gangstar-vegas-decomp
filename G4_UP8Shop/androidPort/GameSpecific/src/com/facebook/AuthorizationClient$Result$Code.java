// Decompiled from classes.dex (SourceFile: AuthorizationClient$Result$Code.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AuthorizationClient$Result$Code extends com.gameloft.android.DecompRT.EnumBase<AuthorizationClient$Result$Code> {
    // Fields
    private static final com.facebook.AuthorizationClient$Result$Code[] $VALUES;
    public static final com.facebook.AuthorizationClient$Result$Code CANCEL;
    public static final com.facebook.AuthorizationClient$Result$Code ERROR;
    public static final com.facebook.AuthorizationClient$Result$Code SUCCESS;
    private final java.lang.String loggingValue;

    // Methods
    static
    {
      com.facebook.AuthorizationClient$Result$Code[] v0;
      SUCCESS = new com.facebook.AuthorizationClient$Result$Code("SUCCESS", 0, "success");
      CANCEL = new com.facebook.AuthorizationClient$Result$Code("CANCEL", 1, "cancel");
      ERROR = new com.facebook.AuthorizationClient$Result$Code("ERROR", 2, "error");
      v0 = new com.facebook.AuthorizationClient$Result$Code[3];
      v0[0] = SUCCESS;
      v0[1] = CANCEL;
      v0[2] = ERROR;
      $VALUES = (com.facebook.AuthorizationClient$Result$Code[])v0;
    }

    private AuthorizationClient$Result$Code(String p0, int p1, String p2)
    {
      super(p0, p1);
      this.loggingValue = p2;
    }

    public static com.facebook.AuthorizationClient$Result$Code valueOf(String p0)
    {
      return (com.facebook.AuthorizationClient$Result$Code)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                             com.facebook.AuthorizationClient$Result$Code.class,
                                                             p0);
    }

    public static com.facebook.AuthorizationClient$Result$Code[] values()
    {
      return (com.facebook.AuthorizationClient$Result$Code[])$VALUES.clone();
    }

    final String getLoggingValue()
    {
      return this.loggingValue;
    }

}
