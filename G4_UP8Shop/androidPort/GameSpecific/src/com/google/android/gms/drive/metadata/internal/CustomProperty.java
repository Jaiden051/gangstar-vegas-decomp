// Decompiled from classes.dex (SourceFile: CustomProperty.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

import com.google.android.gms.internal.hn;
public class CustomProperty implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.metadata.CustomPropertyKey b;
    final java.lang.String c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.metadata.internal.c();
    }

    CustomProperty(int p0, com.google.android.gms.drive.metadata.CustomPropertyKey p1, String p2)
    {
      super();
      this.a = p0;
      hn.b(p1, "key");
      this.b = p1;
      this.c = p2;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.metadata.internal.c.a(this, p0, p1);
    }

}
