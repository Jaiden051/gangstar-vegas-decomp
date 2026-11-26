// Decompiled from classes.dex (SourceFile: gx$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class gx$a {
    // Fields
    public final int a;
    public final int b;

    // Methods
    public gx$a(int p0, int p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.gx$a v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.internal.gx$a )
      {
        if ( this == p0 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.internal.gx$a)p0;
          if ( v4.a == this.a )
            return v4.b == this.b;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = Integer.valueOf(this.a);
      v1[1] = Integer.valueOf(this.b);
      return hl.hashCode(v1);
    }

}
