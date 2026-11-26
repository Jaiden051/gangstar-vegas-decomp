// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

import android.os.Parcel;
public class e<T> extends com.google.android.gms.common.data.DataBuffer<T> {
    // Fields
    private static final java.lang.String[] b;
    private final android.os.Parcelable.Creator c;

    // Methods
    static
    {
      String[] v0;
      v0 = new String[1];
      v0[0] = "data";
      b = v0;
    }

    public e(com.google.android.gms.common.data.DataHolder p0, android.os.Parcelable.Creator<T> p1)
    {
      super(p0);
      this.c = p1;
    }

    public final T a(int p0)
    {
      byte[] v2;
      android.os.Parcel v3;
      com.google.android.gms.common.internal.safeparcel.SafeParcelable v4;
      v2 = this.a.f("data", p0, 0);
      v3 = Parcel.obtain();
      v3.unmarshall(v2, 0, v2.length);
      v3.setDataPosition(0);
      v4 = (com.google.android.gms.common.internal.safeparcel.SafeParcelable)this.c.createFromParcel(v3);
      v3.recycle();
      return (T)v4;
    }

    public final T b(int p0)
    {
      return this.a(p0);
    }

}
