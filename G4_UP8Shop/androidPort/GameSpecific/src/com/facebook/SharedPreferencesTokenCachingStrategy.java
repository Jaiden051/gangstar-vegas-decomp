// Decompiled from classes.dex (SourceFile: SharedPreferencesTokenCachingStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.Logger;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import org.json.JSONObject;
public class SharedPreferencesTokenCachingStrategy extends com.facebook.TokenCachingStrategy {
    // Fields
    private static java.lang.String DEFAULT_CACHE_KEY;
    private static java.lang.String JSON_VALUE;
    private static java.lang.String JSON_VALUE_ENUM_TYPE;
    private static java.lang.String JSON_VALUE_TYPE;
    private static final java.lang.String TAG;
    private static java.lang.String TYPE_BOOLEAN;
    private static java.lang.String TYPE_BOOLEAN_ARRAY;
    private static java.lang.String TYPE_BYTE;
    private static java.lang.String TYPE_BYTE_ARRAY;
    private static java.lang.String TYPE_CHAR;
    private static java.lang.String TYPE_CHAR_ARRAY;
    private static java.lang.String TYPE_DOUBLE;
    private static java.lang.String TYPE_DOUBLE_ARRAY;
    private static java.lang.String TYPE_ENUM;
    private static java.lang.String TYPE_FLOAT;
    private static java.lang.String TYPE_FLOAT_ARRAY;
    private static java.lang.String TYPE_INTEGER;
    private static java.lang.String TYPE_INTEGER_ARRAY;
    private static java.lang.String TYPE_LONG;
    private static java.lang.String TYPE_LONG_ARRAY;
    private static java.lang.String TYPE_SHORT;
    private static java.lang.String TYPE_SHORT_ARRAY;
    private static java.lang.String TYPE_STRING;
    private static java.lang.String TYPE_STRING_LIST;
    private android.content.SharedPreferences cache;
    private java.lang.String cacheKey;

    // Methods
    static
    {
      TAG = com.facebook.SharedPreferencesTokenCachingStrategy.class.getSimpleName();
    }

    public SharedPreferencesTokenCachingStrategy(android.content.Context p0)
    {
      this(p0, null);
    }

    public SharedPreferencesTokenCachingStrategy(android.content.Context p0, String p1)
    {
      super();
      android.content.Context ApplicationContext; // RETVAL
      Validate.notNull(p0, "context");
      if ( Utility.isNullOrEmpty(p1) )
        p1 = "com.facebook.SharedPreferencesTokenCachingStrategy.DEFAULT_KEY";
      this.cacheKey = p1;
      ApplicationContext = p0.getApplicationContext();
      if ( ApplicationContext != null )
        p0 = ApplicationContext;
      this.cache = p0.getSharedPreferences(this.cacheKey, 0);
    
    }

