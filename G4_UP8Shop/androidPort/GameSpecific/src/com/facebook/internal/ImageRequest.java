// Decompiled from classes.dex (SourceFile: ImageRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public class ImageRequest {
    // Fields
    private static java.lang.String HEIGHT_PARAM;
    private static java.lang.String MIGRATION_PARAM;
    private static java.lang.String MIGRATION_VALUE;
    private static java.lang.String PROFILEPIC_URL_FORMAT;
    public static int UNSPECIFIED_DIMENSION;
    private static java.lang.String WIDTH_PARAM;
    private boolean allowCachedRedirects;
    private com.facebook.internal.ImageRequest$Callback callback;
    private java.lang.Object callerTag;
    private android.content.Context context;
    private java.net.URI imageUri;

    // Methods
    private ImageRequest(com.facebook.internal.ImageRequest$Builder p0)
    {
      super();
      Object v2;
      this.context = ImageRequest$Builder.access$000(p0);
      this.imageUri = ImageRequest$Builder.access$100(p0);
      this.callback = ImageRequest$Builder.access$200(p0);
      this.allowCachedRedirects = ImageRequest$Builder.access$300(p0);
      if ( ImageRequest$Builder.access$400(p0) != null )
        v2 = ImageRequest$Builder.access$400(p0);
      else
        v2 = new Object();
      this.callerTag = v2;
    
    }

    /* synthetic */ ImageRequest(com.facebook.internal.ImageRequest$Builder p0, com.facebook.internal.ImageRequest$1 p1)
    {
      this(p0);
    }

    public static java.net.URI getProfilePictureUrl(String p0, int p1, int p2)
 throws java.net.URISyntaxException {
      int v3;
      int v4; // RETVAL
      int v5;
      Object[] v6;
      android.net.Uri.Builder v7;
      Validate.notNullOrEmpty(p0, "userId");
      v3 = Math.max(p1, 0);
      v4 = Math.max(p2, 0);
      v5 = v4;
      if ( v3 == 0 && v4 == 0 )
        throw new IllegalArgumentException("Either width or height must be greater than 0");
      v6 = new Object[1];
      v6[0] = p0;
      v7 = new android.net.Uri.Builder().encodedPath(String.format("https://graph.facebook.com/%s/picture", v6));
      if ( v5 != 0 )
        v7.appendQueryParameter("height", String.valueOf(v5));
      if ( v3 != 0 )
        v7.appendQueryParameter("width", String.valueOf(v3));
      v7.appendQueryParameter("migration_overrides", "{october_2012:true}");
      return new java.net.URI(v7.toString());
    }

    public com.facebook.internal.ImageRequest$Callback getCallback()
    {
      return this.callback;
    }

    public Object getCallerTag()
    {
      return this.callerTag;
    }

    public android.content.Context getContext()
    {
      return this.context;
    }

    public java.net.URI getImageUri()
    {
      return this.imageUri;
    }

    public boolean isCachedRedirectAllowed()
    {
      return this.allowCachedRedirects;
    }

}
