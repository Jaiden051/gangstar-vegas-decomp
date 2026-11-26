// Decompiled from classes.dex (SourceFile: ImageManager$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

final class ImageManager$e implements android.content.ComponentCallbacks2 {
    // Fields
    private final com.google.android.gms.common.images.ImageManager$b a;

    // Methods
    public ImageManager$e(com.google.android.gms.common.images.ImageManager$b p0)
    {
      super();
      this.a = p0;
    }

    public final void onConfigurationChanged(android.content.res.Configuration p0)
    {
      ;
    }

    public final void onLowMemory()
    {
      this.a.a();
    }

    public final void onTrimMemory(int p0)
    {
      if ( p0 < 60 )
      {
        if ( p0 >= 20 )
          this.a.a(this.a.b() / 2);
      }
      else
      {
        this.a.a();
      }
    }

}
