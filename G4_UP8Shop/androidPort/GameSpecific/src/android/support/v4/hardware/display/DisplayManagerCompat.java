// Decompiled from classes.dex (SourceFile: DisplayManagerCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.hardware.display;

import android.os.Build;
public abstract class DisplayManagerCompat {
    // Fields
    public static java.lang.String a;
    private static final java.util.WeakHashMap b;

    // Methods
    static
    {
      b = new java.util.WeakHashMap();
    }

    DisplayManagerCompat()
    {
      super();
    }

    public static android.support.v4.hardware.display.DisplayManagerCompat getInstance(
            android.content.Context p0)
    {
      java.util.WeakHashMap v1;
      android.support.v4.hardware.display.DisplayManagerCompat v2;
      v1 = b;
      synchronized ( v1 )
      {
        v2 = (android.support.v4.hardware.display.DisplayManagerCompat)b.get(p0);
        if ( v2 == null )
        {
          if ( Build.VERSION.SDK_INT < 17 )
            v2 = new android.support.v4.hardware.display.b(p0);
          else
            v2 = new android.support.v4.hardware.display.a(p0);
          b.put(p0, v2);
        }
        return v2;
      }
    }

    public abstract android.view.Display a(int p0);

    public abstract android.view.Display[] a();

    public abstract android.view.Display[] a(java.lang.String p0);

}
