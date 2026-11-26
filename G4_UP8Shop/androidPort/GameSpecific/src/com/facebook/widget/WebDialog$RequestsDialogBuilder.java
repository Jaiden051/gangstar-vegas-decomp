// Decompiled from classes.dex (SourceFile: WebDialog$RequestsDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class WebDialog$RequestsDialogBuilder extends com.facebook.widget.WebDialog$BuilderBase {
    // Fields
    private static java.lang.String APPREQUESTS_DIALOG;
    private static java.lang.String DATA_PARAM;
    private static java.lang.String MESSAGE_PARAM;
    private static java.lang.String TITLE_PARAM;
    private static java.lang.String TO_PARAM;

    // Methods
    public WebDialog$RequestsDialogBuilder(android.content.Context p0)
    {
      super(p0, "apprequests");
    }

    public WebDialog$RequestsDialogBuilder(android.content.Context p0, com.facebook.Session p1)
    {
      super(p0, p1, "apprequests", null);
    }

    public WebDialog$RequestsDialogBuilder(android.content.Context p0, com.facebook.Session p1, android.os.Bundle p2)
    {
      super(p0, p1, "apprequests", p2);
    }

    public WebDialog$RequestsDialogBuilder(android.content.Context p0, String p1, android.os.Bundle p2)
    {
      super(p0, p1, "apprequests", p2);
    }



    public com.facebook.widget.WebDialog$RequestsDialogBuilder setData(String p0)
    {
      this.getParameters().putString("data", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$RequestsDialogBuilder setMessage(String p0)
    {
      this.getParameters().putString("message", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$RequestsDialogBuilder setTitle(String p0)
    {
      this.getParameters().putString("title", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$RequestsDialogBuilder setTo(String p0)
    {
      this.getParameters().putString("to", p0);
      return this;
    }

}
