// Decompiled from classes.dex (SourceFile: il.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class il {
    // Methods
    public static byte[] a(java.io.InputStream p0, boolean p1)
    {
      java.io.ByteArrayOutputStream v2;
      byte[] v3;
      int v4; // RETVAL
      Throwable v5;
      v2 = new java.io.ByteArrayOutputStream();
      v3 = new byte[10000];
      try
      {
        while ( true )
        {
        if ( true )
        {
          v4 = p0.read(v3);
          if ( v4 == -1 )
          {
            if ( p1 )
              p0.close();
            return v2.toByteArray();
          }
          v2.write(v3, 0, v4);
          continue;
        }
        break;
      }
      }
      catch ( Throwable _ehEx )
      {
        if ( (_ehEx instanceof java.io.IOException) )
        {
          v5 = _ehEx;
          throw new RuntimeException(v5);
        }
      if ( _ehEx instanceof Error ) throw (Error)_ehEx;
      if ( _ehEx instanceof RuntimeException ) throw (RuntimeException)_ehEx;
}
      return v2.toByteArray();
    }

    public static void b(String p0, android.database.CharArrayBuffer p1)
    {
      if ( p1.data != null && p1.data.length >= p0.length() )
        p0.getChars(0, p0.length(), p1.data, 0);
      else
        p1.data = p0.toCharArray();
      p1.sizeCopied = p0.length();
    }

}
