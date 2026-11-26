// Decompiled from classes.dex (SourceFile: FacebookServiceException.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public class FacebookServiceException extends com.facebook.FacebookException {
    // Fields
    private static long serialVersionUID;
    private final com.facebook.FacebookRequestError error;

    // Methods
    public FacebookServiceException(com.facebook.FacebookRequestError p0, String p1)
    {
      super(p1);
      this.error = p0;
    }

    public final com.facebook.FacebookRequestError getRequestError()
    {
      return this.error;
    }

    public final String toString()
    {
      return "{FacebookServiceException: "
           + "httpResponseCode: "
           + this.error.getRequestStatusCode()
           + ", facebookErrorCode: "
           + this.error.getErrorCode()
           + ", facebookErrorType: "
           + this.error.getErrorType()
           + ", message: "
           + this.error.getErrorMessage()
           + "}";
    }

}
