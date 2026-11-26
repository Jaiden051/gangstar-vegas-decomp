// Decompiled from classes.dex (SourceFile: jg$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
class jg$a extends android.os.Handler {
    // Fields
    private final com.google.android.gms.location.LocationListener a;

    // Methods
    public jg$a(com.google.android.gms.location.LocationListener p0)
    {
      super();
      this.a = p0;
    }

    public jg$a(com.google.android.gms.location.LocationListener p0, android.os.Looper p1)
    {
      super(p1);
      this.a = p0;
    }

    public void handleMessage(android.os.Message p0)
    {
      if ( p0.what == 1 )
      {
        new android.location.Location((android.location.Location)p0.obj);
        this.a.a();
      }
      else
      {
        Log.e("LocationClientHelper", "unknown message in LocationHandler.handleMessage");
      }
    }

}
