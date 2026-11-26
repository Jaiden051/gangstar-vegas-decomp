// Decompiled from classes.dex (SourceFile: a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.util;

class a$1 {
    // Fields
    static final int[] a;

    // Methods
    static
    {
      a = new int[c.a().length];
      try
      {
        a[c.b.ordinal()] = 1;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[c.a.ordinal()] = 2;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[c.c.ordinal()] = 3;
      }
      catch ( NoSuchFieldError e )
      {
      }
    }

}
