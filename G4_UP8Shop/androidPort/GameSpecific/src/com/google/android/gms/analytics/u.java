// Decompiled from classes.dex (SourceFile: u.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class u {
    // Fields
    private static final com.google.android.gms.analytics.u d;
    private java.util.SortedSet a;
    private java.lang.StringBuilder b;
    private boolean c;

    // Methods
    static
    {
      d = new com.google.android.gms.analytics.u();
    }

    private u()
    {
      super();
      this.a = new java.util.TreeSet();
      this.b = new StringBuilder();
      this.c = false;
    }

    public static com.google.android.gms.analytics.u cP()
    {
      return d;
    }

    public final synchronized String a()
    {
      StringBuilder v1;
      int v2;
      int v3;
      com.google.android.gms.analytics.u$a v4;
      int v5;
      v1 = new StringBuilder();
      v2 = 6;
      v3 = 0;
      while ( this.a.size() > 0 )
      {
        v4 = (com.google.android.gms.analytics.u$a)this.a.first();
        this.a.remove(v4);
        v5 = v4.ordinal();
        while ( v5 >= v2 )
        {
          v1.append("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_".charAt(v3));
          v2 += 6;
          v3 = 0;
        }
        v3 += 1 << (v4.ordinal() % 6);
      }
      if ( v3 > 0 || v1.length() == 0 )
        v1.append("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_".charAt(v3));
      this.a.clear();
      return v1.toString();
    }

    public final synchronized void a(com.google.android.gms.analytics.u$a p0)
    {
      if ( !this.c )
      {
        this.a.add(p0);
        this.b.append("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_".charAt(p0.ordinal()));
      }
    }

    public final synchronized void a(boolean p0)
    {
      this.c = p0;
    }

    public final synchronized String b()
    {
      String result; // RETVAL
    
      if ( this.b.length() > 0 )
        this.b.insert(0, ".");
      result = this.b.toString();
      this.b = new StringBuilder();
      return result;
    }

}
