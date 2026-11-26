// Decompiled from classes.dex (SourceFile: FacebookDialogException.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public class FacebookDialogException extends com.facebook.FacebookException {
    // Fields
    static long serialVersionUID;
    private int errorCode;
    private java.lang.String failingUrl;

    // Methods
    public FacebookDialogException(String p0, int p1, String p2)
    {
      super(p0);
      this.errorCode = p1;
      this.failingUrl = p2;
    }

    public int getErrorCode()
    {
      return this.errorCode;
    }

    public String getFailingUrl()
    {
      return this.failingUrl;
    }

}
