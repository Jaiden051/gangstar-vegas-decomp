// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public final class a {
    // Methods
    public static Boolean a(byte p0)
    {
      Boolean v1;
      switch ( p0 )
      {
        case 0:
          v1 = Boolean.FALSE;
          break;
        case 1:
          v1 = Boolean.TRUE;
          break;
        default:
          v1 = null;
          break;
      }
      return v1;
    }

    public static byte c(Boolean p0)
    {
      if ( p0 != null )
        return p0.booleanValue() ? (byte)1 : (byte)0;
      else
        return (byte)-1;
    }

}
