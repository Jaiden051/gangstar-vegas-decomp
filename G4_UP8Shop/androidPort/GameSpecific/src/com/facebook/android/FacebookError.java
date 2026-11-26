// Decompiled from classes.dex (SourceFile: FacebookError.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

public class FacebookError extends java.lang.RuntimeException {
    // Fields
    private static long serialVersionUID;
    private int mErrorCode;
    private java.lang.String mErrorType;

    // Methods
    public FacebookError(String p0)
    {
      super(p0);
      this.mErrorCode = 0;
    }

    public FacebookError(String p0, String p1, int p2)
    {
      super(p0);
      this.mErrorCode = 0;
      this.mErrorType = p1;
      this.mErrorCode = p2;
    }

    public int getErrorCode()
    {
      return this.mErrorCode;
    }

    public String getErrorType()
    {
      return this.mErrorType;
    }

}
