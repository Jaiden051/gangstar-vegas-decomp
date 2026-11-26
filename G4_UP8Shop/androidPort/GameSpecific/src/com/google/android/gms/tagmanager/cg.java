// Decompiled from classes.dex (SourceFile: cg.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.regex.Pattern;
class cg extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private static final java.lang.String d;
    private static final java.lang.String e;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.K.toString();
      b = com.google.android.gms.internal.b.n.toString();
      c = com.google.android.gms.internal.b.o.toString();
      d = com.google.android.gms.internal.b.aK.toString();
      e = com.google.android.gms.internal.b.aE.toString();
    }

    public cg()
    {
      super(a, new String[] { b, c });
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      com.google.android.gms.internal.d$a v2;
      com.google.android.gms.internal.d$a v3;
      com.google.android.gms.internal.d$a v4;
      int v6;
      com.google.android.gms.internal.d$a v7;
      Long v8;
      int v9;
      String v10;
      String v11;
      java.util.regex.Matcher v12;
      v2 = (com.google.android.gms.internal.d$a)p0.get(b);
      v3 = (com.google.android.gms.internal.d$a)p0.get(c);
      if ( v2 == null || v2 == dh.mY() || v3 == null || v3 == dh.mY() )
        return dh.mY();
      v6 = 64;
      if ( dh.n((com.google.android.gms.internal.d$a)p0.get(d)).booleanValue() )
        v6 = 66;
      v7 = (com.google.android.gms.internal.d$a)p0.get(e);
      if ( v7 != null )
      {
        v8 = dh.l(v7);
        if ( v8 == dh.mT() )
          return dh.mY();
        v9 = v8.intValue();
        if ( v9 < 0 )
          return dh.mY();
      }
      else
      {
        v9 = 1;
      }
      try
      {
        v10 = dh.j(v2);
        v11 = null;
        v12 = Pattern.compile(dh.j(v3), v6).matcher(v10);
        if ( v12.find() && v12.groupCount() >= v9 )
          v11 = v12.group(v9);
        if ( v11 != null )
          return dh.r(v11);
        v4 = dh.mY();
      }
      catch ( java.util.regex.PatternSyntaxException e )
      {
        return dh.mY();
      }
      return v4;
    }

    public final boolean a()
    {
      return true;
    }

}
