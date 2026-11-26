// Decompiled from classes.dex (SourceFile: TileOverlayOptions$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

class TileOverlayOptions$1 implements com.google.android.gms.maps.model.TileProvider {
    // Fields
    final com.google.android.gms.maps.model.TileOverlayOptions a;
    private final com.google.android.gms.maps.model.internal.i c;

    // Methods
    TileOverlayOptions$1(com.google.android.gms.maps.model.TileOverlayOptions p0)
    {
      super();
      this.a = p0;
      this.c = TileOverlayOptions.a(this.a);
    
    }

    public final com.google.android.gms.maps.model.Tile a(int p0, int p1, int p2)
    {
      try
      {
        return this.c.a(p0, p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        return null;
      }
    }

}
