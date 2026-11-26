// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

final class a implements java.lang.Runnable {
    // Fields
    final java.lang.Integer a;
    final com.gameloft.android.GAND.GloftGGSS.PushNotification.AsyncTask b;

    // Methods
    a(com.gameloft.android.GAND.GloftGGSS.PushNotification.AsyncTask p0, Integer p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      try
      {
        if ( AsyncTask.access$000(this.b) )
          AsyncTask.onCancelled();
        else
          AsyncTask.onPostExecute$64a1e71e();
      }
      catch ( Exception e )
      {
      }
    }

}
