// Decompiled from classes.dex (SourceFile: ImageDownloader$DownloadImageWorkItem.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class ImageDownloader$DownloadImageWorkItem implements java.lang.Runnable {
    // Fields
    private android.content.Context context;
    private com.facebook.internal.ImageDownloader$RequestKey key;

    // Methods
    ImageDownloader$DownloadImageWorkItem(android.content.Context p0, com.facebook.internal.ImageDownloader$RequestKey p1)
    {
      super();
      this.context = p0;
      this.key = p1;
    }

    public void run()
    {
      ImageDownloader.access$200(this.key, this.context);
    }

}
