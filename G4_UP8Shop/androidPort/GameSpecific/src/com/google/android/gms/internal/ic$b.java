// Decompiled from classes.dex (SourceFile: ic$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ic$b implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ib CREATOR;
    final int a;
    final java.lang.String b;
    final com.google.android.gms.internal.hz$a c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ib();
    }

    ic$b(int p0, String p1, com.google.android.gms.internal.hz$a<?, ?> p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    ic$b(String p0, com.google.android.gms.internal.hz$a<?, ?> p1)
    {
      super();
      this.a = 1;
      this.b = p0;
      this.c = p1;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ib.a(this, p0, p1);
    }

}
