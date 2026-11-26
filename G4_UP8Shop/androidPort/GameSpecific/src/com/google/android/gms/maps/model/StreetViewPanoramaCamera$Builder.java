// Decompiled from classes.dex (SourceFile: StreetViewPanoramaCamera$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public final class StreetViewPanoramaCamera$Builder {
    // Fields
    public float a;
    public float b;
    public float c;

    // Methods
    public StreetViewPanoramaCamera$Builder()
    {
      super();
    }

    public StreetViewPanoramaCamera$Builder(com.google.android.gms.maps.model.StreetViewPanoramaCamera p0)
    {
      super();
      this.c = p0.a;
      this.a = p0.c;
      this.b = p0.b;
    }

    private com.google.android.gms.maps.model.StreetViewPanoramaCamera$Builder a(float p0)
    {
      this.c = p0;
      return this;
    }

    private com.google.android.gms.maps.model.StreetViewPanoramaCamera$Builder a(
            com.google.android.gms.maps.model.StreetViewPanoramaOrientation p0)
    {
      this.b = p0.a;
      this.a = p0.b;
      return this;
    }

    private com.google.android.gms.maps.model.StreetViewPanoramaCamera a()
    {
      return new com.google.android.gms.maps.model.StreetViewPanoramaCamera(this.c, this.b, this.a);
    }

    private com.google.android.gms.maps.model.StreetViewPanoramaCamera$Builder b(float p0)
    {
      this.b = p0;
      return this;
    }

    private com.google.android.gms.maps.model.StreetViewPanoramaCamera$Builder c(float p0)
    {
      this.a = p0;
      return this;
    }

}
