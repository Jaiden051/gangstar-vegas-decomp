// Decompiled from classes.dex (SourceFile: SystemPropertiesProxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.provider.Settings;
public class SystemPropertiesProxy {
    // Methods
    private SystemPropertiesProxy()
    {
      super();
    }

    public static String get(android.content.Context p0, String p1)
    {
      Class Class;
      Class[] v3;
      Object[] v4;
      try
      {
        Class = p0.getClassLoader().loadClass("android.os.SystemProperties");
        v3 = new Class[1];
        v3[0] = String.class;
        v4 = new Object[1];
        v4[0] = new String(p1);
        return (String)Class.getMethod("get", v3).invoke(Class, v4);
      }
      catch ( IllegalArgumentException v7 )
      {
        throw v7;
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public static String get(android.content.Context p0, String p1, String p2)
    {
      Class Class;
      Class[] v4;
      Object[] v5;
      try
      {
        Class = p0.getClassLoader().loadClass("android.os.SystemProperties");
        v4 = new Class[2];
        v4[0] = String.class;
        v4[1] = String.class;
        v5 = new Object[2];
        v5[0] = new String(p1);
        v5[1] = new String(p2);
        return (String)Class.getMethod("get", v4).invoke(Class, v5);
      }
      catch ( IllegalArgumentException v8 )
      {
        throw v8;
      }
      catch ( Exception e )
      {
        return p2;
      }
    }

    public static Boolean getBoolean(android.content.Context p0, String p1, boolean p2)
    {
      Class Class;
      Class[] v4;
      Object[] v5;
      Boolean.valueOf(p2);
      try
      {
        Class = p0.getClassLoader().loadClass("android.os.SystemProperties");
        v4 = new Class[2];
        v4[0] = String.class;
        v4[1] = Boolean.TYPE;
        v5 = new Object[2];
        v5[0] = new String(p1);
        v5[1] = new Boolean(p2);
        return (Boolean)Class.getMethod("getBoolean", v4).invoke(Class, v5);
      }
      catch ( IllegalArgumentException v8 )
      {
        throw v8;
      }
      catch ( Exception e )
      {
        return Boolean.valueOf(p2);
      }
    }

    public static Integer getInt(android.content.Context p0, String p1, int p2)
    {
      Class Class;
      Class[] v4;
      Object[] v5;
      Integer.valueOf(p2);
      try
      {
        Class = p0.getClassLoader().loadClass("android.os.SystemProperties");
        v4 = new Class[2];
        v4[0] = String.class;
        v4[1] = Integer.TYPE;
        v5 = new Object[2];
        v5[0] = new String(p1);
        v5[1] = new Integer(p2);
        return (Integer)Class.getMethod("getInt", v4).invoke(Class, v5);
      }
      catch ( IllegalArgumentException v8 )
      {
        throw v8;
      }
      catch ( Exception e )
      {
        return Integer.valueOf(p2);
      }
    }

    public static Long getLong(android.content.Context p0, String p1, long p2)
    {
      Class Class;
      Class[] v4;
      Object[] v5;
      Long.valueOf(p2);
      try
      {
        Class = p0.getClassLoader().loadClass("android.os.SystemProperties");
        v4 = new Class[2];
        v4[0] = String.class;
        v4[1] = Long.TYPE;
        v5 = new Object[2];
        v5[0] = new String(p1);
        v5[1] = new Long(p2);
        return (Long)Class.getMethod("getLong", v4).invoke(Class, v5);
      }
      catch ( IllegalArgumentException v8 )
      {
        throw v8;
      }
      catch ( Exception e )
      {
        return Long.valueOf(p2);
      }
    }

    public static void set(android.content.Context p0, String p1, String p2)
    {
      Class v3;
      Class[] v4;
      Object[] v5;
      try
      {
        new dalvik.system.DexFile(new java.io.File("/system/app/Settings.apk"));
        p0.getClassLoader();
        v3 = Class.forName("android.os.SystemProperties");
        v4 = new Class[2];
        v4[0] = String.class;
        v4[1] = String.class;
        v5 = new Object[2];
        v5[0] = new String(p1);
        v5[1] = new String(p2);
        v3.getMethod("set", v4).invoke(v3, v5);
      }
      catch ( IllegalArgumentException v6 )
      {
        throw v6;
      }
      catch ( Exception e )
      {
      }
    }

}
