// Decompiled from classes.dex (SourceFile: FacebookDialog$VideoShareDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class FacebookDialog$VideoShareDialogBuilder extends com.facebook.widget.FacebookDialog$VideoDialogBuilderBase {
    // Methods
    public FacebookDialog$VideoShareDialogBuilder(android.app.Activity p0)
    {
      super(p0);
    }

    protected com.gameloft.android.DecompRT.EnumSet<? extends com.facebook.widget.FacebookDialog$DialogFeature> getDialogFeatures()
    {
      return com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$ShareDialogFeature.SHARE_DIALOG, FacebookDialog$ShareDialogFeature.VIDEO);
    }

}
