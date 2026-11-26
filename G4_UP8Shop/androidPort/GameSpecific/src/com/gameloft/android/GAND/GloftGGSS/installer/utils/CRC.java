// Decompiled from classes.dex (SourceFile: CRC.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public class CRC {
    // Fields
    public static boolean a;

    // Methods
    public CRC()
    {
      super();
    }

    public static long calcChecksum(String p0)
    {
      java.util.zip.CheckedInputStream v1;
      byte[] v2;
      long Value;
      try
      {
        try
        {
          v1 = new java.util.zip.CheckedInputStream(new java.io.FileInputStream(p0), new java.util.zip.CRC32());
          v2 = new byte[128];
          while ( v1.read(v2) >= 0 )
            ;
          Value = v1.getChecksum().getValue();
          v1.close();
          return Value;
        }
        catch ( java.io.FileNotFoundException e )
        {
          return 0;
        }
      }
      catch ( java.io.IOException e )
      {
        return 0;
      }
    }

    public static long calcChecksum(String p0, int p1)
    {
      java.util.zip.Checksum v2;
      java.util.zip.CheckedInputStream v3;
      long Value;
      byte[] v6;
      long i;
      try
      {
        v2 = new java.util.zip.CRC32();
        try
        {
          v3 = new java.util.zip.CheckedInputStream(new java.io.FileInputStream(p0), v2);
          v2.reset();
          if ( p1 > 1 )
            v3.skip((p1 - 1) << 21);
          v2.reset();
          if ( p1 <= 0 )
          {
            v6 = new byte[128];
            for ( i = 0; (p1 == 0 || i < 0x200000) && v3.read(v6) >= 0; i += 128 )
              ;
          }
          else
          {
            v3.skip(0x200000);
          }
          Value = v3.getChecksum().getValue();
          v3.close();
          return Value;
        }
        catch ( java.io.FileNotFoundException e )
        {
          return 0;
        }
      }
      catch ( java.io.IOException e )
      {
        return 0;
      }
    }

    public static boolean isValidChecksum(String p0, long p1)
    {
      long v2;
      v2 = calcChecksum(p0);
      if ( v2 != p1 )
        new java.io.File(p0).delete();
      return v2 == p1;
    }

    public static boolean isValidChecksum(String p0, long p1, int p3)
    {
      long v3; // RETVAL
      long v4;
      v3 = calcChecksum(p0, p3);
      v4 = v3;
      if ( p3 <= 0 && v3 != p1 )
        new java.io.File(p0).delete();
      return v4 == p1;
    }

}
