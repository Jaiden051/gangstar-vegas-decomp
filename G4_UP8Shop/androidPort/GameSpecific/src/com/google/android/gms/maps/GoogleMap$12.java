// Decompiled from classes.dex (SourceFile: GoogleMap$12.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$12 extends com.google.android.gms.maps.internal.g$a {
    // Fields
    final com.google.android.gms.maps.GoogleMap$OnInfoWindowClickListener a;
    final com.google.android.gms.maps.GoogleMap b;

    // Methods
    GoogleMap$12(com.google.android.gms.maps.GoogleMap p0, com.google.android.gms.maps.GoogleMap$OnInfoWindowClickListener p1)
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

}
