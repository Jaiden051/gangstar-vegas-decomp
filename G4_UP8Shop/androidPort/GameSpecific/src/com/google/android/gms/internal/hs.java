// Decompiled from classes.dex (SourceFile: hs.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class hs implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ht CREATOR;
    final int a;
    public final java.lang.String b;
    public final int c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ht();
    }

    public hs(int p0, String p1, int p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ht.a(this, p0, p1);
    }

}
