// Decompiled from classes.dex (SourceFile: GoogleMap$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$2 extends com.google.android.gms.maps.internal.o$a {
    // Fields
    final com.google.android.gms.maps.GoogleMap$OnMyLocationChangeListener a;
    final com.google.android.gms.maps.GoogleMap b;

    // Methods
    GoogleMap$2(com.google.android.gms.maps.GoogleMap p0, com.google.android.gms.maps.GoogleMap$OnMyLocationChangeListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(com.google.android.gms.dynamic.d p0)
    {
      com.google.android.gms.dynamic.e.e(p0);
      this.a.a();
    }

}