    private void deserializeKey(String p0, android.os.Bundle p1)
 throws org.json.JSONException {
      int v3;
      org.json.JSONObject v4;
      String String;
      org.json.JSONArray JSONArray;
      boolean[] v7;
      org.json.JSONArray v8;
      byte[] v9;
      int Int; // RETVAL
      org.json.JSONArray v11;
      short[] i;
      int v13; // RETVAL
      org.json.JSONArray v14;
      int[] v15;
      org.json.JSONArray v16;
      long[] v17;
      float Double;
      org.json.JSONArray v19;
      float[] j;
      int v21;
      org.json.JSONArray v22;
      double[] v23;
      String v24; // RETVAL
      String v25;
      org.json.JSONArray v26;
      char[] v27;
      int k;
      String v29; // RETVAL
      String v30;
      org.json.JSONArray v31;
      int v32;
      java.util.ArrayList v33;
      int m;
      Object v35; // RETVAL
      String v36;
      v3 = 0;
      v4 = new org.json.JSONObject(this.cache.getString(p0, "{}"));
      String = v4.getString("valueType");
      if ( String.equals("bool") )
      {
        p1.putBoolean(p0, v4.getBoolean("value"));
      }
      else if ( String.equals("bool[]") )
      {
        JSONArray = v4.getJSONArray("value");
        v7 = new boolean[JSONArray.length()];
        while ( v3 < v7.length )
        {
          v7[v3] = JSONArray.getBoolean(v3);
          ++v3;
        }
        p1.putBooleanArray(p0, v7);
      }
      else
      {
        if ( String.equals("byte") )
        {
          p1.putByte(p0, (byte)v4.getInt("value"));
          return;
        }
        if ( String.equals("byte[]") )
        {
          v8 = v4.getJSONArray("value");
          v9 = new byte[v8.length()];
          while ( v3 < v9.length )
          {
            v9[v3] = (byte)v8.getInt(v3);
            ++v3;
          }
          p1.putByteArray(p0, v9);
        }
        else
        {
          if ( String.equals("short") )
          {
            Int = v4.getInt("value");
            p1.putShort(p0, (short)Int);
            return;
          }
          if ( String.equals("short[]") )
          {
            v11 = v4.getJSONArray("value");
            for ( i = new short[v11.length()]; v3 < i.length; i[v3++] = (short)v13 )
              v13 = v11.getInt(v3);
            p1.putShortArray(p0, i);
          }
          else
          {
            if ( String.equals("int") )
            {
              p1.putInt(p0, v4.getInt("value"));
              return;
            }
            if ( String.equals("int[]") )
            {
              v14 = v4.getJSONArray("value");
              v15 = new int[v14.length()];
              while ( v3 < v15.length )
              {
                v15[v3] = v14.getInt(v3);
                ++v3;
              }
              p1.putIntArray(p0, v15);
            }
            else
            {
              if ( String.equals("long") )
              {
                p1.putLong(p0, v4.getLong("value"));
                return;
              }
              if ( String.equals("long[]") )
              {
                v16 = v4.getJSONArray("value");
                v17 = new long[v16.length()];
                while ( v3 < v17.length )
                {
                  v17[v3] = v16.getLong(v3);
                  ++v3;
                }
                p1.putLongArray(p0, v17);
              }
              else
              {
                if ( String.equals("float") )
                {
                  Double = (float)v4.getDouble("value");
                  p1.putFloat(p0, Double);
                  return;
                }
                if ( String.equals("float[]") )
                {
                  v19 = v4.getJSONArray("value");
                  for ( j = new float[v19.length()]; v3 < j.length; j[v3++] = Float.intBitsToFloat(v21) )
                    v21 = Float.floatToRawIntBits((float)((float)v19.getDouble(v3)));
                  p1.putFloatArray(p0, j);
                }
                else
                {
                  if ( String.equals("double") )
                  {
                    p1.putDouble(p0, v4.getDouble("value"));
                    return;
                  }
                  if ( String.equals("double[]") )
                  {
                    v22 = v4.getJSONArray("value");
                    v23 = new double[v22.length()];
                    while ( v3 < v23.length )
                    {
                      v23[v3] = v22.getDouble(v3);
                      ++v3;
                    }
                    p1.putDoubleArray(p0, v23);
                  }
                  else if ( String.equals("char") )
                  {
                    v24 = v4.getString("value");
                    v25 = v24;
                    if ( v24 != null && v24.length() == 1 )
                      p1.putChar(p0, v25.charAt(0));
                  }
                  else if ( String.equals("char[]") )
                  {
                    v26 = v4.getJSONArray("value");
                    v27 = new char[v26.length()];
                    for ( k = 0; k < v27.length; ++k )
                    {
                      v29 = v26.getString(k);
                      v30 = v29;
                      if ( v29 != null && v29.length() == 1 )
                        v27[k] = v30.charAt(0);
                    }
                    p1.putCharArray(p0, v27);
                  }
                  else
                  {
                    if ( String.equals("string") )
                    {
                      p1.putString(p0, v4.getString("value"));
                      return;
                    }
                    if ( String.equals("stringList") )
                    {
                      v31 = v4.getJSONArray("value");
                      v32 = v31.length();
                      v33 = new java.util.ArrayList(v32);
                      for ( m = 0; m < v32; ++m )
                      {
                        v35 = v31.get(m);
                        if ( v35 == JSONObject.NULL )
                          v36 = null;
                        else
                          v36 = (String)v35;
                        v33.add(m, v36);
                      }
                      p1.putStringArrayList(p0, v33);
                    }
                    else if ( String.equals("enum") )
                    {
                      try
                      {
                        p1.putSerializable(p0, java.lang.Enum.valueOf((Class<Enum>)Class.forName(v4.getString("enumType")), v4.getString("value")));
                      }
                      catch ( ClassNotFoundException e )
                      {
                        return;
                      }
                      catch ( IllegalArgumentException e )
                      {
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    private void serializeKey(
            String p0,
            android.os.Bundle p1,
            android.content.SharedPreferences.Editor p2)
 throws org.json.JSONException {
      String v4;
      int v5;
      Object v6; // RETVAL
      Object v7;
      org.json.JSONObject v8;
      Object v9;
      org.json.JSONArray v10;
      byte[] v11;
      int v12;
      short[] v13;
      int v14;
      int[] v15;
      int v16;
      long[] v17;
      int v18;
      float[] v19;
      int v20;
      double[] v21;
      int v22;
      boolean[] v23;
      int v24;
      char[] v25;
      int v26;
      java.util.Iterator v27;
      Object v28;
      v4 = null;
      v5 = 0;
      v6 = p1.get(p0);
      v7 = v6;
      if ( v6 != null )
      {
        v8 = new org.json.JSONObject();
        if ( v6 instanceof Byte )
        {
          v8.put("value", ((Byte)v6).intValue());
          v9 = null;
          v4 = "byte";
        }
        else if ( v6 instanceof Short )
        {
          v8.put("value", ((Short)v6).intValue());
          v9 = null;
          v4 = "short";
        }
        else if ( v6 instanceof Integer )
        {
          v8.put("value", ((Integer)v6).intValue());
          v9 = null;
          v4 = "int";
        }
        else if ( v6 instanceof Long )
        {
          v8.put("value", ((Long)v6).longValue());
          v9 = null;
          v4 = "long";
        }
        else if ( v6 instanceof Float )
        {
          v8.put("value", ((Float)v6).doubleValue());
          v9 = null;
          v4 = "float";
        }
        else if ( v6 instanceof Double )
        {
          v8.put("value", ((Double)v6).doubleValue());
          v9 = null;
          v4 = "double";
        }
        else if ( v6 instanceof Boolean )
        {
          v8.put("value", ((Boolean)v6).booleanValue());
          v9 = null;
          v4 = "bool";
        }
        else if ( v6 instanceof Character )
        {
          v8.put("value", v6.toString());
          v9 = null;
          v4 = "char";
        }
        else if ( v6 instanceof String )
        {
          v8.put("value", (String)v6);
          v9 = null;
          v4 = "string";
        }
        else if ( v6 instanceof Enum )
        {
          v8.put("value", v6.toString());
          v8.put("enumType", v7.getClass().getName());
          v9 = null;
          v4 = "enum";
        }
        else
        {
          v10 = new org.json.JSONArray();
          if ( v6 instanceof byte[] )
          {
            v4 = "byte[]";
            v11 = (byte[])v6;
            v12 = v11.length;
            while ( v5 < v12 )
              v10.put(v11[v5++]);
            v9 = v10;
          }
          else if ( v6 instanceof short[] )
          {
            v4 = "short[]";
            v13 = (short[])v6;
            v14 = v13.length;
            while ( v5 < v14 )
              v10.put(v13[v5++]);
            v9 = v10;
          }
          else if ( v6 instanceof int[] )
          {
            v4 = "int[]";
            v15 = (int[])v6;
            v16 = v15.length;
            while ( v5 < v16 )
              v10.put(v15[v5++]);
            v9 = v10;
          }
          else if ( v6 instanceof long[] )
          {
            v4 = "long[]";
            v17 = (long[])v6;
            v18 = v17.length;
            while ( v5 < v18 )
              v10.put(v17[v5++]);
            v9 = v10;
          }
          else if ( v6 instanceof float[] )
          {
            v4 = "float[]";
            v19 = (float[])v6;
            v20 = v19.length;
            while ( v5 < v20 )
              v10.put(v19[v5++]);
            v9 = v10;
          }
          else if ( v6 instanceof double[] )
          {
            v4 = "double[]";
            v21 = (double[])v6;
            v22 = v21.length;
            while ( v5 < v22 )
              v10.put(v21[v5++]);
            v9 = v10;
          }
          else if ( v6 instanceof boolean[] )
          {
            v4 = "bool[]";
            v23 = (boolean[])v6;
            v24 = v23.length;
            while ( v5 < v24 )
              v10.put(v23[v5++]);
            v9 = v10;
          }
          else if ( v6 instanceof char[] )
          {
            v4 = "char[]";
            v25 = (char[])v6;
            v26 = v25.length;
            while ( v5 < v26 )
              v10.put(String.valueOf(v25[v5++]));
            v9 = v10;
          }
          else if ( v6 instanceof java.util.List )
          {
            v4 = "stringList";
            v27 = ((java.util.List)v6).iterator();
            while ( v27.hasNext() )
            {
              v28 = (String)v27.next();
              if ( v28 == null )
                v28 = JSONObject.NULL;
              v10.put(v28);
            }
            v9 = v10;
          }
          else
          {
            v9 = null;
          }
        }
        if ( v4 != null )
        {
          v8.put("valueType", v4);
          if ( v9 != null )
            v8.putOpt("value", v9);
          p2.putString(p0, v8.toString());
        }
      }
    }

    public void clear()
    {
      this.cache.edit().clear().apply();
    }

    public android.os.Bundle load()
    {
      android.os.Bundle v1;
      java.util.Iterator v2;
      String v3;
      v1 = new android.os.Bundle();
      v2 = this.cache.getAll().keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        try
        {
          this.deserializeKey(v3, v1);
        }
        catch ( org.json.JSONException v4 )
        {
          Logger.log(LoggingBehavior.CACHE, 5, TAG, "Error reading cached value for key: '" + v3 + "' -- " + v4);
          return null;
        }
      }
      return v1;
    }

    public void save(android.os.Bundle p0)
    {
      android.content.SharedPreferences.Editor v2;
      java.util.Iterator v3;
      String v4;
      Validate.notNull(p0, "bundle");
      v2 = this.cache.edit();
      v3 = p0.keySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (String)v3.next();
        try
        {
          this.serializeKey(v4, p0, v2);
        }
        catch ( org.json.JSONException v5 )
        {
          Logger.log(LoggingBehavior.CACHE, 5, TAG, "Error processing value for key: '" + v4 + "' -- " + v5);
          return;
        }
      }
      v2.apply();
      return;
    }

}
