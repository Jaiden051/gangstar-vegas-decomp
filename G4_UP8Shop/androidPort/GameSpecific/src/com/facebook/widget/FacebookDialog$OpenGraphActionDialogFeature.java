// Decompiled from classes.dex (SourceFile: FacebookDialog$OpenGraphActionDialogFeature.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class FacebookDialog$OpenGraphActionDialogFeature extends com.gameloft.android.DecompRT.EnumBase<FacebookDialog$OpenGraphActionDialogFeature> implements com.facebook.widget.FacebookDialog$DialogFeature {
    // Fields
    private static final com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature[] $VALUES;
    public static final com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature OG_ACTION_DIALOG;
    private int minVersion;

    // Methods
    static
    {
      com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature[] v0;
      OG_ACTION_DIALOG = new com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature("OG_ACTION_DIALOG", 0, 20130618);
      v0 = new com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature[1];
      v0[0] = OG_ACTION_DIALOG;
      $VALUES = (com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature[])v0;
    }

    private FacebookDialog$OpenGraphActionDialogFeature(String p0, int p1, int p2)
    {
      super(p0, p1);
      this.minVersion = p2;
    }

    public static com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature valueOf(
            String p0)
    {
      return (com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                                com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature.class,
                                                                                p0);
    }

    public static com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature[] values()
    {
      return (com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature[])$VALUES.clone();
    }

    public final String getAction()
    {
      return "com.facebook.platform.action.request.OGACTIONPUBLISH_DIALOG";
    }

    public final int getMinVersion()
    {
      return this.minVersion;
    }

}
