// Decompiled from classes.dex (SourceFile: FacebookDialog$PhotoDialogBuilderBase.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.internal.Utility;
abstract class FacebookDialog$PhotoDialogBuilderBase<CONCRETE extends com.facebook.widget.FacebookDialog$PhotoDialogBuilderBase<?>> extends com.facebook.widget.FacebookDialog$Builder<CONCRETE> {
    // Fields
    static int MAXIMUM_PHOTO_COUNT;
    private java.util.ArrayList friends;
    private java.util.ArrayList imageAttachmentUrls;
    private java.lang.String place;

    // Methods
    static
    {
      MAXIMUM_PHOTO_COUNT = 6;
    }

    public FacebookDialog$PhotoDialogBuilderBase(android.app.Activity p0)
    {
      super(p0);
      this.imageAttachmentUrls = new java.util.ArrayList();
    }

    public CONCRETE addPhotoFiles(java.util.Collection<java.io.File> p0)
    {
      this.imageAttachmentUrls.addAll(this.addImageAttachmentFiles(p0));
      return (CONCRETE)this;
    }

    public CONCRETE addPhotos(java.util.Collection<android.graphics.Bitmap> p0)
    {
      this.imageAttachmentUrls.addAll(this.addImageAttachments(p0));
      return (CONCRETE)this;
    }

    abstract int getMaximumNumberOfPhotos();

    protected android.os.Bundle getMethodArguments()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      this.putExtra(v1, "PLACE", this.place);
      v1.putStringArrayList("PHOTOS", this.imageAttachmentUrls);
      if ( !Utility.isNullOrEmpty(this.friends) )
        v1.putStringArrayList("FRIENDS", this.friends);
      return v1;
    }

    protected android.os.Bundle setBundleExtras(android.os.Bundle p0)
    {
      this.putExtra(p0, "com.facebook.platform.extra.APPLICATION_ID", this.applicationId);
      this.putExtra(p0, "com.facebook.platform.extra.APPLICATION_NAME", this.applicationName);
      this.putExtra(p0, "com.facebook.platform.extra.PLACE", this.place);
      p0.putStringArrayList("com.facebook.platform.extra.PHOTOS", this.imageAttachmentUrls);
      if ( !Utility.isNullOrEmpty(this.friends) )
        p0.putStringArrayList("com.facebook.platform.extra.FRIENDS", this.friends);
      return p0;
    }

    public CONCRETE setFriends(java.util.List<String> p0)
    {
      java.util.ArrayList v2;
      if ( p0 != null )
        v2 = new java.util.ArrayList(p0);
      else
        v2 = null;
      this.friends = v2;
      return (CONCRETE)this;
    }

    public CONCRETE setPlace(String p0)
    {
      this.place = p0;
      return (CONCRETE)this;
    }

    void validate()
    {
      Object[] v1;
      super.validate();
      if ( this.imageAttachmentUrls.isEmpty() )
        throw new com.facebook.FacebookException("Must specify at least one photo.");
      if ( this.imageAttachmentUrls.size() > this.getMaximumNumberOfPhotos() )
      {
        v1 = new Object[1];
        v1[0] = Integer.valueOf(this.getMaximumNumberOfPhotos());
        throw new com.facebook.FacebookException(String.format("Cannot add more than %d photos.", v1));
      }
    }

}
