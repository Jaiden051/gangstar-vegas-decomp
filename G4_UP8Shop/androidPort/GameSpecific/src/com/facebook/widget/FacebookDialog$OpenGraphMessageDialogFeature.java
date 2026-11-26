// Decompiled from classes.dex (SourceFile: FacebookDialog$OpenGraphMessageDialogFeature.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class FacebookDialog$OpenGraphMessageDialogFeature extends com.gameloft.android.DecompRT.EnumBase<FacebookDialog$OpenGraphMessageDialogFeature> implements com.facebook.widget.FacebookDialog$DialogFeature {
    // Fields
    private static final com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature[] $VALUES;
    public static final com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature OG_MESSAGE_DIALOG;
    private int minVersion;

    // Methods
    static
    {
      com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature[] v0;
      OG_MESSAGE_DIALOG = new com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature("OG_MESSAGE_DIALOG", 0, 20140204);
      v0 = new com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature[1];
      v0[0] = OG_MESSAGE_DIALOG;
      $VALUES = (com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature[])v0;
    }

    private FacebookDialog$OpenGraphMessageDialogFeature(String p0, int p1, int p2)
    {
      super(p0, p1);
      this.minVersion = p2;
    }

    public static com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature valueOf(
            String p0)
    {
      return (com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                                 com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature.class,
                                                                                 p0);
    }

    public static com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature[] values()
    {
      return (com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature[])$VALUES.clone();
    }

    public final String getAction()
    {
      return "com.facebook.platform.action.request.OGMESSAGEPUBLISH_DIALOG";
    }

    public final int getMinVersion()
    {
      return this.minVersion;
    }

}
