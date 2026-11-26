// Decompiled from classes.dex (SourceFile: ICUCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

import android.os.Build;
public class ICUCompat {
    // Fields
    private static final android.support.v4.text.b a;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 14 )
        a = (android.support.v4.text.b)new android.support.v4.text.c();
      else
        a = (android.support.v4.text.b)new android.support.v4.text.d();
    }

    public ICUCompat()
    {
      super();
    }

    public static String addLikelySubtags(String p0)
    {
      return a.b(p0);
    }

    public static String getScript(String p0)
    {
      return a.a(p0);
    }

}
