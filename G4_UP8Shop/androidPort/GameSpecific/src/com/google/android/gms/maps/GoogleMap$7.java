// Decompiled from classes.dex (SourceFile: GoogleMap$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$7 extends com.google.android.gms.maps.internal.e$a {
    // Fields
    final com.google.android.gms.maps.GoogleMap$OnCameraChangeListener a;
    final com.google.android.gms.maps.GoogleMap b;

    // Methods
    GoogleMap$7(com.google.android.gms.maps.GoogleMap p0, com.google.android.gms.maps.GoogleMap$OnCameraChangeListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(com.google.android.gms.maps.model.CameraPosition p0)
    {
      this.a.a();
    }

}
