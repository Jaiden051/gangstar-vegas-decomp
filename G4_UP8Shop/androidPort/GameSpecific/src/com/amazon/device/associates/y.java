// Decompiled from classes.dex (SourceFile: y.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.io.File;
class y {
    // Methods
    y()
    {
      super();
    }

    public static Object a(String p0)
    {
      Object v1;
      Object[] v4;
      v1 = null;
      if ( d(p0) )
      {
        try
        {
          return a(c(p0));
        }
        catch ( Exception v3 )
        {
          v4 = new Object[1];
          v4[0] = v3;
          p.a("FileUtils", "Loading Object failed. Ex=", v4);
        }
      }
      return v1;
    }

    private static Object a(byte[] p0)
    {
      Object v1;
      Object[] v4;
      v1 = null;
      if ( p0 != null )
      {
        try
        {
          return new java.io.ObjectInputStream(new java.io.ByteArrayInputStream(p0)).readObject();
        }
        catch ( Exception v3 )
        {
          v4 = new Object[1];
          v4[0] = v3;
          p.a("FileUtils", "Converting byte array to object failed. Ex=", v4);
        }
      }
      return v1;
    }

    public static boolean a(Object p0, String p1)
    {
      boolean v2;
      boolean v3;
      byte[] v5; // RETVAL
      byte[] v6;
      java.io.FileOutputStream v7;
      Object[] v9;
      v2 = true;
      v3 = false;
      if ( p0 != null && p1 != null && !"".equals(p1) )
      {
        try
        {
          v5 = a(p0);
          v6 = v5;
          if ( v5 == null || "".equals(v5) )
            return v3;
          v7 = new java.io.FileOutputStream(p1);
          v7.write(v6);
          v7.close();
          return v2;
        }
        catch ( Exception v8 )
        {
          v9 = new Object[1];
          v9[0] = v8;
          p.a("FileUtils", "Saving file failed. Ex=", v9);
          return false;
        }
      }
      return v3;
    }

    private static byte[] a(Object p0)
    {
      java.io.ByteArrayOutputStream v1;
      java.io.ObjectOutputStream v2;
      Object[] v6;
      try
      {
        v1 = new java.io.ByteArrayOutputStream();
        v2 = new java.io.ObjectOutputStream(v1);
        v2.writeObject(p0);
        v2.close();
        return v1.toByteArray();
      }
      catch ( java.io.IOException v5 )
      {
        v6 = new Object[1];
        v6[0] = v5;
        p.a("FileUtils", "Converting object to byte array failed. Ex=", v6);
        return null;
      }
    }

    public static void b(String p0)
    {
      try
      {
        if ( d(p0) )
          new java.io.File(p0).delete();
      }
      catch ( Exception e )
      {
      }
    }

    private static byte[] c(String p0)
 throws java.io.FileNotFoundException, java.io.IOException {
      byte[] v1;
      java.io.File v3;
      java.io.RandomAccessFile v4;
      long v5;
      if ( d(p0) )
      {
        v3 = new java.io.File(p0);
        v4 = new java.io.RandomAccessFile(v3, "r");
        try
        {
          v5 = v4.length();
          if ( v5 != v5 )
            throw new java.io.IOException("File size >= 2 GB");
          v1 = new byte[((int)v5)];
          v4.readFully(v1);
        }
        finally
        {
          v4.close();
        }
        return (byte[])v1;
      }
      return null;
    }

    private static boolean d(String p0)
    {
      return p0 != null && !"".equals(p0) && new java.io.File(p0).exists();
    }

}
