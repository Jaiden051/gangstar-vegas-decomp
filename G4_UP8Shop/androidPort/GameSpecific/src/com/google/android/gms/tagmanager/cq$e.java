// Decompiled from classes.dex (SourceFile: cq$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.Collections;
public class cq$e {
    // Fields
    private final java.util.List a;
    private final java.util.List b;
    private final java.util.List c;
    private final java.util.List d;
    private final java.util.List e;
    private final java.util.List f;
    private final java.util.List g;
    private final java.util.List h;
    private final java.util.List i;
    private final java.util.List j;

    // Methods
    private cq$e(
            java.util.List<com.google.android.gms.tagmanager.cq$a> p0,
            java.util.List<com.google.android.gms.tagmanager.cq$a> p1,
            java.util.List<com.google.android.gms.tagmanager.cq$a> p2,
            java.util.List<com.google.android.gms.tagmanager.cq$a> p3,
            java.util.List<com.google.android.gms.tagmanager.cq$a> p4,
            java.util.List<com.google.android.gms.tagmanager.cq$a> p5,
            java.util.List<String> p6,
            java.util.List<String> p7,
            java.util.List<String> p8,
            java.util.List<String> p9)
    {
      super();
      this.a = Collections.unmodifiableList(p0);
      this.b = Collections.unmodifiableList(p1);
      this.c = Collections.unmodifiableList(p2);
      this.d = Collections.unmodifiableList(p3);
      this.e = Collections.unmodifiableList(p4);
      this.f = Collections.unmodifiableList(p5);
      this.g = Collections.unmodifiableList(p6);
      this.h = Collections.unmodifiableList(p7);
      this.i = Collections.unmodifiableList(p8);
      this.j = Collections.unmodifiableList(p9);
    }

    /* synthetic */ cq$e(
            java.util.List p0,
            java.util.List p1,
            java.util.List p2,
            java.util.List p3,
            java.util.List p4,
            java.util.List p5,
            java.util.List p6,
            java.util.List p7,
            java.util.List p8,
            java.util.List p9,
            int p10)
    {
      this(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    }

    public static com.google.android.gms.tagmanager.cq$f mq()
    {
      return new com.google.android.gms.tagmanager.cq$f(0);
    }

    public final java.util.List<com.google.android.gms.tagmanager.cq$a> a()
    {
      return this.a;
    }

    public final java.util.List<com.google.android.gms.tagmanager.cq$a> b()
    {
      return this.b;
    }

    public final java.util.List<com.google.android.gms.tagmanager.cq$a> c()
    {
      return this.c;
    }

    public final java.util.List<com.google.android.gms.tagmanager.cq$a> d()
    {
      return this.d;
    }

    public final java.util.List<com.google.android.gms.tagmanager.cq$a> e()
    {
      return this.e;
    }

    public final java.util.List<String> f()
    {
      return this.g;
    }

    public final java.util.List<String> g()
    {
      return this.h;
    }

    public final java.util.List<String> h()
    {
      return this.i;
    }

    public final java.util.List<String> i()
    {
      return this.j;
    }

    public final java.util.List<com.google.android.gms.tagmanager.cq$a> j()
    {
      return this.f;
    }

    public String toString()
    {
      return "Positive predicates: "
           + this.a
           + "  Negative predicates: "
           + this.b
           + "  Add tags: "
           + this.c
           + "  Remove tags: "
           + this.d
           + "  Add macros: "
           + this.e
           + "  Remove macros: "
           + this.f;
    }

}
