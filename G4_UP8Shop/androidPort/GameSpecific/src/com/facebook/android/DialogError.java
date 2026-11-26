// Decompiled from classes.dex (SourceFile: DialogError.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

public class DialogError extends java.lang.Throwable {
    // Fields
    private static long serialVersionUID;
    private int mErrorCode;
    private java.lang.String mFailingUrl;

    // Methods
    public DialogError(String p0, int p1, String p2)
    {
      super(p0);
      this.mErrorCode = p1;
      this.mFailingUrl = p2;
    }

    public int getErrorCode()
    {
      return this.mErrorCode;
    }

    public String getFailingUrl()
    {
      return this.mFailingUrl;
    }

}
