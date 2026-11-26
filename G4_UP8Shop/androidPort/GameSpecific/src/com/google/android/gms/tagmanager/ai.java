// Decompiled from classes.dex (SourceFile: ai.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class ai {
    // Methods
    private static void a(com.google.android.gms.tagmanager.DataLayer p0, com.google.android.gms.internal.c$d p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      com.google.android.gms.internal.d$a[] b;
      int v3;
      int i;
      b = p1.b;
      v3 = b.length;
      for ( i = 0; i < v3; ++i )
        p0.a(dh.j(b[i]));
    }

    public static void a(com.google.android.gms.tagmanager.DataLayer p0, com.google.android.gms.internal.c$i p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      if ( p1.c != null )
      {
        a(p0, p1.c);
        b(p0, p1.c);
        c(p0, p1.c);
      }
      else
      {
        bh.D("supplemental missing experimentSupplemental");
      }
    }

    private static void b(com.google.android.gms.tagmanager.DataLayer p0, com.google.android.gms.internal.c$d p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      com.google.android.gms.internal.d$a[] a;
      int v3;
      int i;
      java.util.Map v5; // RETVAL
    
      a = p1.a;
      v3 = a.length;
      for ( i = 0; i < v3; ++i )
      {
        v5 = c(a[i]);
        if ( v5 != null )
          p0.a(v5);
      }
    }

    private static java.util.Map<String, Object> c(com.google.android.gms.internal.d$a p0)
    {
      Object v1; // RETVAL
    
      v1 = dh.o(p0);
      if ( v1 instanceof java.util.Map )
        return (java.util.Map)v1;
      bh.D("value: " + v1 + " is not a map value, ignored.");
      return null;
    }

    private static void c(com.google.android.gms.tagmanager.DataLayer p0, com.google.android.gms.internal.c$d p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      com.google.android.gms.internal.c$c[] c;
      int v3;
      int i;
      com.google.android.gms.internal.c$c v5;
      Object v6; // RETVAL
      Object v7;
      Long v8;
      long b;
      long v10;
      java.util.Map v11; // RETVAL
      java.util.Map v12;
      Object[] v13;
      Object v14; // RETVAL
    
      c = p1.c;
      v3 = c.length;
      for ( i = 0; i < v3; ++i )
      {
        v5 = c[i];
        if ( v5.a == null )
        {
          bh.D("GaExperimentRandom: No key");
          continue;
        }
        v6 = p0.b(v5.a);
        v7 = v6;
        if ( v6 instanceof Number )
          v8 = Long.valueOf(((Number)v6).longValue());
        else
          v8 = null;
        b = v5.b;
        v10 = v5.c;
        if ( !v5.d || v8 == null || v8.longValue() < b || v8.longValue() > v10 )
        {
          if ( b > v10 )
          {
            bh.D("GaExperimentRandom: random range invalid");
            continue;
          }
          v7 = Long.valueOf(Math.round(Math.random() * (double)(v10 - b) + (double)b));
        }
        p0.a(v5.a);
        v11 = DataLayer.c(v5.a, v7);
        v12 = v11;
        if ( v5.e > 0 )
        {
          if ( v11.containsKey("gtm") )
          {
            v14 = v12.get("gtm");
            if ( v14 instanceof java.util.Map )
              ((java.util.Map)v14).put("lifetime", Long.valueOf(v5.e));
            else
              bh.D("GaExperimentRandom: gtm not a map");
          }
          else
          {
            v13 = new Object[2];
            v13[0] = "lifetime";
            v13[1] = Long.valueOf(v5.e);
            v12.put("gtm", DataLayer.mapOf(v13));
          }
        }
        p0.a(v12);
      }
    }

}
