// Decompiled from classes.dex (SourceFile: aj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

abstract class aj {
    // Fields
    private final java.util.Set a;
    private final java.lang.String b;

    // Methods
    public aj(String p0, String[] p1)
    {
      super();
      int v3;
      int i;
      this.b = p0;
      this.a = new java.util.HashSet(p1.length);
      v3 = p1.length;
      for ( i = 0; i < v3; ++i )
        this.a.add(p1[i]);
    
    }

    public abstract com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0) throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me;

    public abstract boolean a();

    final boolean a(java.util.Set<String> p0)
    {
      return p0.containsAll(this.a);
    }

    public final String b()
    {
      return this.b;
    }

    public final java.util.Set<String> c()
    {
      return this.a;
    }

}
