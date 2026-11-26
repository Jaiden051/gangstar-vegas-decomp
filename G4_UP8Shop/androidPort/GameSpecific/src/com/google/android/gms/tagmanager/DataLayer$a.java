// Decompiled from classes.dex (SourceFile: DataLayer$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.Arrays;
final class DataLayer$a {
    // Fields
    public final java.lang.String a;
    public final java.lang.Object b;

    // Methods
    DataLayer$a(String p0, Object p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.tagmanager.DataLayer$a v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.tagmanager.DataLayer$a )
      {
        v4 = (com.google.android.gms.tagmanager.DataLayer$a)p0;
        if ( this.a.equals(v4.a) )
          return this.b.equals(v4.b);
      }
      return v2;
    }

    public final int hashCode()
    {
      Integer[] v1;
      v1 = new Integer[2];
      v1[0] = Integer.valueOf(this.a.hashCode());
      v1[1] = Integer.valueOf(this.b.hashCode());
      return Arrays.hashCode(v1);
    }

    public final String toString()
    {
      return "Key: " + this.a + " value: " + this.b.toString();
    }

}
