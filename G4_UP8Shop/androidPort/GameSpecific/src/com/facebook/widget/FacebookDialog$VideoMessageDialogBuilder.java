// Decompiled from classes.dex (SourceFile: FacebookDialog$VideoMessageDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class FacebookDialog$VideoMessageDialogBuilder extends com.facebook.widget.FacebookDialog$VideoDialogBuilderBase {
    // Methods
    public FacebookDialog$VideoMessageDialogBuilder(android.app.Activity p0)
    {
      super(p0);
    }

    protected com.gameloft.android.DecompRT.EnumSet<com.facebook.widget.FacebookDialog$MessageDialogFeature> getDialogFeatures()
    {
      return com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$MessageDialogFeature.MESSAGE_DIALOG, FacebookDialog$MessageDialogFeature.VIDEO);
    }



    public com.facebook.widget.FacebookDialog$VideoMessageDialogBuilder setPlace(
            String p0)
    {
      return this;
    }

}
