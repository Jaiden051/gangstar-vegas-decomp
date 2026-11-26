// Decompiled from classes.dex (SourceFile: lh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class lh implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    int[] a;
    private final int b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.internal.li();
    }

    lh()
    {
      this(1, null);
    }

    lh(int p0, int[] p1)
    {
      super();
      this.b = p0;
      this.a = (int[])p1;
    }

    public final int a()
    {
      return this.b;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      li.a(this, p0, p1);
    }

}
