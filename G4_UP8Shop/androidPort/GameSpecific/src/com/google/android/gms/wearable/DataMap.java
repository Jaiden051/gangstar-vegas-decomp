// Decompiled from classes.dex (SourceFile: DataMap.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

import android.text.TextUtils;
import android.util.Log;
import com.google.android.gms.internal.lw;
import com.google.android.gms.internal.lx;
import com.google.android.gms.internal.mf;
import java.util.Arrays;
public class DataMap {
    // Fields
    public static java.lang.String a;
    private final java.util.HashMap b;

    // Methods
    public DataMap()
    {
      super();
      this.b = new java.util.HashMap();
    }

    private static void a(android.os.Bundle p0, String p1, Object p2)
    {
      java.util.ArrayList v3;
      java.util.Iterator i;
      if ( p2 instanceof String )
      {
        p0.putString(p1, (String)p2);
      }
      else if ( p2 instanceof Integer )
      {
        p0.putInt(p1, ((Integer)p2).intValue());
      }
      else if ( p2 instanceof Long )
      {
        p0.putLong(p1, ((Long)p2).longValue());
      }
      else if ( p2 instanceof Double )
      {
        p0.putDouble(p1, ((Double)p2).doubleValue());
      }
      else if ( p2 instanceof Float )
      {
        p0.putFloat(p1, ((Float)p2).floatValue());
      }
      else if ( p2 instanceof Boolean )
      {
        p0.putBoolean(p1, ((Boolean)p2).booleanValue());
      }
      else if ( p2 instanceof Byte )
      {
        p0.putByte(p1, ((Byte)p2).byteValue());
      }
      else if ( p2 instanceof byte[] )
      {
        p0.putByteArray(p1, (byte[])p2);
      }
      else if ( p2 instanceof String[] )
      {
        p0.putStringArray(p1, (String[])p2);
      }
      else if ( p2 instanceof long[] )
      {
        p0.putLongArray(p1, (long[])p2);
      }
      else if ( p2 instanceof float[] )
      {
        p0.putFloatArray(p1, (float[])p2);
      }
      else if ( p2 instanceof com.google.android.gms.wearable.Asset )
      {
        p0.putParcelable(p1, (android.os.Parcelable)(com.google.android.gms.wearable.Asset)p2);
      }
      else if ( p2 instanceof com.google.android.gms.wearable.DataMap )
      {
        p0.putParcelable(p1, ((com.google.android.gms.wearable.DataMap)p2).b());
      }
      else if ( p2 instanceof java.util.ArrayList )
      {
        switch ( c((java.util.ArrayList)p2) )
        {
          case 0:
          case 1:
          case 3:
            p0.putStringArrayList(p1, (java.util.ArrayList)p2);
            break;
          case 2:
            p0.putIntegerArrayList(p1, (java.util.ArrayList)p2);
            break;
          case 4:
            v3 = new java.util.ArrayList();
            for ( i = ((java.util.ArrayList)p2).iterator();
                  i.hasNext();
                  v3.add(((com.google.android.gms.wearable.DataMap)i.next()).b()) )
            {
              ;
            }
            p0.putParcelableArrayList(p1, v3);
            break;
          default:
            return;
        }
      }
    }

    private static void a(com.google.android.gms.wearable.DataMap p0, String p1, Object p2)
    {
      if ( p2 instanceof String )
      {
        p0.a(p1, (String)p2);
      }
      else if ( p2 instanceof Integer )
      {
        p0.a(p1, ((Integer)p2).intValue());
      }
      else if ( p2 instanceof Long )
      {
        p0.a(p1, ((Long)p2).longValue());
      }
      else if ( p2 instanceof Double )
      {
        p0.a(p1, ((Double)p2).doubleValue());
      }
      else if ( p2 instanceof Float )
      {
        p0.a(p1, ((Float)p2).floatValue());
      }
      else if ( p2 instanceof Boolean )
      {
        p0.a(p1, ((Boolean)p2).booleanValue());
      }
      else if ( p2 instanceof Byte )
      {
        p0.a(p1, ((Byte)p2).byteValue());
      }
      else if ( p2 instanceof byte[] )
      {
        p0.a(p1, (byte[])p2);
      }
      else if ( p2 instanceof String[] )
      {
        p0.a(p1, (String[])p2);
      }
      else if ( p2 instanceof long[] )
      {
        p0.a(p1, (long[])p2);
      }
      else if ( p2 instanceof float[] )
      {
        p0.a(p1, (float[])p2);
      }
      else if ( p2 instanceof com.google.android.gms.wearable.Asset )
      {
        p0.a(p1, (com.google.android.gms.wearable.Asset)p2);
      }
      else if ( p2 instanceof android.os.Bundle )
      {
        p0.a(p1, fromBundle((android.os.Bundle)p2));
      }
      else if ( p2 instanceof java.util.ArrayList )
      {
        switch ( c((java.util.ArrayList)p2) )
        {
          case 0:
          case 1:
          case 3:
            p0.c(p1, (java.util.ArrayList)p2);
            break;
          case 2:
            p0.b(p1, (java.util.ArrayList)p2);
            break;
          case 5:
            p0.a(p1, arrayListFromBundleArrayList((java.util.ArrayList)p2));
            break;
          default:
            return;
        }
      }
    }

