// Decompiled from classes.dex (SourceFile: lw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
import android.util.TypedValue;
public final class lw {
    // Methods
    private static int a(String p0, com.google.android.gms.internal.lx$a$a[] p1)
    {
      int v2;
      int v3;
      int a;
      com.google.android.gms.internal.lx$a$a v5;
      v2 = p1.length;
      v3 = 0;
      a = 14;
      while ( v3 < v2 )
      {
        v5 = p1[v3];
        if ( a == 14 )
        {
          if ( v5.a == 9 || v5.a == 2 || v5.a == 6 )
          {
            a = v5.a;
          }
          else if ( v5.a != 14 )
          {
            throw new IllegalArgumentException("Unexpected TypedValue type: " + v5.a + " for key " + p0);
          }
        }
        else if ( v5.a != a )
        {
          throw new IllegalArgumentException("The ArrayList elements should all be the same type, but ArrayList with key "
                                           + p0
                                           + " contains items of type "
                                           + a
                                           + " and "
                                           + v5.a);
        }
        ++v3;
      }
      return a;
    }

    static int a(java.util.List<com.google.android.gms.wearable.Asset> p0, com.google.android.gms.wearable.Asset p1)
    {
      p0.add(p1);
      return p0.size() - 1;
    }

    public static com.google.android.gms.internal.lw$a a(com.google.android.gms.wearable.DataMap p0)
    {
      com.google.android.gms.internal.lx v1;
      java.util.ArrayList v2;
      v1 = new com.google.android.gms.internal.lx();
      v2 = new java.util.ArrayList();
      v1.a = a(p0, v2);
      return new com.google.android.gms.internal.lw$a(v1, v2);
    }

