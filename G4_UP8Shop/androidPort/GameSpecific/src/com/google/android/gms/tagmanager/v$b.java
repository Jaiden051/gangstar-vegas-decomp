// Decompiled from classes.dex (SourceFile: v$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.Arrays;
class v$b {
    // Fields
    final java.lang.String a;
    final byte[] b;

    // Methods
    v$b(String p0, byte[] p1)
    {
      super();
      this.a = p0;
      this.b = (byte[])p1;
    }

    public String toString()
    {
      return "KeyAndSerialized: key = " + this.a + " serialized hash = " + Arrays.hashCode(this.b);
    }

}
