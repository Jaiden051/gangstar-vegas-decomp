// Decompiled from classes.dex (SourceFile: ImageDownloader$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class ImageDownloader$1 implements java.lang.Runnable {
    // Fields
    final android.graphics.Bitmap val$bitmap;
    final com.facebook.internal.ImageRequest$Callback val$callback;
    final java.lang.Exception val$error;
    final boolean val$isCachedRedirect;
    final com.facebook.internal.ImageRequest val$request;

    // Methods
    ImageDownloader$1(
            com.facebook.internal.ImageRequest p0,
            Exception p1,
            boolean p2,
            android.graphics.Bitmap p3,
            com.facebook.internal.ImageRequest$Callback p4)
    {
      super();
      this.val$request = p0;
      this.val$error = p1;
      this.val$isCachedRedirect = p2;
      this.val$bitmap = p3;
      this.val$callback = p4;
    
    }

    public final void run()
    {
      this.val$callback.onCompleted(new com.facebook.internal.ImageResponse(this.val$request, this.val$error, this.val$isCachedRedirect, this.val$bitmap));
    }

}
