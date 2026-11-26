// Decompiled from classes.dex (SourceFile: UrlTileProvider.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public abstract class UrlTileProvider implements com.google.android.gms.maps.model.TileProvider {
    // Fields
    private final int a;
    private final int c;

    // Methods
    private UrlTileProvider(int p0, int p1)
    {
      super();
      this.a = p0;
      this.c = p1;
    }

    private static long a(java.io.InputStream p0, java.io.OutputStream p1)
 throws java.io.IOException {
      byte[] v2;
      long i;
      int v4; // RETVAL
    
      v2 = new byte[4096];
      for ( i = 0; ; i += v4 )
      {
        v4 = p0.read(v2);
        if ( v4 == -1 )
          break;
        p1.write(v2, 0, v4);
      }
      return i;
    }

    private static byte[] a(java.io.InputStream p0)
 throws java.io.IOException {
      java.io.ByteArrayOutputStream v1;
      v1 = new java.io.ByteArrayOutputStream();
      a(p0, v1);
      return v1.toByteArray();
    }

    public final com.google.android.gms.maps.model.Tile a(int p0, int p1, int p2)
    {
      java.net.URL v4; // RETVAL
      com.google.android.gms.maps.model.Tile v5;
      v4 = this.a();
      if ( v4 == null )
        return b;
      try
      {
        v5 = new com.google.android.gms.maps.model.Tile(this.a, this.c, a(v4.openStream()));
      }
      catch ( java.io.IOException e )
      {
        return null;
      }
      return v5;
    }

    public abstract java.net.URL a();

}
