// Decompiled from classes.dex (SourceFile: FacebookDialog$MessageDialogFeature.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class FacebookDialog$MessageDialogFeature extends com.gameloft.android.DecompRT.EnumBase<FacebookDialog$MessageDialogFeature> implements com.facebook.widget.FacebookDialog$DialogFeature {
    // Fields
    private static final com.facebook.widget.FacebookDialog$MessageDialogFeature[] $VALUES;
    public static final com.facebook.widget.FacebookDialog$MessageDialogFeature MESSAGE_DIALOG;
    public static final com.facebook.widget.FacebookDialog$MessageDialogFeature PHOTOS;
    public static final com.facebook.widget.FacebookDialog$MessageDialogFeature VIDEO;
    private int minVersion;

    // Methods
    static
    {
      com.facebook.widget.FacebookDialog$MessageDialogFeature[] v0;
      MESSAGE_DIALOG = new com.facebook.widget.FacebookDialog$MessageDialogFeature("MESSAGE_DIALOG", 0, 20140204);
      PHOTOS = new com.facebook.widget.FacebookDialog$MessageDialogFeature("PHOTOS", 1, 20140324);
      VIDEO = new com.facebook.widget.FacebookDialog$MessageDialogFeature("VIDEO", 2, 20141218);
      v0 = new com.facebook.widget.FacebookDialog$MessageDialogFeature[3];
      v0[0] = MESSAGE_DIALOG;
      v0[1] = PHOTOS;
      v0[2] = VIDEO;
      $VALUES = (com.facebook.widget.FacebookDialog$MessageDialogFeature[])v0;
    }

    private FacebookDialog$MessageDialogFeature(String p0, int p1, int p2)
    {
      super(p0, p1);
      this.minVersion = p2;
    }

    public static com.facebook.widget.FacebookDialog$MessageDialogFeature valueOf(
            String p0)
    {
      return (com.facebook.widget.FacebookDialog$MessageDialogFeature)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                        com.facebook.widget.FacebookDialog$MessageDialogFeature.class,
                                                                        p0);
    }

    public static com.facebook.widget.FacebookDialog$MessageDialogFeature[] values()
    {
      return (com.facebook.widget.FacebookDialog$MessageDialogFeature[])$VALUES.clone();
    }

    public final String getAction()
    {
      return "com.facebook.platform.action.request.MESSAGE_DIALOG";
    }

    public final int getMinVersion()
    {
      return this.minVersion;
    }

}
