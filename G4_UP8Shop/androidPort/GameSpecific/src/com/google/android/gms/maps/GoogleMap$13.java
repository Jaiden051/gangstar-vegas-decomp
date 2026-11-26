// Decompiled from classes.dex (SourceFile: GoogleMap$13.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$13 extends com.google.android.gms.maps.internal.d$a {
    // Fields
    final com.google.android.gms.maps.GoogleMap$InfoWindowAdapter a;
    final com.google.android.gms.maps.GoogleMap b;

    // Methods
    GoogleMap$13(com.google.android.gms.maps.GoogleMap p0, com.google.android.gms.maps.GoogleMap$InfoWindowAdapter p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.dynamic.d a(com.google.android.gms.maps.model.internal.f p0)
    {
      new com.google.android.gms.maps.model.Marker(p0);
      return com.google.android.gms.dynamic.e.h(this.a.a());
    }

    public final com.google.android.gms.dynamic.d b(com.google.android.gms.maps.model.internal.f p0)
    {
      new com.google.android.gms.maps.model.Marker(p0);
      return com.google.android.gms.dynamic.e.h(this.a.b());
    }

}
