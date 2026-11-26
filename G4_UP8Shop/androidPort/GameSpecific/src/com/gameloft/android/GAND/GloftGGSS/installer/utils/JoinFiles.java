// Decompiled from classes.dex (SourceFile: JoinFiles.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public class JoinFiles implements com.gameloft.android.GAND.GloftGGSS.installer.utils.c {
    // Fields
    static int a;
    static long b;
    static int c;

    // Methods
    static
    {
      b = 0;
      c = 0;
    }

    public JoinFiles()
    {
      super();
    }

    public static void join(String p0, long p1, int p3)
    {
      join(p0, null, p1, p3);
    }

    public static void join(String p0, com.gameloft.android.GAND.GloftGGSS.installer.utils.i p1, long p2, int p4)
    {
      String v4;
      byte[][] v5;
      java.io.File v6;
      java.io.FileOutputStream v7;
      int i;
      java.io.File v9;
      java.io.FileInputStream v10;
      java.io.InputStream v11;
      java.io.DataInputStream v12;
      long v13;
      int v14; // RETVAL
      int v15;
      if ( p1 != null )
        v4 = p0 + "/" + p1.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/") + "/" + p1.c();
      else
        v4 = p0 + "/joinedFile.zip";
      v5 = new byte[2][];
      v5[0] = new byte[0x80000];
      try
      {
        b = p2;
        c = p4;
        v6 = new java.io.File(v4);
        v6.getParentFile().mkdirs();
        if ( p4 <= 0 )
        {
          v7 = null;
        }
        else
        {
          v6.createNewFile();
          v7 = new java.io.FileOutputStream(v4);
        }
        for ( i = 0; i < p4; ++i )
        {
          v9 = new java.io.File(p0 + "/section." + i);
          if ( p4 == 1 )
          {
            v9.renameTo(v6);
            return;
          }
          v10 = new java.io.FileInputStream(v9);
          v11 = new java.io.BufferedInputStream(v10);
          v12 = new java.io.DataInputStream(v11);
          v13 = 0;
          v14 = v12.available();
          while ( v13 < v14 )
          {
            v15 = (int)(v14 - v13);
            if ( v14 - (int)v13 > 0x80000 )
              v15 = 0x80000;
            if ( v15 == 0x80000 )
            {
              v12.readFully(v5[0]);
              v7.write(v5[0]);
            }
            else
            {
              v5[1] = new byte[v15];
              v12.readFully(v5[1]);
              v7.write(v5[1]);
            }
            v13 += v15;
          }
          v10.close();
          v11.close();
          v12.close();
          v9.delete();
        }
        v7.close();
        System.gc();
      }
      catch ( Exception e )
      {
      }
    }

}
