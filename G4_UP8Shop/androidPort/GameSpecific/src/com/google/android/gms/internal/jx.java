// Decompiled from classes.dex (SourceFile: jx.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Arrays;
import java.util.Collections;
public final class jx implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.jy CREATOR;
    public static final com.google.android.gms.internal.jx a;
    public static final com.google.android.gms.internal.jx b;
    public static final java.util.Set c;
    final int d;
    final java.lang.String e;
    final int f;

    // Methods
    static
    {
      com.google.android.gms.internal.jx[] v0;
      a = w("test_type", 1);
      b = w("saved_offers", 4);
      v0 = new com.google.android.gms.internal.jx[2];
      v0[0] = a;
      v0[1] = b;
      c = Collections.unmodifiableSet(new java.util.HashSet(Arrays.asList(v0)));
      CREATOR = new com.google.android.gms.internal.jy();
    }

    jx(int p0, String p1, int p2)
    {
      super();
      hn.aE(p1);
      this.d = p0;
      this.e = p1;
      this.f = p2;
    }

    private static com.google.android.gms.internal.jx w(String p0, int p1)
    {
      return new com.google.android.gms.internal.jx(0, p0, p1);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.jx v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.internal.jx )
        {
          v4 = (com.google.android.gms.internal.jx)p0;
          if ( !this.e.equals(v4.e) || this.f != v4.f )
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
      return this.e.hashCode();
    }

    public final String toString()
    {
      return this.e;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      jy.a(this, p0, p1);
    }

}
