// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

final class e {
    // Fields
    static java.lang.String a;
    static java.lang.String b;
    static java.lang.String c;
    static java.lang.String d;
    final long e;
    final java.lang.String f;
    final java.lang.String g;
    final java.lang.String h;
    final java.lang.String i;
    final int j;
    final int k;
    final int l;
    com.google.android.apps.analytics.CustomVariableBuffer m;
    private int n;
    private int o;
    private int p;
    private int q;
    private int r;
    private int s;
    private int t;
    private boolean u;
    private boolean v;
    private com.google.android.apps.analytics.Transaction w;
    private com.google.android.apps.analytics.Item x;

    // Methods
    e(
            long p0,
            String p2,
            int p3,
            int p4,
            int p5,
            int p6,
            int p7,
            String p8,
            String p9,
            String p10,
            int p11,
            int p12,
            int p13)
    {
      super();
      this.e = p0;
      this.f = p2;
      this.n = p3;
      this.p = p4;
      this.q = p5;
      this.r = p6;
      this.s = p7;
      this.g = p8;
      this.h = p9;
      this.i = p10;
      this.j = p11;
      this.l = p13;
      this.k = p12;
      this.t = -1;
      this.v = false;
    }

    e(com.google.android.apps.analytics.e p0, String p1)
    {
      this(p0.e, p1, p0.n, p0.p, p0.q, p0.r, p0.s, p0.g, p0.h, p0.i, p0.j, p0.k, p0.l);
      this.o = p0.o;
      this.t = p0.t;
      this.u = p0.u;
      this.v = p0.v;
      this.m = p0.m;
      this.w = p0.w;
      this.x = p0.x;
    }

    e(String p0, String p1, String p2, String p3, int p4, int p5, int p6)
    {
      this(-1, p0, -1, -1, -1, -1, -1, p1, p2, p3, p4, p5, p6);
    }

    final int a()
    {
      return this.n;
    }

    final void a(int p0)
    {
      this.n = p0;
    }

    public final void a(com.google.android.apps.analytics.CustomVariableBuffer p0)
    {
      this.m = p0;
    }

    public final void a(com.google.android.apps.analytics.Item p0)
    {
      if ( !this.g.equals("__##GOOGLEITEM##__") )
        throw new IllegalStateException("Attempted to add an item to an event of type " + this.g);
      this.x = p0;
    }

    public final void a(com.google.android.apps.analytics.Transaction p0)
    {
      if ( !this.g.equals("__##GOOGLETRANSACTION##__") )
        throw new IllegalStateException("Attempted to add a transction to an event of type " + this.g);
      this.w = p0;
    }

    final void a(boolean p0)
    {
      this.u = p0;
    }

    final int b()
    {
      return this.o;
    }

    final void b(int p0)
    {
      this.o = p0;
    }

    final void b(boolean p0)
    {
      this.v = p0;
    }

    final int c()
    {
      return this.p;
    }

    final void c(int p0)
    {
      this.p = p0;
    }

    final int d()
    {
      return this.q;
    }

    final void d(int p0)
    {
      this.q = p0;
    }

    final int e()
    {
      return this.r;
    }

    final void e(int p0)
    {
      this.r = p0;
    }

    final int f()
    {
      return this.s;
    }

    final void f(int p0)
    {
      this.s = p0;
    }

    final int g()
    {
      return this.t;
    }

    final void g(int p0)
    {
      this.t = p0;
    }

    final boolean h()
    {
      return this.u;
    }

    final boolean i()
    {
      return this.v;
    }

    public final com.google.android.apps.analytics.CustomVariableBuffer j()
    {
      return this.m;
    }

    public final com.google.android.apps.analytics.Transaction k()
    {
      return this.w;
    }

    public final com.google.android.apps.analytics.Item l()
    {
      return this.x;
    }

    public final boolean m()
    {
      return this.p != -1;
    }

    public final String toString()
    {
      return "id:"
           + this.e
           + " random:"
           + this.n
           + " timestampCurrent:"
           + this.r
           + " timestampPrevious:"
           + this.q
           + " timestampFirst:"
           + this.p
           + " visits:"
           + this.s
           + " value:"
           + this.j
           + " category:"
           + this.g
           + " action:"
           + this.h
           + " label:"
           + this.i
           + " width:"
           + this.k
           + " height:"
           + this.l;
    }

}
