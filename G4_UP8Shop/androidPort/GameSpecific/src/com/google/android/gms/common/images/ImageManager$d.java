// Decompiled from classes.dex (SourceFile: ImageManager$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import android.os.SystemClock;
import com.google.android.gms.internal.gy;
final class ImageManager$d implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.common.images.ImageManager a;
    private final com.google.android.gms.common.images.a b;

    // Methods
    public ImageManager$d(com.google.android.gms.common.images.ImageManager p0, com.google.android.gms.common.images.a p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      com.google.android.gms.common.images.ImageManager$ImageReceiver v1 = null;
      com.google.android.gms.common.images.a$a a = null;
      android.graphics.Bitmap v3 = null;
      Long v4 = null;
      com.google.android.gms.common.images.ImageManager$ImageReceiver v5 = null;
      Object v6 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            gy.ay("LoadImageRunnable must be executed on the main thread");
            v1 = (com.google.android.gms.common.images.ImageManager$ImageReceiver)ImageManager.a(this.a).get(this.b);
            if ( v1 != null )
            {
            ImageManager.a(this.a).remove(this.b);
            v1.b(this.b);
            }
            a = this.b.a;
            if ( a.a == null )
            { _pc = 2; continue _sm; }
            v3 = ImageManager.a(this.a, a);
            if ( !(v3 != null) ) { _pc = 1; continue _sm; }
            {
            this.b.a(ImageManager.b(this.a), v3, true);
            }
            _pc = 5;
            continue _sm;
          case 1:
            v4 = (Long)ImageManager.d(this.a).get(a.a);
            if ( !(v4 != null) ) { _pc = 4; continue _sm; }
            if ( !(SystemClock.elapsedRealtime() - v4.longValue() < 3600000) ) { _pc = 3; continue _sm; }
            _pc = 2;
            continue _sm;
          case 2:
            this.b.a(ImageManager.b(this.a), ImageManager.c(this.a), true);
            return;
          case 3:
            ImageManager.d(this.a).remove(a.a);
            _pc = 4;
            continue _sm;
          case 4:
            this.b.a(ImageManager.b(this.a), ImageManager.c(this.a));
            v5 = (com.google.android.gms.common.images.ImageManager$ImageReceiver)ImageManager.e(this.a).get(a.a);
            if ( v5 == null )
            {
            v5 = new com.google.android.gms.common.images.ImageManager$ImageReceiver(this.a, a.a);
            ImageManager.e(this.a).put(a.a, v5);
            }
            v5.a(this.b);
            if ( !(this.b instanceof com.google.android.gms.common.images.a$c) )
            ImageManager.a(this.a).put(this.b, v5);
            v6 = ImageManager.eY();
            synchronized ( v6 )
            {
            if ( !ImageManager.eZ().contains(a.a) )
            {
            ImageManager.eZ().add(a.a);
            v5.a();
            }
            }
            _pc = 5;
            continue _sm;
          case 5:
            return;
        }
      }
}

}
