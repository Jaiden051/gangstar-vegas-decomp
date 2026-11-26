// Decompiled from classes.dex (SourceFile: db.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class db extends com.google.android.gms.tagmanager.dc {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.N.toString();
    }

    public db()
    {
      super(a);
    }

    protected final boolean a(String p0, String p1, java.util.Map<String, com.google.android.gms.internal.d$a> p2)
    {
      return p0.startsWith(p1);
    }

}
