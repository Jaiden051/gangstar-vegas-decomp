// Decompiled from classes.dex (SourceFile: FacebookDialog$PhotoShareDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class FacebookDialog$PhotoShareDialogBuilder extends com.facebook.widget.FacebookDialog$PhotoDialogBuilderBase {
    // Methods
    public FacebookDialog$PhotoShareDialogBuilder(android.app.Activity p0)
    {
      super(p0);
    }

    protected com.gameloft.android.DecompRT.EnumSet<? extends com.facebook.widget.FacebookDialog$DialogFeature> getDialogFeatures()
    {
      return com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$ShareDialogFeature.SHARE_DIALOG, FacebookDialog$ShareDialogFeature.PHOTOS);
    }

    int getMaximumNumberOfPhotos()
    {
      return MAXIMUM_PHOTO_COUNT;
    }

}
