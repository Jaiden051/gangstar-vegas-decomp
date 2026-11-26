// Decompiled from classes.dex (SourceFile: DrawableCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.graphics.drawable;

import android.os.Build;
public class DrawableCompat {
    // Fields
    static final android.support.v4.graphics.drawable.b a;

    // Methods
    static
    {
      int v0;
      v0 = Build.VERSION.SDK_INT;
      if ( v0 < 19 )
      {
        if ( v0 < 11 )
          a = (android.support.v4.graphics.drawable.b)new android.support.v4.graphics.drawable.a();
        else
          a = (android.support.v4.graphics.drawable.b)new android.support.v4.graphics.drawable.c();
      }
      else
      {
        a = (android.support.v4.graphics.drawable.b)new android.support.v4.graphics.drawable.d();
      }
    }

    public DrawableCompat()
    {
      super();
    }

    public static boolean isAutoMirrored(android.graphics.drawable.Drawable p0)
    {
      return a.b(p0);
    }

    public static void jumpToCurrentState(android.graphics.drawable.Drawable p0)
    {
      a.a(p0);
    }

    public static void setAutoMirrored(android.graphics.drawable.Drawable p0, boolean p1)
    {
      a.a(p0, p1);
    }

}
