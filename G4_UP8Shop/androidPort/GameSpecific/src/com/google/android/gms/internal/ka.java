// Decompiled from classes.dex (SourceFile: ka.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Locale;
public class ka {
    // Fields
    private static final java.lang.String a;
    private final com.google.android.gms.internal.jk b;
    private final com.google.android.gms.internal.kb c;
    private final java.util.Locale d;

    // Methods
    static
    {
      a = com.google.android.gms.internal.ka.class.getSimpleName();
    }

    public ka(String p0, com.google.android.gms.internal.jk<com.google.android.gms.internal.jf> p1)
    {
      super();
      this.b = p1;
      this.d = Locale.getDefault();
      this.c = new com.google.android.gms.internal.kb(p0, this.d);
    }

}
