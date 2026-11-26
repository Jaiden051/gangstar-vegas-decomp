// Decompiled from classes.dex (SourceFile: gz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class gz {
    // Fields
    private final com.google.android.gms.internal.gz$a a;
    private final android.view.View b;

    // Methods
    public gz(String p0, java.util.Collection<String> p1, int p2, android.view.View p3, String p4)
    {
      super();
      this.a = new com.google.android.gms.internal.gz$a(p0, p1, p2, p4);
      this.b = p3;
    }

    public final String a()
    {
      return this.a.a();
    }

    public final String b()
    {
      return this.a.b();
    }

    public final int c()
    {
      return this.a.c();
    }

    public final java.util.List<String> d()
    {
      return this.a.e();
    }

    public final String[] e()
    {
      return (String[])this.a.e().toArray(new String[0]);
    }

    public final String f()
    {
      return this.a.d();
    }

    public final android.view.View g()
    {
      return this.b;
    }

}
