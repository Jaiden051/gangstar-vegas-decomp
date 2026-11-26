// Decompiled from classes.dex (SourceFile: ResLoader.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

class ResLoader {
    // Fields
    static int a;

    // Methods
    ResLoader()
    {
      super();
    }

    public static byte[] getBytes(int p0)
    {
      java.io.InputStream v1;
      int v2; // RETVAL
      byte[] v3;
      try
      {
        v1 = SUtils.getContext().getResources().openRawResource(p0);
        v2 = v1.available();
        v3 = new byte[v2];
        v1.read(v3, 0, v2);
        v1.close();
        return (byte[])v3;
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static byte[] getBytes(String p0)
    {
      java.io.InputStream InputStream; // RETVAL
      java.io.InputStream v2;
      byte[] v3;
      int v4; // RETVAL
    
      InputStream = getInputStream(p0);
      v2 = InputStream;
      v3 = null;
      if ( InputStream != null )
      {
        try
        {
          v4 = InputStream.available();
          v3 = new byte[v4];
          v2.read(v3, 0, v4);
          v2.close();
          return (byte[])v3;
        }
        catch ( Exception e )
        {
        }
      }
      return (byte[])v3;
    }

    private static java.io.InputStream getInputStream(String p0)
    {
      String v1;
      java.io.InputStream v2;
      v1 = trimName(p0);
      try
      {
        v2 = SUtils.getContext().getAssets().open(v1);
        if ( v2 == null )
          return null;
        return v2;
      }
      catch ( Exception e )
      {
      }
      return null;
    }

    public static int getLength(String p0)
    {
      java.io.InputStream InputStream; // RETVAL
      java.io.InputStream v2;
      int v3;
      InputStream = getInputStream(p0);
      v2 = InputStream;
      if ( InputStream != null )
      {
        try
        {
          v3 = InputStream.available();
          v2.close();
          return v3;
        }
        catch ( Exception e )
        {
        }
      }
      return 0;
    }

    private static String trimName(String p0)
    {
      if ( p0.startsWith(".//") )
      {
        p0 = p0.substring(3);
      }
      else if ( p0.startsWith("./") )
      {
        p0 = p0.substring(2);
      }
      return p0.trim();
    }

}