    private static com.google.android.gms.internal.lx$a$a a(
            java.util.List<com.google.android.gms.wearable.Asset> p0,
            Object p1)
    {
      com.google.android.gms.internal.lx$a$a v2;
      com.google.android.gms.wearable.DataMap v5;
      java.util.Set v6;
      com.google.android.gms.internal.lx$a[] v7;
      java.util.Iterator v8;
      int v9;
      String v10;
      java.util.ArrayList v11;
      com.google.android.gms.internal.lx$a$a[] v12;
      Object v13;
      int v14;
      int v15;
      int v16;
      Object v17;
      com.google.android.gms.internal.lx$a$a v18; // RETVAL
      int a;
      v2 = new com.google.android.gms.internal.lx$a$a();
      if ( p1 != null )
      {
        v2.b = new com.google.android.gms.internal.lx$a$a$a();
        if ( p1 instanceof String )
        {
          v2.a = 2;
          v2.b.b = (String)p1;
        }
        else if ( p1 instanceof Integer )
        {
          v2.a = 6;
          v2.b.f = ((Integer)p1).intValue();
        }
        else if ( p1 instanceof Long )
        {
          v2.a = 5;
          v2.b.e = ((Long)p1).longValue();
        }
        else if ( p1 instanceof Double )
        {
          v2.a = 3;
          v2.b.c = ((Double)p1).doubleValue();
        }
        else if ( p1 instanceof Float )
        {
          v2.a = 4;
          v2.b.d = ((Float)p1).floatValue();
        }
        else if ( p1 instanceof Boolean )
        {
          v2.a = 8;
          v2.b.h = ((Boolean)p1).booleanValue();
        }
        else if ( p1 instanceof Byte )
        {
          v2.a = 7;
          v2.b.g = ((Byte)p1).byteValue();
        }
        else if ( p1 instanceof byte[] )
        {
          v2.a = 1;
          v2.b.a = (byte[])p1;
        }
        else if ( p1 instanceof String[] )
        {
          v2.a = 11;
          v2.b.k = (String[])p1;
        }
        else if ( p1 instanceof long[] )
        {
          v2.a = 12;
          v2.b.l = (long[])p1;
        }
        else if ( p1 instanceof float[] )
        {
          v2.a = 15;
          v2.b.m = (float[])p1;
        }
        else if ( p1 instanceof com.google.android.gms.wearable.Asset )
        {
          v2.a = 13;
          v2.b.n = lw.a(p0, (com.google.android.gms.wearable.Asset)p1);
        }
        else if ( p1 instanceof com.google.android.gms.wearable.DataMap )
        {
          v2.a = 9;
          v5 = (com.google.android.gms.wearable.DataMap)p1;
          v6 = v5.a();
          v7 = new com.google.android.gms.internal.lx$a[v6.size()];
          v8 = v6.iterator();
          v9 = 0;
          while ( v8.hasNext() )
          {
            v10 = (String)v8.next();
            v7[v9] = new com.google.android.gms.internal.lx$a();
            (v7[v9]).a = v10;
            (v7[v9++]).b = lw.a(p0, (Object)v5.a(v10));
          }
          v2.b.i = (com.google.android.gms.internal.lx$a[])v7;
        }
        else
        {
          if ( !(p1 instanceof java.util.ArrayList) )
            throw new RuntimeException("newFieldValueFromValue: unexpected value " + p1.getClass().getSimpleName());
          v2.a = 10;
          v11 = (java.util.ArrayList)p1;
          v12 = new com.google.android.gms.internal.lx$a$a[v11.size()];
          v13 = null;
          v14 = v11.size();
          v15 = 0;
          v16 = 14;
          while ( v15 < v14 )
          {
            v17 = v11.get(v15);
            v18 = lw.a(p0, v17);
            if ( v18.a != 14 && v18.a != 2 && v18.a != 6 && v18.a != 9 )
              throw new IllegalArgumentException("The only ArrayList element types supported by DataBundleUtil are String, In" +
                                                 "teger, Bundle, and null, but this ArrayList contains a "
                                               + v17.getClass());
            if ( v16 != 14 || v18.a == 14 )
            {
              if ( v18.a != v16 )
                throw new IllegalArgumentException("ArrayList elements must all be of the sameclass, but this one contains a "
                                                 + v13.getClass()
                                                 + " and a "
                                                 + v17.getClass());
              v17 = v13;
              a = v16;
            }
            else
            {
              a = v18.a;
            }
            v12[v15++] = v18;
            v16 = a;
            v13 = v17;
          }
          v2.b.j = v12;
        }
        return v2;
      }
      else
      {
        v2.a = 14;
        return v2;
      }
    }

    public static com.google.android.gms.wearable.DataMap a(com.google.android.gms.internal.lw$a p0)
    {
      com.google.android.gms.wearable.DataMap v1;
      com.google.android.gms.internal.lx$a[] a;
      int v3;
      int i;
      com.google.android.gms.internal.lx$a v5;
      v1 = new com.google.android.gms.wearable.DataMap();
      a = p0.a.a;
      v3 = a.length;
      for ( i = 0; i < v3; ++i )
      {
        v5 = a[i];
        lw.a(p0.b, v1, v5.a, v5.b);
      }
      return v1;
    }

    private static java.util.ArrayList a(
            java.util.List<com.google.android.gms.wearable.Asset> p0,
            com.google.android.gms.internal.lx$a$a$a p1,
            int p2)
    {
      java.util.ArrayList v3;
      com.google.android.gms.internal.lx$a$a[] j;
      int v5;
      int i;
      com.google.android.gms.internal.lx$a$a v7;
      com.google.android.gms.wearable.DataMap v8;
      com.google.android.gms.internal.lx$a[] v9;
      int v10;
      int k;
      com.google.android.gms.internal.lx$a v12;
      v3 = new java.util.ArrayList(p1.j.length);
      j = p1.j;
      v5 = j.length;
      for ( i = 0; i < v5; ++i )
      {
        v7 = j[i];
        if ( v7.a == 14 )
        {
          v3.add(null);
        }
        else
        {
          switch ( p2 )
          {
            case 2:
              v3.add(v7.b.b);
              break;
            case 6:
              v3.add(Integer.valueOf(v7.b.f));
              break;
            case 9:
              v8 = new com.google.android.gms.wearable.DataMap();
              v9 = v7.b.i;
              v10 = v9.length;
              for ( k = 0; k < v10; ++k )
              {
                v12 = v9[k];
                a(p0, v8, v12.a, v12.b);
              }
              v3.add(v8);
              break;
            default:
              throw new IllegalArgumentException("Unexpected typeOfArrayList: " + p2);
          }
        }
      }
      return v3;
    }

