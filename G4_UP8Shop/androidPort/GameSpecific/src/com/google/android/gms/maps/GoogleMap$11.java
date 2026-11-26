// Decompiled from classes.dex (SourceFile: GoogleMap$11.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$11 extends com.google.android.gms.maps.internal.m$a {
    // Fields
    final com.google.android.gms.maps.GoogleMap$OnMarkerDragListener a;
    final com.google.android.gms.maps.GoogleMap b;

    // Methods
    GoogleMap$11(com.google.android.gms.maps.GoogleMap p0, com.google.android.gms.maps.GoogleMap$OnMarkerDragListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(com.google.android.gms.maps.model.internal.f p0)
    {
      new com.google.android.gms.maps.model.Marker(p0);
      this.a.a();
    }

    public final void b(com.google.android.gms.maps.model.internal.f p0)
    {
      new com.google.android.gms.maps.model.Marker(p0);
      this.a.c();
    }

    public final void c(com.google.android.gms.maps.model.internal.f p0)
    {
      new com.google.android.gms.maps.model.Marker(p0);
      this.a.b();
    }

}
