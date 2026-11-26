// Decompiled from classes.dex (SourceFile: gz$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class gz$a implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.hm CREATOR;
    private final int a;
    private final java.lang.String b;
    private final java.util.List c;
    private final int d;
    private final java.lang.String e;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.hm();
    }

    gz$a(int p0, String p1, java.util.List<String> p2, int p3, String p4)
    {
      super();
      this.c = new java.util.ArrayList();
      this.a = p0;
      this.b = p1;
      this.c.addAll(p2);
      this.d = p3;
      this.e = p4;
    }

    public gz$a(String p0, java.util.Collection<String> p1, int p2, String p3)
    {
      this(3, p0, new java.util.ArrayList(p1), p2, p3);
    }

    public final String a()
    {
      return this.b;
    }

    public final String b()
    {
      if ( this.b != null )
        return this.b;
      else
        return "<<default account>>";
    }

    public final int c()
    {
      return this.d;
    }

    public final String d()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final java.util.List<String> e()
    {
      return new java.util.ArrayList(this.c);
    }

    public final int f()
    {
      return this.a;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      hm.a(this, p0, p1);
    }

}
