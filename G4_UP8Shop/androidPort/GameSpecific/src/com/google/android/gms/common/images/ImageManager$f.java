// Decompiled from classes.dex (SourceFile: ImageManager$f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import android.os.SystemClock;
import com.google.android.gms.internal.gy;
final class ImageManager$f implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.common.images.ImageManager a;
    private final android.net.Uri b;
    private final android.graphics.Bitmap c;
    private final java.util.concurrent.CountDownLatch d;
    private boolean e;

    // Methods
    public ImageManager$f(
            com.google.android.gms.common.images.ImageManager p0,
            android.net.Uri p1,
            android.graphics.Bitmap p2,
            boolean p3,
            java.util.concurrent.CountDownLatch p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.e = p3;
      this.d = p4;
    
    }

    private void a(com.google.android.gms.common.images.ImageManager$ImageReceiver p0, boolean p1)
    {
      java.util.ArrayList v3;
      int v4;
      int i;
      com.google.android.gms.common.images.a v6;
      v3 = ImageManager$ImageReceiver.a(p0);
      v4 = v3.size();
      for ( i = 0; i < v4; ++i )
      {
        v6 = (com.google.android.gms.common.images.a)v3.get(i);
        if ( p1 )
        {
          v6.a(ImageManager.b(this.a), this.c, false);
        }
        else
        {
          ImageManager.d(this.a).put(this.b, Long.valueOf(SystemClock.elapsedRealtime()));
          v6.a(ImageManager.b(this.a), ImageManager.c(this.a), false);
        }
        if ( !(v6 instanceof com.google.android.gms.common.images.a$c) )
          ImageManager.a(this.a).remove(v6);
      }
    }

    public final void run()
    {
      boolean v1;
      com.google.android.gms.common.images.ImageManager$ImageReceiver v2;
      java.util.ArrayList v3;
      int v4;
      int i;
      com.google.android.gms.common.images.a v6;
      Object v7;
      gy.ay("OnBitmapLoadedRunnable must be executed in the main thread");
      v1 = this.c != null;
      if ( ImageManager.h(this.a) != null )
      {
        if ( this.e )
        {
          ImageManager.h(this.a).a();
          System.gc();
          this.e = false;
          ImageManager.g(this.a).post((Runnable)this);
          return;
        }
        if ( v1 )
          ImageManager.h(this.a).b(new com.google.android.gms.common.images.a$a(this.b), this.c);
      }
      v2 = (com.google.android.gms.common.images.ImageManager$ImageReceiver)ImageManager.e(this.a).remove(this.b);
      if ( v2 != null )
      {
        v3 = ImageManager$ImageReceiver.a(v2);
        v4 = v3.size();
        for ( i = 0; i < v4; ++i )
        {
          v6 = (com.google.android.gms.common.images.a)v3.get(i);
          if ( v1 )
          {
            v6.a(ImageManager.b(this.a), this.c, false);
          }
          else
          {
            ImageManager.d(this.a).put(this.b, Long.valueOf(SystemClock.elapsedRealtime()));
            v6.a(ImageManager.b(this.a), ImageManager.c(this.a), false);
          }
          if ( !(v6 instanceof com.google.android.gms.common.images.a$c) )
            ImageManager.a(this.a).remove(v6);
        }
      }
      this.d.countDown();
      v7 = ImageManager.eY();
      synchronized ( v7 )
      {
        ImageManager.eZ().remove(this.b);
      }
    }

}
