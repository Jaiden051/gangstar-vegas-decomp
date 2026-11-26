// Decompiled from classes.dex (SourceFile: ai.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class ai implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.wearable.Node {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    private final java.lang.String b;
    private final java.lang.String c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.aj();
    }

    ai(int p0, String p1, String p2)
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
      com.google.android.gms.wearable.internal.ai v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.wearable.internal.ai )
      {
        v4 = (com.google.android.gms.wearable.internal.ai)p0;
        if ( v4.b.equals(this.b) )
          return v4.c.equals(this.c);
      }
      return v2;
    }

    public int hashCode()
    {
      return 37 * (this.b.hashCode() + 629) + this.c.hashCode();
    }

    public String toString()
    {
      return "NodeParcelable{" + this.b + "," + this.c + "}";
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      aj.a(this, p0, p1);
    }

}