    private void a(String p0, Object p1, String p2, ClassCastException p3)
    {
      a(p0, p1, p2, "<null>", p3);
    }

    private static void a(String p0, Object p1, String p2, Object p3, ClassCastException p4)
    {
      StringBuilder v5;
      v5 = new StringBuilder();
      v5.append("Key ");
      v5.append(p0);
      v5.append(" expected ");
      v5.append(p2);
      v5.append(" but value was a ");
      v5.append(p1.getClass().getName());
      v5.append(".  The default value ");
      v5.append(p3);
      v5.append(" was returned.");
      Log.w("DataMap", v5.toString());
      Log.w("DataMap", "Attempt to cast generated internal exception:", p4);
    }

    private static boolean a(com.google.android.gms.wearable.Asset p0, com.google.android.gms.wearable.Asset p1)
    {
      if ( p0 == null || p1 == null )
        return p0 == p1;
      if ( TextUtils.isEmpty(p0.b()) )
        return Arrays.equals(p0.a(), p1.a());
      return p0.b().equals(p1.b());
    }

    private static boolean a(
            com.google.android.gms.wearable.DataMap p0,
            com.google.android.gms.wearable.DataMap p1)
    {
      java.util.Iterator v4;
      String v5;
      Object v6;
      Object v7; // RETVAL
    
      if ( p0.b.size() != p1.b.size() )
        return false;
      v4 = p0.b.keySet().iterator();
      while ( v4.hasNext() )
      {
        v5 = (String)v4.next();
        v6 = p0.a(v5);
        v7 = p1.a(v5);
        if ( v6 instanceof com.google.android.gms.wearable.Asset )
        {
          if ( !(v7 instanceof com.google.android.gms.wearable.Asset) )
            return false;
          if ( !a((com.google.android.gms.wearable.Asset)v6, (com.google.android.gms.wearable.Asset)v7) )
            return false;
        }
        else if ( v6 instanceof String[] )
        {
          if ( !(v7 instanceof String[]) )
            return false;
          if ( !Arrays.equals((String[])v6, (String[])v7) )
            return false;
        }
        else if ( v6 instanceof long[] )
        {
          if ( !(v7 instanceof long[]) )
            return false;
          if ( !Arrays.equals((long[])v6, (long[])v7) )
            return false;
        }
        else if ( v6 instanceof float[] )
        {
          if ( !(v7 instanceof float[]) )
            return false;
          if ( !Arrays.equals((float[])v6, (float[])v7) )
            return false;
        }
        else if ( v6 instanceof byte[] )
        {
          if ( !(v7 instanceof byte[]) )
            return false;
          if ( !Arrays.equals((byte[])v6, (byte[])v7) )
            return false;
        }
        else
        {
          if ( v6 == null || v7 == null )
            return v6 == v7;
          if ( !v6.equals(v7) )
            return false;
        }
      }
      return true;
    }

    public static java.util.ArrayList<com.google.android.gms.wearable.DataMap> arrayListFromBundleArrayList(
            java.util.ArrayList<android.os.Bundle> p0)
    {
      java.util.ArrayList v1;
      java.util.Iterator i;
      v1 = new java.util.ArrayList();
      for ( i = p0.iterator(); i.hasNext(); v1.add(fromBundle((android.os.Bundle)i.next())) )
        ;
      return v1;
    }

    private byte b(String p0, byte p1)
    {
      java.util.HashMap b;
      Object v4; // RETVAL
    
      b = this.b;
      v4 = b.get(p0);
      if ( v4 != null )
      {
        try
        {
          return ((Byte)v4).byteValue();
        }
        catch ( ClassCastException v7 )
        {
          a(p0, v4, "Byte", Byte.valueOf((byte)0), v7);
          return (byte)0;
        }
      }
      else
      {
        return (byte)0;
      }
    }

    private double b(String p0, double p1)
    {
      java.util.HashMap b;
      Object v4; // RETVAL
      Object v5;
      b = this.b;
      v4 = b.get(p0);
      v5 = v4;
      if ( v4 != null )
      {
        try
        {
          return ((Double)v4).doubleValue();
        }
        catch ( ClassCastException v8 )
        {
          a(p0, v5, "Double", Double.valueOf(0.0), v8);
          return 0.0;
        }
      }
      else
      {
        return 0.0;
      }
    }

