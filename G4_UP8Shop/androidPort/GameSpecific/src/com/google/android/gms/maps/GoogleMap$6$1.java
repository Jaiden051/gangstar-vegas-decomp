// Decompiled from classes.dex (SourceFile: GoogleMap$6$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

class GoogleMap$6$1 implements com.google.android.gms.maps.LocationSource$OnLocationChangedListener {
    // Fields
    final com.google.android.gms.maps.internal.h a;
    final com.google.android.gms.maps.GoogleMap$6 b;

    // Methods
    GoogleMap$6$1(com.google.android.gms.maps.GoogleMap$6 p0, com.google.android.gms.maps.internal.h p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(android.location.Location p0)
    {
      try
      {
        this.a.a(com.google.android.gms.dynamic.e.h(p0));
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

}
