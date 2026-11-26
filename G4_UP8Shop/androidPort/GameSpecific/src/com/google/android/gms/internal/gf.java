// Decompiled from classes.dex (SourceFile: gf.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class gf implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int a;
    private java.lang.String b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.internal.gg();
    }

    public gf()
    {
      this(1, null);
    }

    gf(int p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final int a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.b;
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      return p0 == this
          || p0 instanceof com.google.android.gms.internal.gf && gj.a(this.b, ((com.google.android.gms.internal.gf)p0).b);
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[1];
      v1[0] = this.b;
      return hl.hashCode(v1);
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      gg.a(this, p0, p1);
    }

}
