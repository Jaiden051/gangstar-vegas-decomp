// Decompiled from classes.dex (SourceFile: Tile.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.maps.internal.v;
public final class Tile implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.TileCreator CREATOR;
    public final int a;
    public final int b;
    public final byte[] c;
    private final int d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.TileCreator();
    }

    Tile(int p0, int p1, int p2, byte[] p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = (byte[])p3;
    }

    public Tile(int p0, int p1, byte[] p2)
    {
      this(1, p0, p1, p2);
    }

    final int a()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.i.a(this, p0, p1);
      else
        TileCreator.a(this, p0, p1);
    }

}
