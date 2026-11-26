// Decompiled from classes.dex (SourceFile: FacebookDialog$VideoDialogBuilderBase.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

abstract class FacebookDialog$VideoDialogBuilderBase<CONCRETE extends com.facebook.widget.FacebookDialog$VideoDialogBuilderBase<?>> extends com.facebook.widget.FacebookDialog$Builder<CONCRETE> {
    // Fields
    private java.lang.String place;
    private java.lang.String videoAttachmentUrl;

    // Methods
    public FacebookDialog$VideoDialogBuilderBase(android.app.Activity p0)
    {
      super(p0);
    }

    public CONCRETE addVideoFile(java.io.File p0)
    {
      this.videoAttachmentUrl = this.addVideoAttachmentFile(p0);
      return (CONCRETE)this;
    }

    protected android.os.Bundle getMethodArguments()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      this.putExtra(v1, "PLACE", this.place);
      v1.putString("VIDEO", this.videoAttachmentUrl);
      return v1;
    }

    public CONCRETE setPlace(String p0)
    {
      this.place = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setVideoUrl(String p0)
    {
      this.videoAttachmentUrl = p0;
      return (CONCRETE)this;
    }

    void validate()
    {
      super.validate();
      if ( this.videoAttachmentUrl == null || this.videoAttachmentUrl.isEmpty() )
        throw new com.facebook.FacebookException("Must specify at least one video.");
    }

}
