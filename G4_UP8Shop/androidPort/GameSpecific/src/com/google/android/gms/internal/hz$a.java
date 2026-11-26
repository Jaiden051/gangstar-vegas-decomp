// Decompiled from classes.dex (SourceFile: hz$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class hz$a<I, O> implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ia CREATOR;
    protected final int a;
    protected final boolean b;
    protected final int c;
    protected final boolean d;
    protected final java.lang.String e;
    protected final int f;
    protected final java.lang.Class g;
    protected final java.lang.String h;
    private final int i;
    private com.google.android.gms.internal.ic j;
    private com.google.android.gms.internal.hz$b k;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ia();
    }

    hz$a(int p0, int p1, boolean p2, int p3, boolean p4, String p5, int p6, String p7, com.google.android.gms.internal.hu p8)
    {
      super();
      this.i = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
      this.f = p6;
      if ( p7 != null )
      {
        this.g = com.google.android.gms.internal.Decomp_if.class;
        this.h = p7;
      }
      else
      {
        this.g = null;
        this.h = null;
      }
      if ( p8 != null )
        this.k = p8.c();
      else
        this.k = null;
    }

    private hz$a(
            int p0,
            boolean p1,
            int p2,
            boolean p3,
            String p4,
            int p5,
            Class<? extends com.google.android.gms.internal.hz> p6,
            com.google.android.gms.internal.hz$b<I, O> p7)
    {
      super();
      this.i = 1;
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
      if ( p6 != null )
        this.h = p6.getCanonicalName();
      else
        this.h = null;
      this.k = p7;
    }

    public static com.google.android.gms.internal.hz$a a(
            String p0,
            int p1,
            com.google.android.gms.internal.hz$b<?, ?> p2,
            boolean p3)
    {
      return new com.google.android.gms.internal.hz$a(p2.c(), p3, p2.d(), false, p0, p1, null, p2);
    }

    public static <T extends com.google.android.gms.internal.hz> com.google.android.gms.internal.hz$a<T, T> a(
            String p0,
            int p1,
            Class<T> p2)
    {
      return new com.google.android.gms.internal.hz$a(11, false, 11, false, p0, p1, p2, null);
    }

    public static <T extends com.google.android.gms.internal.hz> com.google.android.gms.internal.hz$a<java.util.ArrayList<T>, java.util.ArrayList<T>> b(
            String p0,
            int p1,
            Class<T> p2)
    {
      return new com.google.android.gms.internal.hz$a(11, true, 11, true, p0, p1, p2, null);
    }

    /* synthetic */ static com.google.android.gms.internal.hz$b c(com.google.android.gms.internal.hz$a p0)
    {
      return p0.k;
    }

    public static com.google.android.gms.internal.hz$a<Integer, Integer> g(String p0, int p1)
    {
      return new com.google.android.gms.internal.hz$a(0, false, 0, false, p0, p1, null, null);
    }

    public static com.google.android.gms.internal.hz$a<Double, Double> h(String p0, int p1)
    {
      return new com.google.android.gms.internal.hz$a(4, false, 4, false, p0, p1, null, null);
    }

    public static com.google.android.gms.internal.hz$a<Boolean, Boolean> i(String p0, int p1)
    {
      return new com.google.android.gms.internal.hz$a(6, false, 6, false, p0, p1, null, null);
    }

    public static com.google.android.gms.internal.hz$a<String, String> j(String p0, int p1)
    {
      return new com.google.android.gms.internal.hz$a(7, false, 7, false, p0, p1, null, null);
    }

    public static com.google.android.gms.internal.hz$a<java.util.ArrayList<String>, java.util.ArrayList<String>> k(
            String p0,
            int p1)
    {
      return new com.google.android.gms.internal.hz$a(7, true, 7, true, p0, p1, null, null);
    }

    public final com.google.android.gms.internal.hz$a<I, O> a()
    {
      return new com.google.android.gms.internal.hz$a(this.i, this.a, this.b, this.c, this.d, this.e, this.f, this.h, this.l());
    }

    public final I a(O p0)
    {
      return (I)this.k.a(p0);
    }

    public final void a(com.google.android.gms.internal.ic p0)
    {
      this.j = p0;
    }

    public final int b()
    {
      return this.i;
    }

    public final int c()
    {
      return this.a;
    }

    public final boolean d()
    {
      return this.b;
    }

    public int describeContents()
    {
      return 0;
    }

    public final int e()
    {
      return this.c;
    }

    public final boolean f()
    {
      return this.d;
    }

    public final String g()
    {
      return this.e;
    }

    public final int h()
    {
      return this.f;
    }

    public final Class<? extends com.google.android.gms.internal.hz> i()
    {
      return this.g;
    }

    final String j()
    {
      if ( this.h != null )
        return this.h;
      else
        return null;
    }

    public final boolean k()
    {
      return this.k != null;
    }

    final com.google.android.gms.internal.hu l()
    {
      if ( this.k != null )
        return hu.a(this.k);
      else
        return null;
    }

    public final java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> m()
    {
      hn.f(this.h);
      hn.f(this.j);
      return this.j.a(this.h);
    }

    public String toString()
    {
      StringBuilder v1;
      StringBuilder v2;
      String CanonicalName;
      v1 = new StringBuilder();
      v1.append("Field\n");
      v1.append("            versionCode=").append(this.i).append(0xA);
      v1.append("                 typeIn=").append(this.a).append(0xA);
      v1.append("            typeInArray=").append(this.b).append(0xA);
      v1.append("                typeOut=").append(this.c).append(0xA);
      v1.append("           typeOutArray=").append(this.d).append(0xA);
      v1.append("        outputFieldName=").append(this.e).append(0xA);
      v1.append("      safeParcelFieldId=").append(this.f).append(0xA);
      v1.append("       concreteTypeName=").append(this.j()).append(0xA);
      if ( this.g != null )
        v1.append("     concreteType.class=").append(this.g.getCanonicalName()).append(0xA);
      v2 = v1.append("          converterName=");
      if ( this.k != null )
        CanonicalName = this.k.getClass().getCanonicalName();
      else
        CanonicalName = "null";
      v2.append(CanonicalName).append(0xA);
      return v1.toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ia.a(this, p0, p1);
    }

}