    private float b(String p0, float p1)
    {
      java.util.HashMap b;
      Object v4; // RETVAL
    
      b = this.b;
      v4 = b.get(p0);
      if ( v4 != null )
      {
        try
        {
          return ((Float)v4).floatValue();
        }
        catch ( ClassCastException v7 )
        {
          a(p0, v4, "Float", Float.valueOf(0.0f), v7);
          return 0.0f;
        }
      }
      else
      {
        return 0.0f;
      }
    }

    private int b(String p0, int p1)
    {
      java.util.HashMap b;
      Object v4; // RETVAL
    
      b = this.b;
      v4 = b.get(p0);
      if ( v4 != null )
      {
        try
        {
          return ((Integer)v4).intValue();
        }
        catch ( ClassCastException v7 )
        {
          this.a(p0, v4, "Integer", v7);
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }

    private long b(String p0, long p1)
    {
      java.util.HashMap b;
      Object v4; // RETVAL
    
      b = this.b;
      v4 = b.get(p0);
      if ( v4 != null )
      {
        try
        {
          return ((Long)v4).longValue();
        }
        catch ( ClassCastException v7 )
        {
          this.a(p0, v4, "long", v7);
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }

    private android.os.Bundle b()
    {
      android.os.Bundle v1;
      java.util.Iterator v2;
      String v3;
      v1 = new android.os.Bundle();
      v2 = this.b.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        a(v1, v3, this.b.get(v3));
      }
      return v1;
    }

    private String b(String p0, String p1)
    {
      String v3; // RETVAL
    
      v3 = this.j(p0);
      if ( v3 != null )
        return v3;
      return p1;
    }

    private boolean b(String p0)
    {
      return this.b.containsKey(p0);
    }

    private boolean b(String p0, boolean p1)
    {
      java.util.HashMap b;
      Object v4; // RETVAL
    
      b = this.b;
      v4 = b.get(p0);
      if ( v4 != null )
      {
        try
        {
          return ((Boolean)v4).booleanValue();
        }
        catch ( ClassCastException v7 )
        {
          a(p0, v4, "Boolean", Boolean.valueOf(false), v7);
          return false;
        }
      }
      else
      {
        return false;
      }
    }

    private static int c(java.util.ArrayList<?> p0)
    {
      java.util.Iterator v3;
      Object v4; // RETVAL
    
      if ( p0.isEmpty() )
        return 0;
      v3 = p0.iterator();
      while ( v3.hasNext() )
      {
        v4 = v3.next();
        if ( v4 != null )
        {
          if ( v4 instanceof Integer )
            return 2;
          if ( v4 instanceof String )
            return 3;
          if ( v4 instanceof com.google.android.gms.wearable.DataMap )
            return 4;
          if ( v4 instanceof android.os.Bundle )
            return 5;
        }
      }
      return 1;
    }

    private Object c(String p0)
    {
      return this.b.remove(p0);
    }

    private byte[] c()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      return mf.d(lw.a(this).a);
    }

    private int d()
    {
      return this.b.size();
    }

    private boolean d(String p0)
    {
      return this.b(p0, false);
    }

    private byte e(String p0)
    {
      return this.b(p0, (byte)0);
    }

    private boolean e()
    {
      return this.b.isEmpty();
    }

    private int f(String p0)
    {
      return this.b(p0, (byte)0);
    }

    private void f()
    {
      this.b.clear();
    }

    public static com.google.android.gms.wearable.DataMap fromBundle(android.os.Bundle p0)
    {
      com.google.android.gms.wearable.DataMap v1;
      java.util.Iterator v2;
      String v3;
      p0.setClassLoader(com.google.android.gms.wearable.Asset.class.getClassLoader());
      v1 = new com.google.android.gms.wearable.DataMap();
      v2 = p0.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        a(v1, v3, p0.get(v3));
      }
      return v1;
    }

    public static com.google.android.gms.wearable.DataMap fromByteArray(byte[] p0)
    {
      try
      {
        return lw.a(new com.google.android.gms.internal.lw$a(lx.n(p0), new java.util.ArrayList()));
      }
      catch ( com.google.android.gms.internal.me v2 )
      {
        throw new IllegalArgumentException("Unable to convert data", v2);
      }
    }

    private long g(String p0)
    {
      return this.b(p0, (byte)0);
    }

    private float h(String p0)
    {
      return this.b(p0, 0.0f);
    }

    private double i(String p0)
    {
      return this.b(p0, 0.0);
    }

    private String j(String p0)
    {
      Object v2; // RETVAL
      String v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (String)v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "String", v5);
        return null;
      }
      return v3;
    }

    private com.google.android.gms.wearable.Asset k(String p0)
    {
      Object v2; // RETVAL
      com.google.android.gms.wearable.Asset v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (com.google.android.gms.wearable.Asset)v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "Asset", v5);
        return null;
      }
      return v3;
    }

    private com.google.android.gms.wearable.DataMap l(String p0)
    {
      Object v2; // RETVAL
      com.google.android.gms.wearable.DataMap v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (com.google.android.gms.wearable.DataMap)v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "DataMap", v5);
        return null;
      }
      return v3;
    }

    private java.util.ArrayList<Integer> m(String p0)
    {
      Object v2; // RETVAL
      java.util.ArrayList v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (java.util.ArrayList)v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "ArrayList<Integer>", v5);
        return null;
      }
      return v3;
    }

    private java.util.ArrayList<String> n(String p0)
    {
      Object v2; // RETVAL
      java.util.ArrayList v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (java.util.ArrayList)v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "ArrayList<String>", v5);
        return null;
      }
      return v3;
    }

    private java.util.ArrayList<com.google.android.gms.wearable.DataMap> o(String p0)
    {
      Object v2; // RETVAL
      java.util.ArrayList v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (java.util.ArrayList)v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "ArrayList<DataMap>", v5);
        return null;
      }
      return v3;
    }

    private byte[] p(String p0)
    {
      Object v2; // RETVAL
      byte[] v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (byte[])v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "byte[]", v5);
        return null;
      }
      return (byte[])v3;
    }

    private long[] q(String p0)
    {
      Object v2; // RETVAL
      long[] v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (long[])v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "long[]", v5);
        return null;
      }
      return (long[])v3;
    }

    private float[] r(String p0)
    {
      Object v2; // RETVAL
      float[] v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (float[])v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "float[]", v5);
        return null;
      }
      return (float[])v3;
    }

    private String[] s(String p0)
    {
      Object v2; // RETVAL
      String[] v3;
      v2 = this.b.get(p0);
      v3 = null;
      if ( v2 == null )
        return null;
      try
      {
        v3 = (String[])v2;
      }
      catch ( ClassCastException v5 )
      {
        this.a(p0, v2, "String[]", v5);
        return null;
      }
      return v3;
    }

    public final <T> T a(String p0)
    {
      return (T)this.b.get(p0);
    }

    public final java.util.Set<String> a()
    {
      return this.b.keySet();
    }

    public final void a(com.google.android.gms.wearable.DataMap p0)
    {
      java.util.Iterator v2;
      String v3;
      v2 = p0.b.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        this.b.put(v3, p0.a(v3));
      }
    }

    public final void a(String p0, byte p1)
    {
      this.b.put(p0, Byte.valueOf(p1));
    }

    public final void a(String p0, double p1)
    {
      this.b.put(p0, Double.valueOf(p1));
    }

    public final void a(String p0, float p1)
    {
      this.b.put(p0, Float.valueOf(p1));
    }

    public final void a(String p0, int p1)
    {
      this.b.put(p0, Integer.valueOf(p1));
    }

    public final void a(String p0, long p1)
    {
      this.b.put(p0, Long.valueOf(p1));
    }

    public final void a(String p0, com.google.android.gms.wearable.Asset p1)
    {
      this.b.put(p0, p1);
    }

    public final void a(String p0, com.google.android.gms.wearable.DataMap p1)
    {
      this.b.put(p0, p1);
    }

    public final void a(String p0, String p1)
    {
      this.b.put(p0, p1);
    }

    public final void a(String p0, java.util.ArrayList<com.google.android.gms.wearable.DataMap> p1)
    {
      this.b.put(p0, p1);
    }

    public final void a(String p0, boolean p1)
    {
      this.b.put(p0, Boolean.valueOf(p1));
    }

    public final void a(String p0, byte[] p1)
    {
      this.b.put(p0, p1);
    }

    public final void a(String p0, float[] p1)
    {
      this.b.put(p0, p1);
    }

    public final void a(String p0, long[] p1)
    {
      this.b.put(p0, p1);
    }

    public final void a(String p0, String[] p1)
    {
      this.b.put(p0, p1);
    }

    public final void b(String p0, java.util.ArrayList<Integer> p1)
    {
      this.b.put(p0, p1);
    }

    public final void c(String p0, java.util.ArrayList<String> p1)
    {
      this.b.put(p0, p1);
    }

    public boolean equals(Object p0)
    {
      return p0 instanceof com.google.android.gms.wearable.DataMap && a(this, (com.google.android.gms.wearable.DataMap)p0);
    }

    public int hashCode()
    {
      return 29 * this.b.hashCode();
    }

    public String toString()
    {
      return this.b.toString();
    }

}
