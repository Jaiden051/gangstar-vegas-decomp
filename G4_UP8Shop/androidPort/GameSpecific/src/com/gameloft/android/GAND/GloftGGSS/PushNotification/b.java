// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

final class b implements java.lang.Runnable {
    // Fields
    final android.os.Bundle a;
    final com.gameloft.android.GAND.GloftGGSS.PushNotification.AsyncTask b;

    // Methods
    b(com.gameloft.android.GAND.GloftGGSS.PushNotification.AsyncTask p0, android.os.Bundle p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      AsyncTask.access$100(this.b, Integer.valueOf(this.b.a().intValue()));
    }

}
