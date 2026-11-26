// Decompiled from classes.dex (SourceFile: ImageDownloader$CacheReadWorkItem.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class ImageDownloader$CacheReadWorkItem implements java.lang.Runnable {
    // Fields
    private boolean allowCachedRedirects;
    private android.content.Context context;
    private com.facebook.internal.ImageDownloader$RequestKey key;

    // Methods
    ImageDownloader$CacheReadWorkItem(android.content.Context p0, com.facebook.internal.ImageDownloader$RequestKey p1, boolean p2)
    {
      super();
      this.context = p0;
      this.key = p1;
      this.allowCachedRedirects = p2;
    }

    public void run()
    {
      ImageDownloader.access$100(this.key, this.context, this.allowCachedRedirects);
    }

}
