// Decompiled from classes.dex (SourceFile: ImageManager$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import com.google.android.gms.internal.iq;
final class ImageManager$b extends com.google.android.gms.internal.hr {
    // Methods
    public ImageManager$b(android.content.Context p0)
    {
      super(A(p0));
    }

    private static int A(android.content.Context p0)
    {
      android.app.ActivityManager v1;
      int MemoryClass;
      v1 = (android.app.ActivityManager)p0.getSystemService("activity");
      if ( (p0.getApplicationInfo().flags & 0x100000) != 0 && iq.fX() )
        MemoryClass = ImageManager$a.a(v1);
      else
        MemoryClass = v1.getMemoryClass();
      return (int)((float)(MemoryClass << 20) * 0.33f);
    }

    private void a(
            boolean p0,
            com.google.android.gms.common.images.a$a p1,
            android.graphics.Bitmap p2,
            android.graphics.Bitmap p3)
    {
      ;
    }

    private static int a$67a168fe(android.graphics.Bitmap p0)
    {
      return p0.getHeight() * p0.getRowBytes();
    }

    /* synthetic */ protected final int a(Object p0, Object p1)
    {
      android.graphics.Bitmap v3;
      v3 = (android.graphics.Bitmap)p1;
      return v3.getHeight() * v3.getRowBytes();
    }

    /* synthetic */ protected final void a(boolean p0, Object p1, Object p2, Object p3)
    {
      ;
    }

}
