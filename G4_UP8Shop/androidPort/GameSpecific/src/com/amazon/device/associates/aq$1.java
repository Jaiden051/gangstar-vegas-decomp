// Decompiled from classes.dex (SourceFile: aq$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class aq$1 {
    // Fields
    static final int[] a;

    // Methods
    static
    {
      a = new int[s.values().length];
      try
      {
        a[s.a.ordinal()] = 1;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[s.b.ordinal()] = 2;
      }
      catch ( NoSuchFieldError e )
      {
      }
    }

}
