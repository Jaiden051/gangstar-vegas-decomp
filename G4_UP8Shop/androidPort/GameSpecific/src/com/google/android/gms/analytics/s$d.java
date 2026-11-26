// Decompiled from classes.dex (SourceFile: s$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class s$d {
    // Fields
    private final java.util.Map a;
    private final long b;
    private final java.lang.String c;
    private final java.util.List d;

    // Methods
    public s$d(java.util.Map<String, String> p0, long p1, String p3, java.util.List<com.google.android.gms.internal.fe> p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p3;
      this.d = p4;
    }

    public final java.util.Map<String, String> a()
    {
      return this.a;
    }

    public final long b()
    {
      return this.b;
    }

    public final String c()
    {
      return this.c;
    }

    public final java.util.List<com.google.android.gms.internal.fe> d()
    {
      return this.d;
    }

    public String toString()
    {
      StringBuilder v1;
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      v1 = new StringBuilder();
      v1.append("PATH: ");
      v1.append(this.c);
      if ( this.a != null )
      {
        v1.append("  PARAMS: ");
        v2 = this.a.entrySet().iterator();
        while ( v2.hasNext() )
        {
          v3 = (java.util.Map.Entry)v2.next();
          v1.append((String)v3.getKey());
          v1.append("=");
          v1.append((String)v3.getValue());
          v1.append(",  ");
        }
      }
      return v1.toString();
    }

}
