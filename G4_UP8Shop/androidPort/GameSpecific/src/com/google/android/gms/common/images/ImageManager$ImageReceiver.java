// Decompiled from classes.dex (SourceFile: ImageManager$ImageReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import android.os.Looper;
import com.google.android.gms.internal.gy;
final class ImageManager$ImageReceiver extends android.os.ResultReceiver {
    // Fields
    final com.google.android.gms.common.images.ImageManager a;
    private final android.net.Uri b;
    private final java.util.ArrayList c;

    // Methods
    ImageManager$ImageReceiver(com.google.android.gms.common.images.ImageManager p0, android.net.Uri p1)
    {
      super(new android.os.Handler(Looper.getMainLooper()));
      this.a = p0;
      this.b = p1;
      this.c = new java.util.ArrayList();
    
    }

    /* synthetic */ static java.util.ArrayList a(
            com.google.android.gms.common.images.ImageManager$ImageReceiver p0)
    {
      return p0.c;
    }

    public final void a()
    {
      android.content.Intent v1;
      v1 = new android.content.Intent("com.google.android.gms.common.images.LOAD_IMAGE");
      v1.putExtra("com.google.android.gms.extras.uri", this.b);
      v1.putExtra("com.google.android.gms.extras.resultReceiver", this);
      v1.putExtra("com.google.android.gms.extras.priority", 3);
      ImageManager.b(this.a).sendBroadcast(v1);
    }

    public final void a(com.google.android.gms.common.images.a p0)
    {
      gy.ay("ImageReceiver.addImageRequest() must be called in the main thread");
      this.c.add(p0);
    }

    public final void b(com.google.android.gms.common.images.a p0)
    {
      gy.ay("ImageReceiver.removeImageRequest() must be called in the main thread");
      this.c.remove(p0);
    }

    public final void onReceiveResult(int p0, android.os.Bundle p1)
    {
      ImageManager.f(this.a).execute((Runnable)new com.google.android.gms.common.images.ImageManager$c(this.a, this.b, (android.os.ParcelFileDescriptor)p1.getParcelable("com.google.android.gms.extra.fileDescriptor")));
    }

}
