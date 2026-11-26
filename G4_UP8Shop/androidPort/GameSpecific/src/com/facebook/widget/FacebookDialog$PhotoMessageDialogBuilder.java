// Decompiled from classes.dex (SourceFile: FacebookDialog$PhotoMessageDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class FacebookDialog$PhotoMessageDialogBuilder extends com.facebook.widget.FacebookDialog$PhotoDialogBuilderBase<com.facebook.widget.FacebookDialog$PhotoMessageDialogBuilder> {
    // Methods
    public FacebookDialog$PhotoMessageDialogBuilder(android.app.Activity p0)
    {
      super(p0);
    }

    protected com.gameloft.android.DecompRT.EnumSet<? extends com.facebook.widget.FacebookDialog$DialogFeature> getDialogFeatures()
    {
      return com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$MessageDialogFeature.MESSAGE_DIALOG, FacebookDialog$MessageDialogFeature.PHOTOS);
    }

    int getMaximumNumberOfPhotos()
    {
      return MAXIMUM_PHOTO_COUNT;
    }



    public com.facebook.widget.FacebookDialog$PhotoMessageDialogBuilder setFriends(
            java.util.List<String> p0)
    {
      return this;
    }



    public com.facebook.widget.FacebookDialog$PhotoMessageDialogBuilder setPlace(
            String p0)
    {
      return this;
    }

}
