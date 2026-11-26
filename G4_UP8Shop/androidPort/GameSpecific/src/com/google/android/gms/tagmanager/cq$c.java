// Decompiled from classes.dex (SourceFile: cq$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.Collections;
public class cq$c {
    // Fields
    private final java.util.List a;
    private final java.util.Map b;
    private final java.lang.String c;
    private final int d;

    // Methods
    private cq$c(
            java.util.List<com.google.android.gms.tagmanager.cq$e> p0,
            java.util.Map<String, java.util.List<com.google.android.gms.tagmanager.cq$a>> p1,
            String p2,
            int p3)
    {
      super();
      this.a = Collections.unmodifiableList(p0);
      this.b = Collections.unmodifiableMap(p1);
      this.c = p2;
      this.d = p3;
    }

    /* synthetic */ cq$c(java.util.List p0, java.util.Map p1, String p2, int p3, int p4)
    {
      this(p0, p1, p2, p3);
    }

    public static com.google.android.gms.tagmanager.cq$d mm()
    {
      return new com.google.android.gms.tagmanager.cq$d(0);
    }

    public final java.util.List<com.google.android.gms.tagmanager.cq$e> a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.c;
    }

    public final java.util.Map<String, java.util.List<com.google.android.gms.tagmanager.cq$a>> c()
    {
      return this.b;
    }

    public String toString()
    {
      return "Rules: " + this.a + "  Macros: " + this.b;
    }

}
