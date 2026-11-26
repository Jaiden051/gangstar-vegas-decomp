// Decompiled from classes.dex (SourceFile: s.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class s extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private final com.google.android.gms.tagmanager.s$a d;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.p.toString();
      b = com.google.android.gms.internal.b.aD.toString();
      c = com.google.android.gms.internal.b.c.toString();
    }

    public s(com.google.android.gms.tagmanager.s$a p0)
    {
      super(a, new String[] { b });
      this.d = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      String v2;
      java.util.Map v3;
      com.google.android.gms.internal.d$a v4;
      Object v5; // RETVAL
      java.util.Iterator v8;
      java.util.Map.Entry v10;
      v2 = dh.j((com.google.android.gms.internal.d$a)p0.get(b));
      v3 = new java.util.HashMap();
      v4 = (com.google.android.gms.internal.d$a)p0.get(c);
      if ( v4 != null )
      {
        v5 = dh.o(v4);
        if ( !(v5 instanceof java.util.Map) )
        {
          bh.D("FunctionCallMacro: expected ADDITIONAL_PARAMS to be a map.");
          return dh.mY();
        }
        v8 = ((java.util.Map)v5).entrySet().iterator();
        while ( v8.hasNext() )
        {
          v10 = (java.util.Map.Entry)v8.next();
          v3.put(v10.getKey().toString(), v10.getValue());
        }
      }
      try
      {
        return dh.r(this.d.a(v2, v3));
      }
      catch ( Exception v11 )
      {
        bh.D("Custom macro/tag " + v2 + " threw exception " + v11.getMessage());
        return dh.mY();
      }
    }

    public final boolean a()
    {
      return false;
    }

}
