// Decompiled from classes.dex (SourceFile: MD5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

import java.security.MessageDigest;
public class MD5 {
    // Methods
    public MD5()
    {
      super();
    }

    public static byte[] createChecksum(String p0)
    {
      java.io.FileInputStream v1;
      byte[] v2;
      java.security.MessageDigest Instance;
      int v4; // RETVAL
    
      try
      {
        v1 = new java.io.FileInputStream(p0);
        v2 = new byte[1024];
        Instance = MessageDigest.getInstance("MD5");
        do
        {
          v4 = v1.read(v2);
          if ( v4 > 0 )
            Instance.update(v2, 0, v4);
        }
        while ( v4 != -1 );
        v1.close();
        return Instance.digest();
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static String getMD5Checksum(String p0)
    {
      byte[] Checksum;
      String v2;
      int i;
      Checksum = createChecksum(p0);
      v2 = "";
      for ( i = 0; i < Checksum.length; ++i )
        v2 = v2 + Integer.toString((int)Checksum[i] + 256, 16).substring(1);
      return v2;
    }

    public static boolean isValidChecksum(String p0, String p1)
    {
      return getMD5Checksum(p0).equals(p1);
    }

}
