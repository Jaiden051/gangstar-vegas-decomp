// Decompiled from classes.dex (SourceFile: WearableListenerService$a$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

class WearableListenerService$a$2 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.wearable.internal.af a;
    final com.google.android.gms.wearable.WearableListenerService$a b;

    // Methods
    WearableListenerService$a$2(com.google.android.gms.wearable.WearableListenerService$a p0, com.google.android.gms.wearable.internal.af p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      this.b.a.b();
    }

}
