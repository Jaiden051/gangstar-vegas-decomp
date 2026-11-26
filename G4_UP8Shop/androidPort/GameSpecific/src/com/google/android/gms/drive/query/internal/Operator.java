// Decompiled from classes.dex (SourceFile: Operator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

public class Operator implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public static final com.google.android.gms.drive.query.internal.Operator a;
    public static final com.google.android.gms.drive.query.internal.Operator b;
    public static final com.google.android.gms.drive.query.internal.Operator c;
    public static final com.google.android.gms.drive.query.internal.Operator d;
    public static final com.google.android.gms.drive.query.internal.Operator e;
    public static final com.google.android.gms.drive.query.internal.Operator f;
    public static final com.google.android.gms.drive.query.internal.Operator g;
    public static final com.google.android.gms.drive.query.internal.Operator h;
    public static final com.google.android.gms.drive.query.internal.Operator i;
    final java.lang.String j;
    final int k;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.query.internal.k();
      a = new com.google.android.gms.drive.query.internal.Operator("=");
      b = new com.google.android.gms.drive.query.internal.Operator("<");
      c = new com.google.android.gms.drive.query.internal.Operator("<=");
      d = new com.google.android.gms.drive.query.internal.Operator(">");
      e = new com.google.android.gms.drive.query.internal.Operator(">=");
      f = new com.google.android.gms.drive.query.internal.Operator("and");
      g = new com.google.android.gms.drive.query.internal.Operator("or");
      h = new com.google.android.gms.drive.query.internal.Operator("not");
      i = new com.google.android.gms.drive.query.internal.Operator("contains");
    }

    Operator(int p0, String p1)
    {
      super();
      this.k = p0;
      this.j = p1;
    }

    private Operator(String p0)
    {
      this(1, p0);
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.drive.query.internal.Operator v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 != null )
        {
          if ( this.getClass() == p0.getClass() )
          {
            v4 = (com.google.android.gms.drive.query.internal.Operator)p0;
            if ( this.j != null )
              return this.j.equals(v4.j);
            else
              return v4.j == null;
          }
          else
          {
            return false;
          }
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
      int v1;
      if ( this.j != null )
        v1 = this.j.hashCode();
      else
        v1 = 0;
      return v1 + 31;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.k.a(this, p0, p1);
    }

}
