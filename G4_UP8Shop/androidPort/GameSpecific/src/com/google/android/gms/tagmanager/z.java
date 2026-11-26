// Decompiled from classes.dex (SourceFile: z.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.provider.Settings;
class z extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private final android.content.Context b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.D.toString();
    }

    public z(android.content.Context p0)
    {
      super(a, new String[0]);
      this.b = p0;
    }

    private static String L(android.content.Context p0)
    {
      return Settings.Secure.getString(p0.getContentResolver(), "android_id");
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      String String; // RETVAL
    
      String = Settings.Secure.getString(this.b.getContentResolver(), "android_id");
      if ( String != null )
        return dh.r(String);
      else
        return dh.mY();
    }

    public final boolean a()
    {
      return true;
    }

}
