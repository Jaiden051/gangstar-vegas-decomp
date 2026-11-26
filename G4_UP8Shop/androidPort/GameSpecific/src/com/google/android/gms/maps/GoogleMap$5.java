// Decompiled from classes.dex (SourceFile: GoogleMap$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$5 extends com.google.android.gms.maps.internal.s$a {
    // Fields
    final com.google.android.gms.maps.GoogleMap$SnapshotReadyCallback a;
    final com.google.android.gms.maps.GoogleMap b;

    // Methods
    GoogleMap$5(com.google.android.gms.maps.GoogleMap p0, com.google.android.gms.maps.GoogleMap$SnapshotReadyCallback p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(android.graphics.Bitmap p0)
    {
      this.a.a();
    }

    public final void a(com.google.android.gms.dynamic.d p0)
    {
      com.google.android.gms.dynamic.e.e(p0);
      this.a.a();
    }

}
