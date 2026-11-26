// Decompiled from classes.dex (SourceFile: fh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fh implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.fi CREATOR;
    final int a;
    final com.google.android.gms.internal.fl[] b;
    public final java.lang.String c;
    public final boolean d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.fi();
    }

    fh(int p0, com.google.android.gms.internal.fl[] p1, String p2, boolean p3)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.internal.fl[])p1;
      this.c = p2;
      this.d = p3;
    }

    public fh(String p0, boolean p1, com.google.android.gms.internal.fl[] p2)
    {
      this(1, p2, p0, true);
      java.util.BitSet v4;
      int i;
      int v6;
      v4 = new java.util.BitSet(fp.dK());
      for ( i = 0; i < p2.length; ++i )
      {
        v6 = (p2[i]).e;
        if ( v6 != -1 )
        {
          if ( v4.get(v6) )
            throw new IllegalArgumentException("Duplicate global search section type " + fp.H(v6));
          v4.set(v6);
        }
      }
    
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      fi.a(this, p0, p1);
    }

}
