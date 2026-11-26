// Decompiled from classes.dex (SourceFile: ImageManager$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import android.graphics.BitmapFactory;
import android.util.Log;
import com.google.android.gms.internal.gy;
final class ImageManager$c implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.common.images.ImageManager a;
    private final android.net.Uri b;
    private final android.os.ParcelFileDescriptor c;

    // Methods
    public ImageManager$c(com.google.android.gms.common.images.ImageManager p0, android.net.Uri p1, android.os.ParcelFileDescriptor p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    
    }

    public final void run()
    {
      boolean v1 = false;
      android.graphics.Bitmap v2 = null;
      java.util.concurrent.CountDownLatch v3 = null;
      OutOfMemoryError _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              gy.az("LoadBitmapFromDiskRunnable can't be executed in the main thread");
              v1 = false;
              v2 = null;
              if ( this.c == null )
              { _pc = 2; continue _sm; }
              _ehCatchPc = 3;
              v2 = BitmapFactory.decodeFileDescriptor(this.c.getFileDescriptor());
              _pc = 1;
              continue _sm;
            case 1:
              try
              {
              this.c.close();
              }
              catch ( java.io.IOException v5 )
              {
              Log.e("ImageManager", "closed failed", v5);
              }
              
              _pc = 2;
              continue _sm;
            case 2:
              v3 = new java.util.concurrent.CountDownLatch(1);
              ImageManager.g(this.a).post((Runnable)new com.google.android.gms.common.images.ImageManager$f(this.a, this.b, v2, v1, v3));
              try
              {
              v3.await();
              return;
              }
              catch ( InterruptedException e )
              {
              Log.w("ImageManager", "Latch interrupted while posting " + this.b);
              }
              
              return;
            case 3:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof OutOfMemoryError) ) { _pc = 4; continue _sm; }
              _cv_1 = (OutOfMemoryError)_ehCaught;
              Log.e("ImageManager", "OOM while loading bitmap for uri: " + this.b, _cv_1);
              v1 = true;
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _pc = 1;
              continue _sm;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

}
