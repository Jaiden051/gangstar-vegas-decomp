// Decompiled from classes.dex (SourceFile: jl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class jl implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.jm CREATOR;
    private final int a;
    private final int b;
    private final int c;
    private final com.google.android.gms.internal.jn d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.jm();
    }

    jl(int p0, int p1, int p2, com.google.android.gms.internal.jn p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    public final int a()
    {
      return this.a;
    }

    public final int b()
    {
      return this.b;
    }

    public final int c()
    {
      return this.c;
    }

    public final com.google.android.gms.internal.jn d()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.jl v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.internal.jl )
        {
          v4 = (com.google.android.gms.internal.jl)p0;
          if ( this.b != v4.b || this.c != v4.c || !this.d.equals(v4.d) )
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
      v1 = new Object[2];
      v1[0] = Integer.valueOf(this.b);
      v1[1] = Integer.valueOf(this.c);
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      return hl.e(this).a("transitionTypes", Integer.valueOf(this.b)).a("loiteringTimeMillis", Integer.valueOf(this.c)).a("placeFilter", this.d).toString();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      jm.a(this, p0, p1);
    }

}
