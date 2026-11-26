// Decompiled from classes.dex (SourceFile: CheckResourceIdsExistRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class CheckResourceIdsExistRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int a;
    private final java.util.List b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.d();
    }

    CheckResourceIdsExistRequest(int p0, java.util.List<String> p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final int a()
    {
      return this.a;
    }

    public final java.util.List<String> b()
    {
      return this.b;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.internal.d.a(this, p0, p1);
    }

}
