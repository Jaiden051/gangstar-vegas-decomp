// Decompiled from classes.dex (SourceFile: fe.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fe implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.internal.fe$1();
    }

    public fe()
    {
      super();
    }

    fe(android.os.Parcel p0)
    {
      super();
      this.a = p0.readString();
      this.b = p0.readString();
      this.c = p0.readString();
    }

    public fe(String p0, String p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    private void a(android.os.Parcel p0)
    {
      this.a = p0.readString();
      this.b = p0.readString();
      this.c = p0.readString();
    }

    public final String a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeString(this.a);
      p0.writeString(this.b);
      p0.writeString(this.c);
    }

}
