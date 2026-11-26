// Decompiled from classes.dex (SourceFile: OnDownloadProgressResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class OnDownloadProgressResponse implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final long b;
    final long c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.ah();
    }

    OnDownloadProgressResponse(int p0, long p1, long p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p3;
    }

    public final long a()
    {
      return this.b;
    }

    public final long b()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ah.a(this, p0, p1);
    }

}
