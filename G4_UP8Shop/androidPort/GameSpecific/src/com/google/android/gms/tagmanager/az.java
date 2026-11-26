// Decompiled from classes.dex (SourceFile: az.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class az extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private static final java.lang.String d;
    private static final java.lang.String e;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.I.toString();
      b = com.google.android.gms.internal.b.n.toString();
      c = com.google.android.gms.internal.b.aQ.toString();
      d = com.google.android.gms.internal.b.aT.toString();
      e = com.google.android.gms.internal.b.at.toString();
    }

    public az()
    {
      super(a, new String[] { b });
    }

    private static String a(String p0, com.google.android.gms.tagmanager.az$a p1, java.util.Set<Character> p2)
 throws java.io.UnsupportedEncodingException {
      String v4;
      java.util.Iterator v5;
      String v6;
      String v7;
      switch ( az$1.a[p1.ordinal()] )
      {
        case 1:
          p0 = dk.cv(p0);
          break;
        case 2:
          v4 = p0.replace("\\", "\\\\");
          v5 = p2.iterator();
          v6 = v4;
          while ( v5.hasNext() )
          {
            v7 = ((Character)v5.next()).toString();
            v6 = v6.replace(v7, "\\" + v7);
          }
          p0 = v6;
          break;
        default:
          break;
      }
      return p0;
    }

    private void a(StringBuilder p0, String p1, com.google.android.gms.tagmanager.az$a p2, java.util.Set<Character> p3)
 throws java.io.UnsupportedEncodingException {
      p0.append(a(p1, p2, p3));
    }

    private static void a(java.util.Set<Character> p0, String p1)
    {
      int i;
      for ( i = 0; i < p1.length(); ++i )
        p0.add(Character.valueOf(p1.charAt(i)));
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
 throws java.io.UnsupportedEncodingException {
      com.google.android.gms.internal.d$a v2;
      com.google.android.gms.internal.d$a v5;
      String v6;
      com.google.android.gms.internal.d$a v7;
      String v8;
      com.google.android.gms.tagmanager.az$a v9;
      com.google.android.gms.internal.d$a v10;
      String v11;
      com.google.android.gms.tagmanager.az$a v12;
      java.util.Set v13;
      StringBuilder v14;
      int v15;
      com.google.android.gms.internal.d$a[] c;
      int v17;
      int i;
      com.google.android.gms.internal.d$a v19;
      int j;
      String v21;
      String v22;
      v2 = (com.google.android.gms.internal.d$a)p0.get(b);
      if ( v2 == null )
        return dh.mY();
      v5 = (com.google.android.gms.internal.d$a)p0.get(az.c);
      if ( v5 != null )
        v6 = dh.j(v5);
      else
        v6 = "";
      v7 = (com.google.android.gms.internal.d$a)p0.get(d);
      if ( v7 != null )
        v8 = dh.j(v7);
      else
        v8 = "=";
      v9 = az$a.a;
      v10 = (com.google.android.gms.internal.d$a)p0.get(e);
      if ( v10 != null )
      {
        v11 = dh.j(v10);
        if ( "url".equals(v11) )
        {
          v12 = az$a.b;
          v13 = null;
        }
        else
        {
          if ( !"backslash".equals(v11) )
          {
            bh.A("Joiner: unsupported escape type: " + v11);
            return dh.mY();
          }
          v12 = az$a.c;
          v13 = new java.util.HashSet();
          a(v13, v6);
          a(v13, v8);
          v13.remove(Character.valueOf((char)0x5C));
        }
      }
      else
      {
        v13 = null;
        v12 = v9;
      }
      v14 = new StringBuilder();
      switch ( v2.a )
      {
        case 2:
          v15 = 1;
          c = v2.c;
          v17 = c.length;
          for ( i = 0; i < v17; ++i )
          {
            v19 = c[i];
            if ( v15 == 0 )
              v14.append(v6);
            this.a(v14, dh.j(v19), v12, v13);
            v15 = 0;
          }
          break;
        case 3:
          for ( j = 0; j < v2.d.length; ++j )
          {
            if ( j > 0 )
              v14.append(v6);
            v21 = dh.j(v2.d[j]);
            v22 = dh.j(v2.e[j]);
            this.a(v14, v21, v12, v13);
            v14.append(v8);
            this.a(v14, v22, v12, v13);
          }
          break;
        default:
          this.a(v14, dh.j(v2), v12, v13);
          break;
      }
      return dh.r(v14.toString());
    }

    public final boolean a()
    {
      return true;
    }

}
