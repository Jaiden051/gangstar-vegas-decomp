// Decompiled from classes.dex (SourceFile: ic.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ic implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.id CREATOR;
    private final int a;
    private final java.util.HashMap b;
    private final java.util.ArrayList c;
    private final java.lang.String d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.id();
    }

    ic(int p0, java.util.ArrayList<com.google.android.gms.internal.ic$a> p1, String p2)
    {
      super();
      this.a = p0;
      this.c = null;
      this.b = b(p1);
      this.d = (String)hn.f(p2);
      this.a();
    }

    public ic(Class<? extends com.google.android.gms.internal.hz> p0)
    {
      super();
      this.a = 1;
      this.c = null;
      this.b = new java.util.HashMap();
      this.d = p0.getCanonicalName();
    }

    private static java.util.HashMap<String, java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>>> b(
            java.util.ArrayList<com.google.android.gms.internal.ic$a> p0)
    {
      java.util.HashMap v1;
      int v2;
      int i;
      com.google.android.gms.internal.ic$a v4;
      v1 = new java.util.HashMap();
      v2 = p0.size();
      for ( i = 0; i < v2; ++i )
      {
        v4 = (com.google.android.gms.internal.ic$a)p0.get(i);
        v1.put(v4.b, v4.a());
      }
      return v1;
    }

    public final java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> a(String p0)
    {
      return (java.util.HashMap)this.b.get(p0);
    }

    public final void a()
    {
      java.util.Iterator v1;
      java.util.HashMap v2;
      java.util.Iterator i;
      v1 = this.b.keySet().iterator();
      while ( v1.hasNext() )
      {
        v2 = (java.util.HashMap)this.b.get((String)v1.next());
        for ( i = v2.keySet().iterator(); i.hasNext(); ((com.google.android.gms.internal.hz$a)v2.get((String)i.next())).a(this) )
          ;
      }
    }

    public final void a(
            Class<? extends com.google.android.gms.internal.hz> p0,
            java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> p1)
    {
      this.b.put(p0.getCanonicalName(), p1);
    }

    public final boolean a(Class<? extends com.google.android.gms.internal.hz> p0)
    {
      return this.b.containsKey(p0.getCanonicalName());
    }

    public final void b()
    {
      java.util.Iterator v1;
      String v2;
      java.util.HashMap v3;
      java.util.HashMap v4;
      java.util.Iterator v5;
      String v6;
      v1 = this.b.keySet().iterator();
      while ( v1.hasNext() )
      {
        v2 = (String)v1.next();
        v3 = (java.util.HashMap)this.b.get(v2);
        v4 = new java.util.HashMap();
        v5 = v3.keySet().iterator();
        while ( v5.hasNext() )
        {
          v6 = (String)v5.next();
          v4.put(v6, ((com.google.android.gms.internal.hz$a)v3.get(v6)).a());
        }
        this.b.put(v2, v4);
      }
    }

    final int c()
    {
      return this.a;
    }

    final java.util.ArrayList<com.google.android.gms.internal.ic$a> d()
    {
      java.util.ArrayList v1;
      java.util.Iterator v2;
      String v3;
      v1 = new java.util.ArrayList();
      v2 = this.b.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v1.add(new com.google.android.gms.internal.ic$a(v3, (java.util.HashMap)this.b.get(v3)));
      }
      return v1;
    }

    public int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.d;
    }

    public String toString()
    {
      StringBuilder v1;
      java.util.Iterator v2;
      String v3;
      java.util.HashMap v4;
      java.util.Iterator v5;
      String v6;
      v1 = new StringBuilder();
      v2 = this.b.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v1.append(v3).append(":\n");
        v4 = (java.util.HashMap)this.b.get(v3);
        v5 = v4.keySet().iterator();
        while ( v5.hasNext() )
        {
          v6 = (String)v5.next();
          v1.append("  ").append(v6).append(": ");
          v1.append(v4.get(v6));
        }
      }
      return v1.toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      id.a(this, p0, p1);
    }

}
