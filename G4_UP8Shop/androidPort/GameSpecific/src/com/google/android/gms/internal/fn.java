// Decompiled from classes.dex (SourceFile: fn.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fn implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.fo CREATOR;
    final int a;
    public final int b;
    final android.os.Bundle c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.fo();
    }

    fn(int p0, int p1, android.os.Bundle p2)
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
      fo.a(this, p0, p1);
    }

}
