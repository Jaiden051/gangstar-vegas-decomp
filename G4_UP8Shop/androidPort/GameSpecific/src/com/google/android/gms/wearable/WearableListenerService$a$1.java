// Decompiled from classes.dex (SourceFile: WearableListenerService$a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

class WearableListenerService$a$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.common.data.DataHolder a;
    final com.google.android.gms.wearable.WearableListenerService$a b;

    // Methods
    WearableListenerService$a$1(com.google.android.gms.wearable.WearableListenerService$a p0, com.google.android.gms.common.data.DataHolder p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      com.google.android.gms.wearable.DataEventBuffer v1;
      v1 = new com.google.android.gms.wearable.DataEventBuffer(this.a);
      try
      {
        this.b.a.a();
      }
      finally
      {
        v1.d();
      }
    }

}
