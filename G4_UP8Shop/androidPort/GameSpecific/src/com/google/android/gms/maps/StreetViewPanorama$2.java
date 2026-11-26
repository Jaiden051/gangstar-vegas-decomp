// Decompiled from classes.dex (SourceFile: StreetViewPanorama$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class StreetViewPanorama$2 extends com.google.android.gms.maps.internal.p$a {
    // Fields
    final com.google.android.gms.maps.StreetViewPanorama$OnStreetViewPanoramaCameraChangeListener a;
    final com.google.android.gms.maps.StreetViewPanorama b;

    // Methods
    StreetViewPanorama$2(
            com.google.android.gms.maps.StreetViewPanorama p0,
            com.google.android.gms.maps.StreetViewPanorama$OnStreetViewPanoramaCameraChangeListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(com.google.android.gms.maps.model.StreetViewPanoramaCamera p0)
    {
      this.a.a();
    }

}
