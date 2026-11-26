// Decompiled from classes.dex (SourceFile: AuthorizationClient$Result.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.text.TextUtils;
import com.facebook.internal.Utility;
class AuthorizationClient$Result implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    final com.facebook.AuthorizationClient$Result$Code code;
    final java.lang.String errorCode;
    final java.lang.String errorMessage;
    java.util.Map loggingExtras;
    final com.facebook.AuthorizationClient$AuthorizationRequest request;
    final com.facebook.AccessToken token;

    // Methods
    private AuthorizationClient$Result(
            com.facebook.AuthorizationClient$AuthorizationRequest p0,
            com.facebook.AuthorizationClient$Result$Code p1,
            com.facebook.AccessToken p2,
            String p3,
            String p4)
    {
      super();
      this.request = p0;
      this.token = p2;
      this.errorMessage = p3;
      this.code = p1;
      this.errorCode = p4;
    }

    static com.facebook.AuthorizationClient$Result createCancelResult(
            com.facebook.AuthorizationClient$AuthorizationRequest p0,
            String p1)
    {
      return new com.facebook.AuthorizationClient$Result(p0, AuthorizationClient$Result$Code.CANCEL, null, p1, null);
    }

    static com.facebook.AuthorizationClient$Result createErrorResult(
            com.facebook.AuthorizationClient$AuthorizationRequest p0,
            String p1,
            String p2)
    {
      return createErrorResult(p0, p1, p2, null);
    }

    static com.facebook.AuthorizationClient$Result createErrorResult(
            com.facebook.AuthorizationClient$AuthorizationRequest p0,
            String p1,
            String p2,
            String p3)
    {
      String[] v4;
      v4 = new String[2];
      v4[0] = p1;
      v4[1] = p2;
      return new com.facebook.AuthorizationClient$Result(p0, AuthorizationClient$Result$Code.ERROR, null, TextUtils.join(": ", Utility.asListNoNulls(v4)), p3);
    }

    static com.facebook.AuthorizationClient$Result createTokenResult(
            com.facebook.AuthorizationClient$AuthorizationRequest p0,
            com.facebook.AccessToken p1)
    {
      return new com.facebook.AuthorizationClient$Result(p0, AuthorizationClient$Result$Code.SUCCESS, p1, null, null);
    }

}
