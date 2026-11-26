// Decompiled from classes.dex (SourceFile: lj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class lj implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String[] a;
    byte[][] b;
    private final int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.internal.lk();
    }

    lj()
    {
      this(1, new String[0], new byte[0][]);
    }

    lj(int p0, String[] p1, byte[][] p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = (byte[][])p2;
    }

    public final int a()
    {
      return this.c;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      lk.a(this, p0, p1);
    }

}
