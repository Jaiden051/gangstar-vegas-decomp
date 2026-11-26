// Decompiled from classes.dex (SourceFile: Assets.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.util;

import android.graphics.BitmapFactory;
import android.util.Base64;
public class Assets {
    // Fields
    public static java.lang.String exit;
    public static java.lang.String info;
    public static java.lang.String pause;
    public static java.lang.String play;

    // Methods
    public Assets()
    {
      super();
    }

    public static android.graphics.drawable.Drawable getDrawableFromBase64(
            android.content.res.Resources p0,
            String p1)
    {
      byte[] v2; // RETVAL
    
      v2 = Base64.decode(p1, 0);
      return new android.graphics.drawable.BitmapDrawable(p0, BitmapFactory.decodeByteArray(v2, 0, v2.length));
    }

}
