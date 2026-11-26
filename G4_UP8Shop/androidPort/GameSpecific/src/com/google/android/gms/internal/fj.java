// Decompiled from classes.dex (SourceFile: fj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fj implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.fk CREATOR;
    final int a;
    final java.lang.String b;
    final java.lang.String c;
    final java.lang.String d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.fk();
    }

    fj(int p0, String p1, String p2, String p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    public fj(String p0, String p1, String p2)
    {
      this(1, p0, p1, p2);
    }

    public int describeContents()
    {
      return 0;
    }

    public String toString()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = this.b;
      v1[1] = this.c;
      v1[2] = this.d;
      return String.format("DocumentId[packageName=%s, corpusName=%s, uri=%s]", v1);
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      fk.a(this, p0, p1);
    }

}
