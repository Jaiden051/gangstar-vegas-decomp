// Decompiled from classes.dex (SourceFile: LaunchOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import com.google.android.gms.internal.gj;
import com.google.android.gms.internal.hl;
import java.util.Locale;
public class LaunchOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int a;
    private boolean b;
    private java.lang.String c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.cast.c();
    }

    public LaunchOptions()
    {
      this(1, false, gj.b(Locale.getDefault()));
    }

    LaunchOptions(int p0, boolean p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    final int a()
    {
      return this.a;
    }

    public final void a(String p0)
    {
      this.c = p0;
    }

    public final void a(boolean p0)
    {
      this.b = p0;
    }

    public final boolean b()
    {
      return this.b;
    }

    public final String c()
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
      com.google.android.gms.cast.LaunchOptions v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.cast.LaunchOptions )
        {
          v4 = (com.google.android.gms.cast.LaunchOptions)p0;
          if ( this.b != v4.b || !gj.a(this.c, v4.c) )
            return false;
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = Boolean.valueOf(this.b);
      v1[1] = this.c;
      return hl.hashCode(v1);
    }

    public String toString()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = Boolean.valueOf(this.b);
      v1[1] = this.c;
      return String.format("LaunchOptions(relaunchIfRunning=%b, language=%s)", v1);
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.cast.c.a(this, p0, p1);
    }

}
