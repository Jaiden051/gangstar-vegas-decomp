// Decompiled from classes.dex (SourceFile: x.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import android.util.Log;
import com.google.android.gms.internal.hn;
public class x<C> extends com.google.android.gms.drive.internal.ac$a {
    // Fields
    private final int a;
    private final com.google.android.gms.drive.events.DriveEvent$Listener b;
    private final com.google.android.gms.drive.internal.x$a c;

    // Methods
    public x(android.os.Looper p0, int p1, com.google.android.gms.drive.events.DriveEvent$Listener<C> p2)
    {
      super();
      this.a = p1;
      this.b = p2;
      this.c = new com.google.android.gms.drive.internal.x$a(p0, 0);
    }

    public final void a(com.google.android.gms.drive.internal.OnEventResponse p0)
    {
      hn.A(this.a == p0.a());
      switch ( p0.a() )
      {
        case 1:
          this.c.a(this.b, (com.google.android.gms.drive.events.DriveEvent)p0.b());
          break;
        case 2:
          this.c.a(this.b, (com.google.android.gms.drive.events.DriveEvent)p0.c());
          break;
        default:
          Log.w("EventCallback", "Unexpected event type:" + p0.a());
          break;
      }
    }

}
