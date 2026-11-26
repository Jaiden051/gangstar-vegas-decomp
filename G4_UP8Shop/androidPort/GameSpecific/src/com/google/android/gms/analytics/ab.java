// Decompiled from classes.dex (SourceFile: ab.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class ab {
    // Fields
    private final java.util.Map a;
    private final java.util.Map b;
    private final boolean c;
    private final java.lang.String d;

    // Methods
    ab(String p0, boolean p1)
    {
      super();
      this.a = new java.util.HashMap();
      this.b = new java.util.HashMap();
      this.c = true;
      this.d = p0;
    }

    final String a()
    {
      StringBuilder v3;
      java.util.Iterator v4;
      String v5;
      java.util.Iterator v6;
      String v7;
      if ( !this.c )
        return "";
      v3 = new StringBuilder();
      v3.append(this.d);
      v4 = this.a.keySet().iterator();
      while ( v4.hasNext() )
      {
        v5 = (String)v4.next();
        v3.append("&").append(v5).append("=").append(this.a.get(v5));
      }
      v6 = this.b.keySet().iterator();
      while ( v6.hasNext() )
      {
        v7 = (String)v6.next();
        v3.append("&").append(v7).append("=").append((String)this.b.get(v7));
      }
      return v3.toString();
    }

    final void a(String p0, int p1)
    {
      Integer v3;
      if ( this.c )
      {
        v3 = (Integer)this.a.get(p0);
        if ( v3 == null )
          v3 = Integer.valueOf(0);
        this.a.put(p0, Integer.valueOf(v3.intValue() + p1));
      }
    }

}
