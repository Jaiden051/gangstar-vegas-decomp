// Decompiled from classes.dex (SourceFile: CustomPropertyKey.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata;

import com.google.android.gms.internal.hn;
public class CustomPropertyKey implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final java.lang.String b;
    final int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.metadata.c();
    }

    CustomPropertyKey(int p0, String p1, int p2)
    {
      super();
      boolean v4;
      v4 = true;
      this.a = p0;
      hn.b(p1, "key");
      if ( p2 != 0 )
        v4 = p2 == 1;
      hn.a(v4, "visibility must be either PUBLIC or PRIVATE");
      this.b = p1;
      this.c = p2;
    
    }

    private String a()
    {
      return this.b;
    }

    private int b()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.drive.metadata.CustomPropertyKey v4;
      v2 = false;
      if ( p0 != null )
      {
        if ( p0 == this )
        {
          return true;
        }
        else if ( p0 instanceof com.google.android.gms.drive.metadata.CustomPropertyKey )
        {
          v4 = (com.google.android.gms.drive.metadata.CustomPropertyKey)p0;
          if ( v4.b.equals(this.b) )
            return v4.c == this.c;
        }
      }
      return v2;
    }

    public int hashCode()
    {
      return (this.b + this.c).hashCode();
    }

    public String toString()
    {
      return "CustomPropertyKey(" + this.b + "," + this.c + ")";
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.metadata.c.a(this, p0, p1);
    }

}
