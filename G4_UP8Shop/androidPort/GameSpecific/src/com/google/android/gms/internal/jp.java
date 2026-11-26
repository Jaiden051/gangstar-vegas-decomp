// Decompiled from classes.dex (SourceFile: jp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class jp implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.jq CREATOR;
    final int a;
    private final java.lang.String b;
    private final java.lang.String c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.jq();
    }

    jp(int p0, String p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public final String a()
    {
      return this.b;
    }

    public final String b()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.jp v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.internal.jp )
      {
        v4 = (com.google.android.gms.internal.jp)p0;
        if ( hl.equal(this.b, v4.b) )
          return hl.equal(this.c, v4.c);
      }
      return v2;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = this.b;
      v1[1] = this.c;
      return hl.hashCode(v1);
    }

    public String toString()
    {
      return hl.e(this).a("mPlaceId", this.b).a("mTag", this.c).toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      jq.a(this, p0, p1);
    }

}
