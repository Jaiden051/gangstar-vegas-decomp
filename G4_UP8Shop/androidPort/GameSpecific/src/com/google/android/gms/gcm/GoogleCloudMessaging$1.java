// Decompiled from classes.dex (SourceFile: GoogleCloudMessaging$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.gcm;

class GoogleCloudMessaging$1 extends android.os.Handler {
    // Fields
    final com.google.android.gms.gcm.GoogleCloudMessaging a;

    // Methods
    GoogleCloudMessaging$1(com.google.android.gms.gcm.GoogleCloudMessaging p0, android.os.Looper p1)
    {
      super(p1);
      this.a = p0;
    
    }

    public void handleMessage(android.os.Message p0)
    {
      this.a.g.add((android.content.Intent)p0.obj);
    }

}
