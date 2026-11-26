// Decompiled from classes.dex (SourceFile: fl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fl implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.fm CREATOR;
    public static final int a;
    final int b;
    public final java.lang.String c;
    final com.google.android.gms.internal.fq d;
    public final int e;
    public final byte[] f;

    // Methods
    static
    {
      a = Integer.parseInt("-1");
      CREATOR = new com.google.android.gms.internal.fm();
    }

    fl(int p0, String p1, com.google.android.gms.internal.fq p2, int p3, byte[] p4)
    {
      super();
      boolean v6;
      String v7;
      v6 = p3 == a || fp.H(p3) != null;
      hn.b(v6, "Invalid section type " + p3);
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.e = p3;
      this.f = (byte[])p4;
      if ( this.e == a || fp.H(this.e) != null )
      {
        if ( this.c != null && this.f != null )
          v7 = "Both content and blobContent set";
        else
          v7 = null;
      }
      else
      {
        v7 = "Invalid section type " + this.e;
      }
      if ( v7 != null )
        throw new IllegalArgumentException(v7);
    
    }

    public fl(String p0, com.google.android.gms.internal.fq p1)
    {
      this(1, p0, p1, a, null);
    }

    public fl(String p0, com.google.android.gms.internal.fq p1, String p2)
    {
      this(1, p0, p1, fp.Y(p2), null);
    }

    public fl(byte[] p0, com.google.android.gms.internal.fq p1)
    {
      this(1, null, p1, a, p0);
    }

    private String a()
    {
      if ( this.e != a && fp.H(this.e) == null )
        return "Invalid section type " + this.e;
      if ( this.c != null && this.f != null )
        return "Both content and blobContent set";
      return null;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      fm.a(this, p0, p1);
    }

}
