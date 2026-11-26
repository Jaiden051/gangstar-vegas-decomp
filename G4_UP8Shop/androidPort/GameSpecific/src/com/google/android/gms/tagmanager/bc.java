// Decompiled from classes.dex (SourceFile: bc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.Locale;
class bc extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.r.toString();
    }

    public bc()
    {
      super(a, new String[0]);
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      java.util.Locale Default; // RETVAL
      String Language; // RETVAL
    
      Default = Locale.getDefault();
      if ( Default != null && (Language = Default.getLanguage()) != null )
        return dh.r(Language.toLowerCase());
      else
        return dh.mY();
    }

    public final boolean a()
    {
      return false;
    }

}
