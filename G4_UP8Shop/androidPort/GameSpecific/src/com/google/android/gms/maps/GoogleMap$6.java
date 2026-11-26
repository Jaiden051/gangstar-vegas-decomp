// Decompiled from classes.dex (SourceFile: GoogleMap$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$6 extends com.google.android.gms.maps.internal.ILocationSourceDelegate$a {
    // Fields
    final com.google.android.gms.maps.LocationSource a;
    final com.google.android.gms.maps.GoogleMap b;

    // Methods
    GoogleMap$6(com.google.android.gms.maps.GoogleMap p0, com.google.android.gms.maps.LocationSource p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a()
    {
      this.a.b();
    }

    public final void a(com.google.android.gms.maps.internal.h p0)
    {
      new com.google.android.gms.maps.GoogleMap$6$1(this, p0);
      this.a.a();
    }

}
