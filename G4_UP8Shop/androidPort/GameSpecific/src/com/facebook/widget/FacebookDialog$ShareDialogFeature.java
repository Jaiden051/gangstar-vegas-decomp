// Decompiled from classes.dex (SourceFile: FacebookDialog$ShareDialogFeature.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class FacebookDialog$ShareDialogFeature extends com.gameloft.android.DecompRT.EnumBase<FacebookDialog$ShareDialogFeature> implements com.facebook.widget.FacebookDialog$DialogFeature {
    // Fields
    private static final com.facebook.widget.FacebookDialog$ShareDialogFeature[] $VALUES;
    public static final com.facebook.widget.FacebookDialog$ShareDialogFeature PHOTOS;
    public static final com.facebook.widget.FacebookDialog$ShareDialogFeature SHARE_DIALOG;
    public static final com.facebook.widget.FacebookDialog$ShareDialogFeature VIDEO;
    private int minVersion;

    // Methods
    static
    {
      com.facebook.widget.FacebookDialog$ShareDialogFeature[] v0;
      SHARE_DIALOG = new com.facebook.widget.FacebookDialog$ShareDialogFeature("SHARE_DIALOG", 0, 20130618);
      PHOTOS = new com.facebook.widget.FacebookDialog$ShareDialogFeature("PHOTOS", 1, 20140204);
      VIDEO = new com.facebook.widget.FacebookDialog$ShareDialogFeature("VIDEO", 2, 20141028);
      v0 = new com.facebook.widget.FacebookDialog$ShareDialogFeature[3];
      v0[0] = SHARE_DIALOG;
      v0[1] = PHOTOS;
      v0[2] = VIDEO;
      $VALUES = (com.facebook.widget.FacebookDialog$ShareDialogFeature[])v0;
    }

    private FacebookDialog$ShareDialogFeature(String p0, int p1, int p2)
    {
      super(p0, p1);
      this.minVersion = p2;
    }

    public static com.facebook.widget.FacebookDialog$ShareDialogFeature valueOf(
            String p0)
    {
      return (com.facebook.widget.FacebookDialog$ShareDialogFeature)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                      com.facebook.widget.FacebookDialog$ShareDialogFeature.class,
                                                                      p0);
    }

    public static com.facebook.widget.FacebookDialog$ShareDialogFeature[] values()
    {
      return (com.facebook.widget.FacebookDialog$ShareDialogFeature[])$VALUES.clone();
    }

    public final String getAction()
    {
      return "com.facebook.platform.action.request.FEED_DIALOG";
    }

    public final int getMinVersion()
    {
      return this.minVersion;
    }

}
