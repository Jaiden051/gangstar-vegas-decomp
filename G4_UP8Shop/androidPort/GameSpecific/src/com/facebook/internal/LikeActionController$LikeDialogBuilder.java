// Decompiled from classes.dex (SourceFile: LikeActionController$LikeDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$LikeDialogBuilder extends com.facebook.widget.FacebookDialog$Builder {
    // Fields
    private java.lang.String objectId;

    // Methods
    public LikeActionController$LikeDialogBuilder(android.app.Activity p0, String p1)
    {
      super(p0);
      this.objectId = p1;
    }

    public com.facebook.widget.FacebookDialog$PendingCall getAppCall()
    {
      return this.appCall;
    }

    public String getApplicationId()
    {
      return this.applicationId;
    }

    protected com.gameloft.android.DecompRT.EnumSet<? extends com.facebook.widget.FacebookDialog$DialogFeature> getDialogFeatures()
    {
      return com.gameloft.android.DecompRT.EnumSet.of(LikeActionController$LikeDialogFeature.LIKE_DIALOG);
    }

    protected android.os.Bundle getMethodArguments()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.putString("object_id", this.objectId);
      return v1;
    }

    public String getWebFallbackUrl()
    {
      return this.getWebFallbackUrlInternal();
    }

}
