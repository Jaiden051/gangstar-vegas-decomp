// Decompiled from classes.dex (SourceFile: WebDialog$FeedDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class WebDialog$FeedDialogBuilder extends com.facebook.widget.WebDialog$BuilderBase {
    // Fields
    private static java.lang.String CAPTION_PARAM;
    private static java.lang.String DESCRIPTION_PARAM;
    private static java.lang.String FEED_DIALOG;
    private static java.lang.String FROM_PARAM;
    private static java.lang.String LINK_PARAM;
    private static java.lang.String NAME_PARAM;
    private static java.lang.String PICTURE_PARAM;
    private static java.lang.String SOURCE_PARAM;
    private static java.lang.String TO_PARAM;

    // Methods
    public WebDialog$FeedDialogBuilder(android.content.Context p0)
    {
      super(p0, "feed");
    }

    public WebDialog$FeedDialogBuilder(android.content.Context p0, com.facebook.Session p1)
    {
      super(p0, p1, "feed", null);
    }

    public WebDialog$FeedDialogBuilder(android.content.Context p0, com.facebook.Session p1, android.os.Bundle p2)
    {
      super(p0, p1, "feed", p2);
    }

    public WebDialog$FeedDialogBuilder(android.content.Context p0, String p1, android.os.Bundle p2)
    {
      super(p0, p1, "feed", p2);
    }



    public com.facebook.widget.WebDialog$FeedDialogBuilder setCaption(String p0)
    {
      this.getParameters().putString("caption", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$FeedDialogBuilder setDescription(String p0)
    {
      this.getParameters().putString("description", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$FeedDialogBuilder setFrom(String p0)
    {
      this.getParameters().putString("from", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$FeedDialogBuilder setLink(String p0)
    {
      this.getParameters().putString("link", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$FeedDialogBuilder setName(String p0)
    {
      this.getParameters().putString("name", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$FeedDialogBuilder setPicture(String p0)
    {
      this.getParameters().putString("picture", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$FeedDialogBuilder setSource(String p0)
    {
      this.getParameters().putString("source", p0);
      return this;
    }

    public com.facebook.widget.WebDialog$FeedDialogBuilder setTo(String p0)
    {
      this.getParameters().putString("to", p0);
      return this;
    }

}
