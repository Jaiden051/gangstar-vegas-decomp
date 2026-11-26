// Decompiled from classes.dex (SourceFile: co$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.concurrent.Executors;
class co$1 implements com.google.android.gms.tagmanager.co$b {
    // Fields
    final com.google.android.gms.tagmanager.co a;

    // Methods
    co$1(com.google.android.gms.tagmanager.co p0)
    {
      super();
      this.a = p0;
    
    }

    public final java.util.concurrent.ScheduledExecutorService a()
    {
      return Executors.newSingleThreadScheduledExecutor();
    }

}
