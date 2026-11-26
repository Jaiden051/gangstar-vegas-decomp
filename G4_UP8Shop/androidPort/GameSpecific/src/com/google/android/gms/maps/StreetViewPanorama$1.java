// Decompiled from classes.dex (SourceFile: StreetViewPanorama$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class StreetViewPanorama$1 extends com.google.android.gms.maps.internal.q$a {
    // Fields
    final com.google.android.gms.maps.StreetViewPanorama$OnStreetViewPanoramaChangeListener a;
    final com.google.android.gms.maps.StreetViewPanorama b;

    // Methods
    StreetViewPanorama$1(
            com.google.android.gms.maps.StreetViewPanorama p0,
            com.google.android.gms.maps.StreetViewPanorama$OnStreetViewPanoramaChangeListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(com.google.android.gms.maps.model.StreetViewPanoramaLocation p0)
    {
      this.a.a();
    }

}
