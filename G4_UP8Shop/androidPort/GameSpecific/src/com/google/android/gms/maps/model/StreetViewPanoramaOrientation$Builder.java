// Decompiled from classes.dex (SourceFile: StreetViewPanoramaOrientation$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public final class StreetViewPanoramaOrientation$Builder {
    // Fields
    public float a;
    public float b;

    // Methods
    public StreetViewPanoramaOrientation$Builder()
    {
      super();
    }

    public StreetViewPanoramaOrientation$Builder(com.google.android.gms.maps.model.StreetViewPanoramaOrientation p0)
    {
      super();
      this.a = p0.b;
      this.b = p0.a;
    }

    public final com.google.android.gms.maps.model.StreetViewPanoramaOrientation$Builder a(
            float p0)
    {
      this.b = p0;
      return this;
    }

    public final com.google.android.gms.maps.model.StreetViewPanoramaOrientation a()
    {
      return new com.google.android.gms.maps.model.StreetViewPanoramaOrientation(this.b, this.a);
    }

    public final com.google.android.gms.maps.model.StreetViewPanoramaOrientation$Builder b(
            float p0)
    {
      this.a = p0;
      return this;
    }

}
