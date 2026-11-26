// Decompiled from classes.dex (SourceFile: w.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class w implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.x CREATOR;
    public final int a;
    public final boolean b;
    public final boolean c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.x();
    }

    w(int p0, boolean p1, boolean p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public w(boolean p0, boolean p1)
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
      com.google.android.gms.internal.x.a(this, p0, p1);
    }

}
