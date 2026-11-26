// Decompiled from classes.dex (SourceFile: cs$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cs$c {
    // Fields
    private final java.util.Set a;
    private final java.util.Map b;
    private final java.util.Map c;
    private final java.util.Map d;
    private final java.util.Map e;
    private com.google.android.gms.tagmanager.cq$a f;

    // Methods
    public cs$c()
    {
      super();
      this.a = new java.util.HashSet();
      this.b = new java.util.HashMap();
      this.d = new java.util.HashMap();
      this.c = new java.util.HashMap();
      this.e = new java.util.HashMap();
    }

    public final java.util.Set<com.google.android.gms.tagmanager.cq$e> a()
    {
      return this.a;
    }

    public final void a(com.google.android.gms.tagmanager.cq$a p0)
    {
      this.f = p0;
    }

    public final void a(com.google.android.gms.tagmanager.cq$e p0)
    {
      this.a.add(p0);
    }

    public final void a(com.google.android.gms.tagmanager.cq$e p0, com.google.android.gms.tagmanager.cq$a p1)
    {
      java.util.ArrayList v3;
      v3 = (java.util.ArrayList)this.b.get(p0);
      if ( v3 == null )
      {
        v3 = new java.util.ArrayList();
        this.b.put(p0, v3);
      }
      v3.add(p1);
    }

    public final void a(com.google.android.gms.tagmanager.cq$e p0, String p1)
    {
      java.util.ArrayList v3;
      v3 = (java.util.ArrayList)this.d.get(p0);
      if ( v3 == null )
      {
        v3 = new java.util.ArrayList();
        this.d.put(p0, v3);
      }
      v3.add(p1);
    }

    public final java.util.Map<com.google.android.gms.tagmanager.cq$e, java.util.List<com.google.android.gms.tagmanager.cq$a>> b()
    {
      return this.b;
    }

    public final void b(com.google.android.gms.tagmanager.cq$e p0, com.google.android.gms.tagmanager.cq$a p1)
    {
      java.util.ArrayList v3;
      v3 = (java.util.ArrayList)this.c.get(p0);
      if ( v3 == null )
      {
        v3 = new java.util.ArrayList();
        this.c.put(p0, v3);
      }
      v3.add(p1);
    }

    public final void b(com.google.android.gms.tagmanager.cq$e p0, String p1)
    {
      java.util.ArrayList v3;
      v3 = (java.util.ArrayList)this.e.get(p0);
      if ( v3 == null )
      {
        v3 = new java.util.ArrayList();
        this.e.put(p0, v3);
      }
      v3.add(p1);
    }

    public final java.util.Map<com.google.android.gms.tagmanager.cq$e, java.util.List<String>> c()
    {
      return this.d;
    }

    public final java.util.Map<com.google.android.gms.tagmanager.cq$e, java.util.List<String>> d()
    {
      return this.e;
    }

    public final java.util.Map<com.google.android.gms.tagmanager.cq$e, java.util.List<com.google.android.gms.tagmanager.cq$a>> e()
    {
      return this.c;
    }

    public final com.google.android.gms.tagmanager.cq$a f()
    {
      return this.f;
    }

}
