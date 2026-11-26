// Decompiled from classes.dex (SourceFile: mg.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.lang.reflect.Array;
public final class mg {
    // Methods
    private static void a(String p0, Object p1, StringBuffer p2, StringBuffer p3)
 throws IllegalAccessException, java.lang.reflect.InvocationTargetException {
      int v4;
      Class Class;
      java.lang.reflect.Field[] Fields;
      int v7;
      int i;
      java.lang.reflect.Field v9;
      int Modifiers;
      String Name; // RETVAL
      String v12;
      Class Type;
      Object v14;
      int Length;
      int j;
      java.lang.reflect.Method[] Methods;
      int v18;
      int k;
      String v20;
      String v21; // RETVAL
      String v22;
      if ( p1 == null )
        return;
      if ( !(p1 instanceof com.google.android.gms.internal.mf) )
      {
        p3.append(p2).append(cA(p0)).append(": ");
        if ( p1 instanceof String )
        {
          p3.append("\"").append(cB((String)p1)).append("\"");
        }
        else if ( p1 instanceof byte[] )
        {
          a((byte[])p1, p3);
        }
        else
        {
          p3.append(p1);
        }
        p3.append("\n");
        return;
      }
      v4 = p2.length();
      if ( p0 != null )
      {
        p3.append(p2).append(cA(p0)).append(" <\n");
        p2.append("  ");
      }
      Class = p1.getClass();
      Fields = Class.getFields();
      v7 = Fields.length;
      for ( i = 0; i < v7; ++i )
      {
        v9 = Fields[i];
        Modifiers = (int)v9.getModifiers();
        Name = v9.getName();
        v12 = Name;
        if ( (Modifiers & 1) == 1 && (Modifiers & 8) != 8 && !Name.startsWith("_") && !v12.endsWith("_") )
        {
          Type = v9.getType();
          v14 = v9.get(p1);
          if ( Type.isArray() && Type.getComponentType() != Byte.TYPE )
          {
            if ( v14 != null )
              Length = Array.getLength(v14);
            else
              Length = 0;
            for ( j = 0; j < Length; ++j )
              mg.a(v12, Array.get(v14, j), p2, p3);
          }
          else
          {
            mg.a(v12, v14, p2, p3);
          }
        }
      }
      Methods = Class.getMethods();
      v18 = Methods.length;
      for ( k = 0; k < v18; ++k )
      {
        v20 = Methods[k].getName();
        if ( !v20.startsWith("set") )
          continue;
        v21 = v20.substring(3);
        v22 = v21;
        try
        {
          if ( !((Boolean)Class.getMethod("has" + v21, new Class[0]).invoke(p1, new Object[0])).booleanValue() )
            continue;
          try
          {
            mg.a(v22, Class.getMethod("get" + v22, new Class[0]).invoke(p1, new Object[0]), p2, p3);
            continue;
          }
          catch ( NoSuchMethodException e )
          {
          }
          continue;
        }
        catch ( NoSuchMethodException e )
        {
        }
      }
      if ( p0 != null )
      {
        p2.setLength(v4);
        p3.append(p2).append(">\n");
      }
    }

    private static void a(byte[] p0, StringBuffer p1)
    {
      int i;
      int v3;
      Object[] v4;
      if ( p0 != null )
      {
        p1.append('"');
        for ( i = 0; i < p0.length; ++i )
        {
          v3 = p0[i];
          if ( v3 == 92 || v3 == 34 )
          {
            p1.append(0x5C).append((char)v3);
          }
          else if ( v3 < 32 || v3 >= 127 )
          {
            v4 = new Object[1];
            v4[0] = Integer.valueOf(v3);
            p1.append(String.format("\\%03o", v4));
          }
          else
          {
            p1.append((char)v3);
          }
        }
        p1.append('"');
      }
      else
      {
        p1.append("\"\"");
      }
    }

    private static String aK(String p0)
    {
      int v1;
      StringBuilder v2;
      int i;
      char v4; // RETVAL
      Object[] v5;
      v1 = p0.length();
      v2 = new StringBuilder(v1);
      for ( i = 0; i < v1; ++i )
      {
        v4 = p0.charAt(i);
        if ( (int)v4 < 32 || (int)v4 > 126 || v4 == 34 || v4 == 39 )
        {
          v5 = new Object[1];
          v5[0] = Integer.valueOf(v4);
          v2.append(String.format("\\u%04x", v5));
        }
        else
        {
          v2.append(v4);
        }
      }
      return v2.toString();
    }

    private static String cA(String p0)
    {
      StringBuffer v1;
      int i;
      char v3;
      v1 = new StringBuffer();
      for ( i = 0; i < p0.length(); ++i )
      {
        v3 = p0.charAt(i);
        if ( i != 0 )
        {
          if ( Character.isUpperCase(v3) )
            v1.append('_').append(Character.toLowerCase(v3));
          else
            v1.append(v3);
        }
        else
        {
          v1.append(Character.toLowerCase(v3));
        }
      }
      return v1.toString();
    }

    private static String cB(String p0)
    {
      if ( !p0.startsWith("http") && p0.length() > 200 )
        p0 = p0.substring(0, 200) + "[...]";
      return aK(p0);
    }

    public static <T extends com.google.android.gms.internal.mf> String e(T p0)
    {
      StringBuffer v3;
      if ( p0 != null )
      {
        v3 = new StringBuffer();
        try
        {
          a(null, p0, new StringBuffer(), v3);
          return v3.toString();
        }
        catch ( IllegalAccessException v4 )
        {
          return "Error printing proto: " + v4.getMessage();
        }
        catch ( java.lang.reflect.InvocationTargetException v5 )
        {
          return "Error printing proto: " + v5.getMessage();
        }
      }
      else
      {
        return "";
      }
    }

}
