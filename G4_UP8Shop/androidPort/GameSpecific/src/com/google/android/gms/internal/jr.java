// Decompiled from classes.dex (SourceFile: jr.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.concurrent.TimeUnit;
public final class jr implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.js CREATOR;
    static final long a;
    final int b;
    private final com.google.android.gms.internal.jn c;
    private final long d;
    private final int e;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.js();
      a = TimeUnit.HOURS.toMillis(1);
    }

    public jr(int p0, com.google.android.gms.internal.jn p1, long p2, int p4)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.e = p4;
    }

    public final com.google.android.gms.internal.jn a()
    {
      return this.c;
    }

    public final long b()
    {
      return this.d;
    }

    public final int c()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.jr v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.internal.jr )
        {
          v4 = (com.google.android.gms.internal.jr)p0;
          if ( !hl.equal(this.c, v4.c) || this.d != v4.d || this.e != v4.e )
            return false;
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = this.c;
      v1[1] = Long.valueOf(this.d);
      v1[2] = Integer.valueOf(this.e);
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      return hl.e(this).a("filter", this.c).a("interval", Long.valueOf(this.d)).a("priority", Integer.valueOf(this.e)).toString();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      js.a(this, p0, p1);
    }

}
