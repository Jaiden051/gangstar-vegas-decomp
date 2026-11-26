// Decompiled from classes.dex (SourceFile: TileOverlayOptions$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

class TileOverlayOptions$2 extends com.google.android.gms.maps.model.internal.i$a {
    // Fields
    final com.google.android.gms.maps.model.TileProvider a;
    final com.google.android.gms.maps.model.TileOverlayOptions b;

    // Methods
    TileOverlayOptions$2(com.google.android.gms.maps.model.TileOverlayOptions p0, com.google.android.gms.maps.model.TileProvider p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.maps.model.Tile a(int p0, int p1, int p2)
    {
      return this.a.a(p0, p1, p2);
    }

}
