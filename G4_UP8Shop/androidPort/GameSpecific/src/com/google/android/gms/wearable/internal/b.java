// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class b implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    public final com.google.android.gms.wearable.internal.ac b;
    public final android.content.IntentFilter[] c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.c();
    }

    b(int p0, android.os.IBinder p1, android.content.IntentFilter[] p2)
    {
      super();
      this.a = p0;
      if ( p1 != null )
        this.b = ac$a.bx(p1);
      else
        this.b = null;
      this.c = (android.content.IntentFilter[])p2;
    }

    public b(com.google.android.gms.wearable.internal.av p0)
    {
      super();
      this.a = 1;
      this.b = p0;
      this.c = p0.a();
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
      com.google.android.gms.wearable.internal.c.a(this, p0, p1);
    }

}
