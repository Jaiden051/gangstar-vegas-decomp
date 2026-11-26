// Decompiled from classes.dex (SourceFile: FacebookDialog$OpenGraphMessageDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class FacebookDialog$OpenGraphMessageDialogBuilder extends com.facebook.widget.FacebookDialog$OpenGraphDialogBuilderBase {
    // Methods
    public FacebookDialog$OpenGraphMessageDialogBuilder(android.app.Activity p0, com.facebook.model.OpenGraphAction p1, String p2)
    {
      super(p0, p1, p2);
    }

    protected com.gameloft.android.DecompRT.EnumSet<? extends com.facebook.widget.FacebookDialog$DialogFeature> getDialogFeatures()
    {
      return com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$OpenGraphMessageDialogFeature.OG_MESSAGE_DIALOG);
    }

}
