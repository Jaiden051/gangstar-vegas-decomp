// Decompiled from classes.dex (SourceFile: ch.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.regex.Pattern;
class ch extends com.google.android.gms.tagmanager.dc {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.M.toString();
      b = com.google.android.gms.internal.b.aK.toString();
    }

    public ch()
    {
      super(a);
    }

    protected final boolean a(String p0, String p1, java.util.Map<String, com.google.android.gms.internal.d$a> p2)
    {
      int v4;
      if ( dh.n((com.google.android.gms.internal.d$a)p2.get(b)).booleanValue() )
        v4 = 66;
      else
        v4 = 64;
      try
      {
        return Pattern.compile(p1, v4).matcher(p0).find();
      }
      catch ( java.util.regex.PatternSyntaxException e )
      {
        return false;
      }
    }

}
