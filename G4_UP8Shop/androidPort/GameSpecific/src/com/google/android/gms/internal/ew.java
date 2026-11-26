// Decompiled from classes.dex (SourceFile: ew.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ew implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ex CREATOR;
    public final int a;
    public java.lang.String b;
    public int c;
    public int d;
    public boolean e;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ex();
    }

    public ew(int p0, int p1, boolean p2)
    {
      this(1, "afma-sdk-a-v" + 5077000 + ".5077000" + ".0", 5077000, 5077000, true);
    }

    ew(int p0, String p1, int p2, int p3, boolean p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ex.a(this, p0, p1);
    }

}
