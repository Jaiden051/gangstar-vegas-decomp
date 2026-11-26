// Decompiled from classes.dex (SourceFile: GoogleMap$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$1 extends com.google.android.gms.maps.internal.f$a {
    // Fields
    final com.google.android.gms.maps.GoogleMap$OnIndoorStateChangeListener a;
    final com.google.android.gms.maps.GoogleMap b;

    // Methods
    GoogleMap$1(com.google.android.gms.maps.GoogleMap p0, com.google.android.gms.maps.GoogleMap$OnIndoorStateChangeListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a()
    {
      this.a.a();
    }

    public final void a(com.google.android.gms.maps.model.internal.d p0)
    {
      new com.google.android.gms.maps.model.IndoorBuilding(p0);
      this.a.b();
    }

}
