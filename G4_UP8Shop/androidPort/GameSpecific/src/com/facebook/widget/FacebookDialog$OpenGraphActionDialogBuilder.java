// Decompiled from classes.dex (SourceFile: FacebookDialog$OpenGraphActionDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class FacebookDialog$OpenGraphActionDialogBuilder extends com.facebook.widget.FacebookDialog$OpenGraphDialogBuilderBase {
    // Methods
    public FacebookDialog$OpenGraphActionDialogBuilder(android.app.Activity p0, com.facebook.model.OpenGraphAction p1, String p2)
    {
      super(p0, p1, p2);
    }

    public FacebookDialog$OpenGraphActionDialogBuilder(
            android.app.Activity p0,
            com.facebook.model.OpenGraphAction p1,
            String p2,
            String p3)
    {
      super(p0, p1, p2, p3);
    }

    protected com.gameloft.android.DecompRT.EnumSet<? extends com.facebook.widget.FacebookDialog$DialogFeature> getDialogFeatures()
    {
      return com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$OpenGraphActionDialogFeature.OG_ACTION_DIALOG);
    }

}
