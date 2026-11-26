// Decompiled from classes.dex (SourceFile: FacebookDialog$ShareDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class FacebookDialog$ShareDialogBuilder extends com.facebook.widget.FacebookDialog$ShareDialogBuilderBase {
    // Methods
    public FacebookDialog$ShareDialogBuilder(android.app.Activity p0)
    {
      super(p0);
    }

    protected com.gameloft.android.DecompRT.EnumSet<? extends com.facebook.widget.FacebookDialog$DialogFeature> getDialogFeatures()
    {
      return com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$ShareDialogFeature.SHARE_DIALOG);
    }

}
