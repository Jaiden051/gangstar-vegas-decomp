// Decompiled from classes.dex (SourceFile: cc$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class cc$1 {
    // Fields
    static final int[] a;
    static final int[] b;

    // Methods
    static
    {
      b = new int[com.google.ads.AdRequest$ErrorCode.values().length];
      try
      {
        b[com.google.ads.AdRequest$ErrorCode.d.ordinal()] = 1;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        b[com.google.ads.AdRequest$ErrorCode.a.ordinal()] = 2;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        b[com.google.ads.AdRequest$ErrorCode.c.ordinal()] = 3;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        b[com.google.ads.AdRequest$ErrorCode.b.ordinal()] = 4;
      }
      catch ( NoSuchFieldError e )
      {
      }
      a = new int[com.google.ads.AdRequest$Gender.values().length];
      try
      {
        a[com.google.ads.AdRequest$Gender.c.ordinal()] = 1;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[com.google.ads.AdRequest$Gender.b.ordinal()] = 2;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[com.google.ads.AdRequest$Gender.a.ordinal()] = 3;
      }
      catch ( NoSuchFieldError e )
      {
      }
    }

}
