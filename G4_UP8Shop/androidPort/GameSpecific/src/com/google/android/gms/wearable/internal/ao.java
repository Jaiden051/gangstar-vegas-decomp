// Decompiled from classes.dex (SourceFile: ao.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class ao implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    public final com.google.android.gms.wearable.internal.ac b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.ap();
    }

    ao(int p0, android.os.IBinder p1)
    {
      super();
      this.a = p0;
      if ( p1 != null )
        this.b = ac$a.bx(p1);
      else
        this.b = null;
    }

    public ao(com.google.android.gms.wearable.internal.ac p0)
    {
      super();
      this.a = 1;
      this.b = p0;
    }

    final android.os.IBinder a()
    {
      if ( this.b != null )
        return this.b.asBinder();
      else
        return null;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ap.a(this, p0, p1);
    }

}
