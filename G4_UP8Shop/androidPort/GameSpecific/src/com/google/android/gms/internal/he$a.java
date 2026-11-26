// Decompiled from classes.dex (SourceFile: he$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class he$a {
    // Fields
    final com.google.android.gms.internal.he a;
    private final java.lang.String b;
    private final com.google.android.gms.internal.he$a$a c;
    private final java.util.HashSet d;
    private int e;
    private boolean f;
    private android.os.IBinder g;
    private android.content.ComponentName h;

    // Methods
    public he$a(com.google.android.gms.internal.he p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = new com.google.android.gms.internal.he$a$a(this);
      this.d = new java.util.HashSet();
      this.e = 0;
    
    }

    /* synthetic */ static int a(com.google.android.gms.internal.he$a p0, int p1)
    {
      p0.e = p1;
      return p1;
    }

    /* synthetic */ static android.content.ComponentName a(
            com.google.android.gms.internal.he$a p0,
            android.content.ComponentName p1)
    {
      p0.h = p1;
      return p1;
    }

    /* synthetic */ static android.os.IBinder a(com.google.android.gms.internal.he$a p0, android.os.IBinder p1)
    {
      p0.g = p1;
      return p1;
    }

    /* synthetic */ static java.util.HashSet a(com.google.android.gms.internal.he$a p0)
    {
      return p0.d;
    }

    public final com.google.android.gms.internal.he$a$a a()
    {
      return this.c;
    }

    public final void a(com.google.android.gms.internal.hc$f p0)
    {
      this.d.add(p0);
    }

    public final void a(boolean p0)
    {
      this.f = p0;
    }

    public final String b()
    {
      return this.b;
    }

    public final void b(com.google.android.gms.internal.hc$f p0)
    {
      this.d.remove(p0);
    }

    public final boolean c()
    {
      return this.f;
    }

    public final boolean c(com.google.android.gms.internal.hc$f p0)
    {
      return this.d.contains(p0);
    }

    public final int d()
    {
      return this.e;
    }

    public final boolean e()
    {
      return this.d.isEmpty();
    }

    public final android.os.IBinder f()
    {
      return this.g;
    }

    public final android.content.ComponentName g()
    {
      return this.h;
    }

}
