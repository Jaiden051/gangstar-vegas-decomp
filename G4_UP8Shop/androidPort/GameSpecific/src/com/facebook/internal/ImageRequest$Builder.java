// Decompiled from classes.dex (SourceFile: ImageRequest$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public class ImageRequest$Builder {
    // Fields
    private boolean allowCachedRedirects;
    private com.facebook.internal.ImageRequest$Callback callback;
    private java.lang.Object callerTag;
    private android.content.Context context;
    private java.net.URI imageUrl;

    // Methods
    public ImageRequest$Builder(android.content.Context p0, java.net.URI p1)
    {
      super();
      Validate.notNull(p1, "imageUrl");
      this.context = p0;
      this.imageUrl = p1;
    }

    /* synthetic */ static android.content.Context access$000(
            com.facebook.internal.ImageRequest$Builder p0)
    {
      return p0.context;
    }

    /* synthetic */ static java.net.URI access$100(com.facebook.internal.ImageRequest$Builder p0)
    {
      return p0.imageUrl;
    }

    /* synthetic */ static com.facebook.internal.ImageRequest$Callback access$200(
            com.facebook.internal.ImageRequest$Builder p0)
    {
      return p0.callback;
    }

    /* synthetic */ static boolean access$300(com.facebook.internal.ImageRequest$Builder p0)
    {
      return p0.allowCachedRedirects;
    }

    /* synthetic */ static Object access$400(com.facebook.internal.ImageRequest$Builder p0)
    {
      return p0.callerTag;
    }

    public com.facebook.internal.ImageRequest build()
    {
      return new com.facebook.internal.ImageRequest(this, null);
    }

    public com.facebook.internal.ImageRequest$Builder setAllowCachedRedirects(boolean p0)
    {
      this.allowCachedRedirects = p0;
      return this;
    }

    public com.facebook.internal.ImageRequest$Builder setCallback(
            com.facebook.internal.ImageRequest$Callback p0)
    {
      this.callback = p0;
      return this;
    }

    public com.facebook.internal.ImageRequest$Builder setCallerTag(Object p0)
    {
      this.callerTag = p0;
      return this;
    }

}
