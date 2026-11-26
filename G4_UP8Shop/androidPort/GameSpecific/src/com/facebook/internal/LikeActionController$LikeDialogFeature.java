// Decompiled from classes.dex (SourceFile: LikeActionController$LikeDialogFeature.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class LikeActionController$LikeDialogFeature extends com.gameloft.android.DecompRT.EnumBase<LikeActionController$LikeDialogFeature> implements com.facebook.widget.FacebookDialog$DialogFeature {
    // Fields
    private static final com.facebook.internal.LikeActionController$LikeDialogFeature[] $VALUES;
    public static final com.facebook.internal.LikeActionController$LikeDialogFeature LIKE_DIALOG;
    private int minVersion;

    // Methods
    static
    {
      com.facebook.internal.LikeActionController$LikeDialogFeature[] v0;
      LIKE_DIALOG = new com.facebook.internal.LikeActionController$LikeDialogFeature("LIKE_DIALOG", 0, 20140701);
      v0 = new com.facebook.internal.LikeActionController$LikeDialogFeature[1];
      v0[0] = LIKE_DIALOG;
      $VALUES = (com.facebook.internal.LikeActionController$LikeDialogFeature[])v0;
    }

    private LikeActionController$LikeDialogFeature(String p0, int p1, int p2)
    {
      super(p0, p1);
      this.minVersion = p2;
    }

    public static com.facebook.internal.LikeActionController$LikeDialogFeature valueOf(
            String p0)
    {
      return (com.facebook.internal.LikeActionController$LikeDialogFeature)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                             com.facebook.internal.LikeActionController$LikeDialogFeature.class,
                                                                             p0);
    }

    public static com.facebook.internal.LikeActionController$LikeDialogFeature[] values()
    {
      return (com.facebook.internal.LikeActionController$LikeDialogFeature[])$VALUES.clone();
    }

    public final String getAction()
    {
      return "com.facebook.platform.action.request.LIKE_DIALOG";
    }

    public final int getMinVersion()
    {
      return this.minVersion;
    }

}
