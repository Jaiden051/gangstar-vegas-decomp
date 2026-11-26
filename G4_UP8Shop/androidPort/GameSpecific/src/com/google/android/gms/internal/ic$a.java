// Decompiled from classes.dex (SourceFile: ic$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ic$a implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ie CREATOR;
    final int a;
    final java.lang.String b;
    final java.util.ArrayList c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ie();
    }

    ic$a(int p0, String p1, java.util.ArrayList<com.google.android.gms.internal.ic$b> p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    ic$a(String p0, java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> p1)
    {
      super();
      this.a = 1;
      this.b = p0;
      this.c = a(p1);
    }

    private static java.util.ArrayList<com.google.android.gms.internal.ic$b> a(
            java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> p0)
    {
      java.util.ArrayList v3;
      java.util.Iterator v4;
      String v5;
      if ( p0 == null )
        return null;
      v3 = new java.util.ArrayList();
      v4 = p0.keySet().iterator();
      while ( v4.hasNext() )
      {
        v5 = (String)v4.next();
        v3.add(new com.google.android.gms.internal.ic$b(v5, (com.google.android.gms.internal.hz$a)p0.get(v5)));
      }
      return v3;
    }

    final java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> a()
    {
      java.util.HashMap v1;
      int v2;
      int i;
      com.google.android.gms.internal.ic$b v4;
      v1 = new java.util.HashMap();
      v2 = this.c.size();
      for ( i = 0; i < v2; ++i )
      {
        v4 = (com.google.android.gms.internal.ic$b)this.c.get(i);
        v1.put(v4.b, v4.c);
      }
      return v1;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ie.a(this, p0, p1);
    }

}
