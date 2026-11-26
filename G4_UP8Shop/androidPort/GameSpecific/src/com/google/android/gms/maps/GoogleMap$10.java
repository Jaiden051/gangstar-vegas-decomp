// Decompiled from classes.dex (SourceFile: GoogleMap$10.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$10 extends com.google.android.gms.maps.internal.l$a {
    // Fields
    final com.google.android.gms.maps.GoogleMap$OnMarkerClickListener a;
    final com.google.android.gms.maps.GoogleMap b;

    // Methods
    GoogleMap$10(com.google.android.gms.maps.GoogleMap p0, com.google.android.gms.maps.GoogleMap$OnMarkerClickListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final boolean a(com.google.android.gms.maps.model.internal.f p0)
    {
      new com.google.android.gms.maps.model.Marker(p0);
      return this.a.a();
    }

}
