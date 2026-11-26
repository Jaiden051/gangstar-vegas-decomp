// Decompiled from classes.dex (SourceFile: c$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class c$1 {
    // Fields
    static final int[] a;

    // Methods
    static
    {
      a = new int[c$b.values().length];
      try
      {
        a[c$b.a.ordinal()] = 1;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[c$b.b.ordinal()] = 2;
      }
      catch ( NoSuchFieldError e )
      {
      }
    }

}
