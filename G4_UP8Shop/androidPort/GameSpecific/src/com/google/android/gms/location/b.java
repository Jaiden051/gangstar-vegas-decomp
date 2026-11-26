// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

import com.google.android.gms.internal.hl;
public class b implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.location.c CREATOR;
    int a;
    int b;
    long c;
    private final int d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.location.c();
    }

    b(int p0, int p1, int p2, long p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    }

    private static String cI(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 0:
          v1 = "STATUS_SUCCESSFUL";
          break;
        case 2:
          v1 = "STATUS_TIMED_OUT_ON_SCAN";
          break;
        case 3:
          v1 = "STATUS_NO_INFO_IN_DATABASE";
          break;
        case 4:
          v1 = "STATUS_INVALID_SCAN";
          break;
        case 5:
          v1 = "STATUS_UNABLE_TO_QUERY_DATABASE";
          break;
        case 6:
          v1 = "STATUS_SCANS_DISABLED_IN_SETTINGS";
          break;
        case 7:
          v1 = "STATUS_LOCATION_DISABLED_IN_SETTINGS";
          break;
        case 8:
          v1 = "STATUS_IN_PROGRESS";
          break;
        default:
          v1 = "STATUS_UNKNOWN";
          break;
      }
      return v1;
    }

    final int a()
    {
      return this.d;
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.location.b v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.location.b )
      {
        v4 = (com.google.android.gms.location.b)p0;
        if ( this.a == v4.a && this.b == v4.b )
          return this.c == v4.c;
      }
      return v2;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = Integer.valueOf(this.a);
      v1[1] = Integer.valueOf(this.b);
      v1[2] = Long.valueOf(this.c);
      return hl.hashCode(v1);
    }

    public String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder();
      v1.append("LocationStatus[cell status: ").append(cI(this.a));
      v1.append(", wifi status: ").append(cI(this.b));
      v1.append(", elapsed realtime ns: ").append(this.c);
      v1.append(']');
      return v1.toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.location.c.a(this, p0, p1);
    }

}
