// Decompiled from classes.dex (SourceFile: ZipFile.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
public class ZipFile {
    // Methods
    public ZipFile()
    {
      super();
    }

    public static void extract(String p0, String p1)
    {
      byte[] v2;
      java.util.zip.ZipInputStream v3;
      java.util.zip.ZipEntry i;
      String Name;
      java.io.File v6;
      java.io.FileOutputStream j;
      int v8; // RETVAL
    
      try
      {
        v2 = new byte[1024];
        v3 = new java.util.zip.ZipInputStream(new java.io.FileInputStream(p0));
        for ( i = v3.getNextEntry(); i != null; i = v3.getNextEntry() )
        {
          Name = i.getName();
          v6 = new java.io.File(Name);
          if ( v6.getParent() == null && v6.isDirectory() )
            break;
          for ( j = new java.io.FileOutputStream(p1 + "/" + Name); ; j.write(v2, 0, v8) )
          {
            v8 = v3.read(v2, 0, 1024);
            if ( v8 < 0 )
              break;
          }
          j.close();
          v3.closeEntry();
        }
        v3.close();
      }
      catch ( Exception e )
      {
      }
    }

    public static boolean unZip(com.gameloft.android.GAND.GloftGGSS.installer.utils.i p0, String p1)
    {
      String v2;
      StringBuilder v3;
      String v4; // RETVAL
      String v5;
      java.util.zip.ZipFile v6;
      java.util.Enumeration v7;
      java.util.zip.ZipEntry v8;
      String v9;
      java.io.File v10;
      java.io.BufferedInputStream v11;
      byte[] v12;
      java.io.FileOutputStream v13;
      java.io.BufferedOutputStream i;
      int v15; // RETVAL
    
      v2 = p0.c();
      v3 = new StringBuilder().append(p1).append("/").append(p0.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/")).append("/");
      v4 = v3.toString();
      v5 = v4;
      try
      {
        v6 = new java.util.zip.ZipFile(v4 + v2);
        v7 = v6.entries();
        while ( v7.hasMoreElements() )
        {
          v8 = (java.util.zip.ZipEntry)v7.nextElement();
          if ( v8.getName().endsWith(".so") )
          {
            v9 = GameInstaller.LIBS_PATH + v8.getName();
            GameInstaller.addNativeLib(v8.getName());
          }
          else
          {
            v9 = v5 + v8.getName();
          }
          v10 = new java.io.File(v9);
          new java.io.File(v10.getParent()).mkdirs();
          if ( v10.exists() )
            v10.delete();
          v10.createNewFile();
          if ( v9.endsWith(".so") )
            GameInstaller.makeLibExecutable(v9);
          v11 = new java.io.BufferedInputStream(v6.getInputStream(v8));
          v12 = new byte[0x4000];
          v13 = new java.io.FileOutputStream(v9);
          for ( i = new java.io.BufferedOutputStream(v13, v12.length); ; i.write(v12, 0, v15) )
          {
            v15 = v11.read(v12, 0, v12.length);
            if ( v15 == -1 )
              break;
          }
          i.flush();
          i.close();
          v13.close();
          v11.close();
        }
        new java.io.File(v5 + v2).delete();
        return true;
      }
      catch ( java.io.IOException e )
      {
        return false;
      }
      catch ( Exception e )
      {
        return false;
      }
    }

}
