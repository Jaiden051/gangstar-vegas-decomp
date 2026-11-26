// Decompiled from classes.dex (SourceFile: ad$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class ad$2 extends android.content.BroadcastReceiver {
    // Fields
    final com.google.android.gms.internal.ad a;

    // Methods
    ad$2(com.google.android.gms.internal.ad p0)
    {
      super();
      this.a = p0;
    
    }

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      this.a.b(false);
    }

}
