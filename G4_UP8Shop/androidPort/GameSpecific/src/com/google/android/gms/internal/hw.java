// Decompiled from classes.dex (SourceFile: hw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class hw implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.internal.hz$b {
    // Fields
    public static final com.google.android.gms.internal.hx CREATOR;
    private final int a;
    private final java.util.HashMap b;
    private final java.util.HashMap c;
    private final java.util.ArrayList d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.hx();
    }

    public hw()
    {
      super();
      this.a = 1;
      this.b = new java.util.HashMap();
      this.c = new java.util.HashMap();
      this.d = null;
    }

    hw(int p0, java.util.ArrayList<com.google.android.gms.internal.hw$a> p1)
    {
      super();
      this.a = p0;
      this.b = new java.util.HashMap();
      this.c = new java.util.HashMap();
      this.d = null;
      this.a(p1);
    }

    private String a(Integer p0)
    {
      String v2;
      v2 = (String)this.c.get(p0);
      if ( v2 == null && this.b.containsKey("gms_unknown") )
        return "gms_unknown";
      return v2;
    }

    private void a(java.util.ArrayList<com.google.android.gms.internal.hw$a> p0)
    {
      java.util.Iterator v2;
      com.google.android.gms.internal.hw$a v3;
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.google.android.gms.internal.hw$a)v2.next();
        this.a(v3.b, v3.c);
      }
    }

    final int a()
    {
      return this.a;
    }

    public final com.google.android.gms.internal.hw a(String p0, int p1)
    {
      this.b.put(p0, Integer.valueOf(p1));
      this.c.put(Integer.valueOf(p1), p0);
      return this;
    }

    /* synthetic */ public final Object a(Object p0)
    {
      String v2;
      v2 = (String)this.c.get((Integer)p0);
      if ( v2 == null && this.b.containsKey("gms_unknown") )
        return "gms_unknown";
      return v2;
    }

    final java.util.ArrayList<com.google.android.gms.internal.hw$a> b()
    {
      java.util.ArrayList v1;
      java.util.Iterator v2;
      String v3;
      v1 = new java.util.ArrayList();
      v2 = this.b.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v1.add(new com.google.android.gms.internal.hw$a(v3, ((Integer)this.b.get(v3)).intValue()));
      }
      return v1;
    }

    public final int c()
    {
      return 7;
    }

    public final int d()
    {
      return 0;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      hx.a(this, p0, p1);
    }

}
