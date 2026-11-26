// Decompiled from classes.dex (SourceFile: ImageManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import android.os.Looper;
import com.google.android.gms.internal.gy;
import com.google.android.gms.internal.iq;
import java.util.concurrent.Executors;
public final class ImageManager {
    // Fields
    private static final java.lang.Object a;
    private static java.util.HashSet b;
    private static com.google.android.gms.common.images.ImageManager c;
    private static com.google.android.gms.common.images.ImageManager d;
    private final android.content.Context e;
    private final android.os.Handler f;
    private final java.util.concurrent.ExecutorService g;
    private final com.google.android.gms.common.images.ImageManager$b h;
    private final com.google.android.gms.internal.gx i;
    private final java.util.Map j;
    private final java.util.Map k;
    private final java.util.Map l;

    // Methods
    static
    {
      a = new Object();
      b = new java.util.HashSet();
    }

    private ImageManager(android.content.Context p0, boolean p1)
    {
      super();
      this.e = p0.getApplicationContext();
      this.f = new android.os.Handler(Looper.getMainLooper());
      this.g = Executors.newFixedThreadPool(4);
      if ( p1 )
      {
        this.h = new com.google.android.gms.common.images.ImageManager$b(this.e);
        if ( iq.ga() )
          this.e.registerComponentCallbacks((android.content.ComponentCallbacks)new com.google.android.gms.common.images.ImageManager$e(this.h));
      }
      else
      {
        this.h = null;
      }
      this.i = new com.google.android.gms.internal.gx();
      this.j = new java.util.HashMap();
      this.k = new java.util.HashMap();
      this.l = new java.util.HashMap();
    }

    /* synthetic */ static android.graphics.Bitmap a(
            com.google.android.gms.common.images.ImageManager p0,
            com.google.android.gms.common.images.a$a p1)
    {
      if ( p0.h != null )
        return (android.graphics.Bitmap)p0.h.a(p1);
      else
        return null;
    }

    private android.graphics.Bitmap a(com.google.android.gms.common.images.a$a p0)
    {
      if ( this.h != null )
        return (android.graphics.Bitmap)this.h.a(p0);
      else
        return null;
    }

    public static com.google.android.gms.common.images.ImageManager a(android.content.Context p0, boolean p1)
    {
      if ( p1 )
      {
        if ( d == null )
          d = new com.google.android.gms.common.images.ImageManager(p0, true);
        return d;
      }
      else
      {
        if ( c == null )
          c = new com.google.android.gms.common.images.ImageManager(p0, false);
        return c;
      }
    }

    /* synthetic */ static java.util.Map a(com.google.android.gms.common.images.ImageManager p0)
    {
      return p0.j;
    }

    private void a()
    {
      this.e.registerComponentCallbacks((android.content.ComponentCallbacks)new com.google.android.gms.common.images.ImageManager$e(this.h));
    }

    private void a(android.widget.ImageView p0, int p1)
    {
      this.a(new com.google.android.gms.common.images.a$b(p0, p1));
    }

    private void a(android.widget.ImageView p0, android.net.Uri p1)
    {
      this.a(new com.google.android.gms.common.images.a$b(p0, p1));
    }

    private void a(android.widget.ImageView p0, android.net.Uri p1, int p2)
    {
      com.google.android.gms.common.images.a$b v4;
      v4 = new com.google.android.gms.common.images.a$b(p0, p1);
      v4.a(p2);
      this.a(v4);
    }

    private void a(
            com.google.android.gms.common.images.ImageManager$OnImageLoadedListener p0,
            android.net.Uri p1)
    {
      this.a(new com.google.android.gms.common.images.a$c(p0, p1));
    }

    private void a(
            com.google.android.gms.common.images.ImageManager$OnImageLoadedListener p0,
            android.net.Uri p1,
            int p2)
    {
      com.google.android.gms.common.images.a$c v4;
      v4 = new com.google.android.gms.common.images.a$c(p0, p1);
      v4.a(p2);
      this.a(v4);
    }

    private void a(com.google.android.gms.common.images.a p0)
    {
      gy.ay("ImageManager.loadImage() must be called in the main thread");
      ((Runnable)new com.google.android.gms.common.images.ImageManager$d(this, p0)).run();
    }

    /* synthetic */ static android.content.Context b(com.google.android.gms.common.images.ImageManager p0)
    {
      return p0.e;
    }

    /* synthetic */ static com.google.android.gms.internal.gx c(
            com.google.android.gms.common.images.ImageManager p0)
    {
      return p0.i;
    }

    public static com.google.android.gms.common.images.ImageManager create(android.content.Context p0)
    {
      return a(p0, false);
    }

    /* synthetic */ static java.util.Map d(com.google.android.gms.common.images.ImageManager p0)
    {
      return p0.l;
    }

    /* synthetic */ static java.util.Map e(com.google.android.gms.common.images.ImageManager p0)
    {
      return p0.k;
    }

    /* synthetic */ static Object eY()
    {
      return a;
    }

    /* synthetic */ static java.util.HashSet eZ()
    {
      return b;
    }

    /* synthetic */ static java.util.concurrent.ExecutorService f(
            com.google.android.gms.common.images.ImageManager p0)
    {
      return p0.g;
    }

    /* synthetic */ static android.os.Handler g(com.google.android.gms.common.images.ImageManager p0)
    {
      return p0.f;
    }

    /* synthetic */ static com.google.android.gms.common.images.ImageManager$b h(
            com.google.android.gms.common.images.ImageManager p0)
    {
      return p0.h;
    }

}
