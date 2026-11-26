// Decompiled from classes.dex (SourceFile: WearableListenerService$a$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

class WearableListenerService$a$3 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.wearable.internal.ai a;
    final com.google.android.gms.wearable.WearableListenerService$a b;

    // Methods
    WearableListenerService$a$3(com.google.android.gms.wearable.WearableListenerService$a p0, com.google.android.gms.wearable.internal.ai p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      this.b.a.c();
    }

}
