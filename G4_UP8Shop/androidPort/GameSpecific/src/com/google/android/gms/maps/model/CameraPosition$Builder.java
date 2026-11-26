// Decompiled from classes.dex (SourceFile: CameraPosition$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public final class CameraPosition$Builder {
    // Fields
    private com.google.android.gms.maps.model.LatLng a;
    private float b;
    private float c;
    private float d;

    // Methods
    public CameraPosition$Builder()
    {
      super();
    }

    public CameraPosition$Builder(com.google.android.gms.maps.model.CameraPosition p0)
    {
      super();
      this.a = p0.a;
      this.b = p0.b;
      this.c = p0.c;
      this.d = p0.d;
    }

    public final com.google.android.gms.maps.model.CameraPosition$Builder a(float p0)
    {
      this.b = p0;
      return this;
    }

    public final com.google.android.gms.maps.model.CameraPosition$Builder a(
            com.google.android.gms.maps.model.LatLng p0)
    {
      this.a = p0;
      return this;
    }

    public final com.google.android.gms.maps.model.CameraPosition a()
    {
      return new com.google.android.gms.maps.model.CameraPosition(this.a, this.b, this.c, this.d);
    }

    public final com.google.android.gms.maps.model.CameraPosition$Builder b(float p0)
    {
      this.c = p0;
      return this;
    }

    public final com.google.android.gms.maps.model.CameraPosition$Builder c(float p0)
    {
      this.d = p0;
      return this;
    }

}
