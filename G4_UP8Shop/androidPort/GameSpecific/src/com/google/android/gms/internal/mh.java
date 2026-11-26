// Decompiled from classes.dex (SourceFile: mh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Arrays;
public final class mh {
    // Fields
    final int a;
    final byte[] b;

    // Methods
    mh(int p0, byte[] p1)
    {
      super();
      this.a = p0;
      this.b = (byte[])p1;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.mh v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.mh )
        {
          v4 = (com.google.android.gms.internal.mh)p0;
          if ( this.a != v4.a || !Arrays.equals(this.b, v4.b) )
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
      return 31 * (this.a + 527) + Arrays.hashCode(this.b);
    }

}
