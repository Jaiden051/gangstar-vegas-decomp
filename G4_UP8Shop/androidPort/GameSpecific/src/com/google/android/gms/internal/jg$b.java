// Decompiled from classes.dex (SourceFile: jg$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Message;
import android.util.Log;
class jg$b extends com.google.android.gms.location.a$a {
    // Fields
    private android.os.Handler a;

    // Methods
    jg$b(com.google.android.gms.location.LocationListener p0, android.os.Looper p1)
    {
      super();
      com.google.android.gms.internal.jg$a v3;
      if ( p1 != null )
        v3 = new com.google.android.gms.internal.jg$a(p0, p1);
      else
        v3 = new com.google.android.gms.internal.jg$a(p0);
      this.a = v3;
    
    }

    public final void a()
    {
      this.a = null;
    }

    public final void a(android.location.Location p0)
    {
      android.os.Message v2; // RETVAL
    
      if ( this.a != null )
      {
        v2 = Message.obtain();
        v2.what = 1;
        v2.obj = p0;
        this.a.sendMessage(v2);
      }
      else
      {
        Log.e("LocationClientHelper", "Received a location in client after calling removeLocationUpdates.");
      }
    }

}
