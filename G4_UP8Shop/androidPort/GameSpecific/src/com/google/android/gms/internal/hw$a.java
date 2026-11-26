// Decompiled from classes.dex (SourceFile: hw$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class hw$a implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.hy CREATOR;
    final int a;
    final java.lang.String b;
    final int c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.hy();
    }

    hw$a(int p0, String p1, int p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    hw$a(String p0, int p1)
    {
      super();
      this.a = 1;
      this.b = p0;
      this.c = p1;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      hy.a(this, p0, p1);
    }

}
