// Decompiled from classes.dex (SourceFile: DriveEventService$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.events;

import android.util.Log;
class DriveEventService$1 extends android.os.Binder {
    // Fields
    final com.google.android.gms.drive.events.DriveEventService a;

    // Methods
    DriveEventService$1(com.google.android.gms.drive.events.DriveEventService p0)
    {
      super();
      this.a = p0;
    
    }

    protected boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
    {
      Log.d("DriveEventService", "onTransact");
      DriveEventService.gi().add((com.google.android.gms.drive.events.DriveEvent)p1.readParcelable(this.a.getClassLoader()));
      this.a.startService(new android.content.Intent(this.a, this.a.getClass()));
      return true;
    }

}
