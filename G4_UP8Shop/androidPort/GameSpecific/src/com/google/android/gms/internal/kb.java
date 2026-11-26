// Decompiled from classes.dex (SourceFile: kb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class kb implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.kc CREATOR;
    public final int a;
    public final java.lang.String b;
    public final java.lang.String c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.kc();
    }

    public kb(int p0, String p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public kb(String p0, java.util.Locale p1)
    {
      super();
      this.a = 0;
      this.b = p0;
      this.c = p1.toString();
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.kb v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 != null && p0 instanceof com.google.android.gms.internal.kb )
        {
          v4 = (com.google.android.gms.internal.kb)p0;
          if ( !this.c.equals(v4.c) || !this.b.equals(v4.b) )
            return false;
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = this.b;
      v1[1] = this.c;
      return hl.hashCode(v1);
    }

    public String toString()
    {
      return hl.e(this).a("clientPackageName", this.b).a("locale", this.c).toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      kc.a(this, p0, p1);
    }

}