    private static void a(
            java.util.List<com.google.android.gms.wearable.Asset> p0,
            com.google.android.gms.wearable.DataMap p1,
            String p2,
            com.google.android.gms.internal.lx$a$a p3)
    {
      int a;
      com.google.android.gms.internal.lx$a$a$a b;
      com.google.android.gms.wearable.DataMap v6;
      com.google.android.gms.internal.lx$a[] i;
      int v8;
      int j;
      com.google.android.gms.internal.lx$a v10;
      int v11;
      java.util.ArrayList v12; // RETVAL
    
      a = p3.a;
      if ( a == 14 )
      {
        p1.a(p2, (String[])null);
        return;
      }
      b = p3.b;
      switch ( a )
      {
        case 1:
          p1.a(p2, b.a);
          return;
        case 2:
          p1.a(p2, b.b);
          return;
        case 3:
          p1.a(p2, b.c);
          return;
        case 4:
          p1.a(p2, b.d);
          return;
        case 5:
          p1.a(p2, b.e);
          return;
        case 6:
          p1.a(p2, b.f);
          return;
        case 7:
          p1.a(p2, (byte)b.g);
          return;
        case 8:
          p1.a(p2, b.h);
          return;
        case 9:
          v6 = new com.google.android.gms.wearable.DataMap();
          i = b.i;
          v8 = i.length;
          for ( j = 0; j < v8; ++j )
          {
            v10 = i[j];
            lw.a(p0, v6, v10.a, v10.b);
          }
          p1.a(p2, v6);
          break;
        case 10:
          v11 = lw.a(p2, b.j);
          v12 = lw.a(p0, b, v11);
          switch ( v11 )
          {
            case 2:
            case 14:
              p1.c(p2, v12);
              return;
            case 9:
              p1.a(p2, v12);
              return;
            default:
              break;
          }
          if ( v11 != 6 )
            throw new IllegalStateException("Unexpected typeOfArrayList: " + v11);
          p1.b(p2, v12);
          break;
        case 11:
          p1.a(p2, b.k);
          return;
        case 12:
          p1.a(p2, b.l);
          return;
        case 13:
          if ( p0 == null )
            throw new RuntimeException("populateBundle: unexpected type for: " + p2);
          p1.a(p2, (com.google.android.gms.wearable.Asset)p0.get((int)b.n));
          break;
        case 15:
          p1.a(p2, b.m);
          return;
        default:
          throw new RuntimeException("populateBundle: unexpected type " + a);
      }
    }

    private static com.google.android.gms.internal.lx$a[] a(com.google.android.gms.wearable.DataMap p0, java.util.List<com.google.android.gms.wearable.Asset> p1)
    {
      java.util.Set v2;
      com.google.android.gms.internal.lx$a[] v3;
      java.util.Iterator v4;
      int v5;
      String v6;
      v2 = p0.a();
      v3 = new com.google.android.gms.internal.lx$a[v2.size()];
      v4 = v2.iterator();
      v5 = 0;
      while ( v4.hasNext() )
      {
        v6 = (String)v4.next();
        v3[v5] = new com.google.android.gms.internal.lx$a();
        (v3[v5]).a = v6;
        (v3[v5++]).b = a(p1, (Object)p0.a(v6));
      }
      return (com.google.android.gms.internal.lx$a[])v3;
    }

}
