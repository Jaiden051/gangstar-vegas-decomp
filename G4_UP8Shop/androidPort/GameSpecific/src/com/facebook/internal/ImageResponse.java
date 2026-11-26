// Decompiled from classes.dex (SourceFile: ImageResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public class ImageResponse {
    // Fields
    private android.graphics.Bitmap bitmap;
    private java.lang.Exception error;
    private boolean isCachedRedirect;
    private com.facebook.internal.ImageRequest request;

    // Methods
    ImageResponse(com.facebook.internal.ImageRequest p0, Exception p1, boolean p2, android.graphics.Bitmap p3)
    {
      super();
      this.request = p0;
      this.error = p1;
      this.bitmap = p3;
      this.isCachedRedirect = p2;
    }

    public android.graphics.Bitmap getBitmap()
    {
      return this.bitmap;
    }

    public Exception getError()
    {
      return this.error;
    }

    public com.facebook.internal.ImageRequest getRequest()
    {
      return this.request;
    }

    public boolean isCachedRedirect()
    {
      return this.isCachedRedirect;
    }

}
