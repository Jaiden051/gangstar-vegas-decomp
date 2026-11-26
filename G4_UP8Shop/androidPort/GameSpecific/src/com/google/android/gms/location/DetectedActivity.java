// Decompiled from classes.dex (SourceFile: DetectedActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

public class DetectedActivity implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.location.DetectedActivityCreator CREATOR;
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    int i;
    int j;
    private final int k;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.location.DetectedActivityCreator();
    }

    private DetectedActivity(int p0, int p1)
    {
      super();
      this.k = 1;
      this.i = p0;
      this.j = p1;
    }

    public DetectedActivity(int p0, int p1, int p2)
    {
      super();
      this.k = p0;
      this.i = p1;
      this.j = p2;
    }

    private static int cF(int p0)
    {
      if ( p0 > 8 )
        return 4;
      return p0;
    }

    public final int a()
    {
      int i;
      i = this.i;
      if ( i > 8 )
        return 4;
      return i;
    }

    public final int b()
    {
      return this.j;
    }

    public final int c()
    {
      return this.k;
    }

    public int describeContents()
    {
      return 0;
    }

    public String toString()
    {
      return "DetectedActivity [type=" + this.a() + ", confidence=" + this.j + "]";
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      DetectedActivityCreator.a(this, p0, p1);
    }

}
