// Decompiled from classes.dex (SourceFile: FacebookDialog$MessageDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class FacebookDialog$MessageDialogBuilder extends com.facebook.widget.FacebookDialog$ShareDialogBuilderBase<com.facebook.widget.FacebookDialog$MessageDialogBuilder> {
    // Methods
    public FacebookDialog$MessageDialogBuilder(android.app.Activity p0)
    {
      super(p0);
    }

    protected com.gameloft.android.DecompRT.EnumSet<? extends com.facebook.widget.FacebookDialog$DialogFeature> getDialogFeatures()
    {
      return com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$MessageDialogFeature.MESSAGE_DIALOG);
    }

    public com.facebook.widget.FacebookDialog$MessageDialogBuilder setFriends(
            java.util.List<String> p0)
    {
      return this;
    }



    public com.facebook.widget.FacebookDialog$MessageDialogBuilder setPlace(String p0)
    {
      return this;
    }



}
