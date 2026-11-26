// Decompiled from classes.dex (SourceFile: AsyncTask.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
public abstract class AsyncTask {
    // Fields
    private boolean a;

    // Methods
    public AsyncTask()
    {
      super();
      this.a = false;
      this.a = false;
    }

    private void a(Integer p0)
    {
      SUtils.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.PushNotification.a(this, p0));
    }

    private void a(boolean p0)
    {
      this.a = p0;
    }

    /* synthetic */ static boolean access$000(com.gameloft.android.GAND.GloftGGSS.PushNotification.AsyncTask p0)
    {
      return p0.a;
    }

    /* synthetic */ static void access$100(
            com.gameloft.android.GAND.GloftGGSS.PushNotification.AsyncTask p0,
            Integer p1)
    {
      SUtils.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.PushNotification.a(p0, p1));
    }

    private boolean b()
    {
      return this.a;
    }

    protected static void onCancelled()
    {
      ;
    }

    protected static void onPostExecute$64a1e71e()
    {
      ;
    }

    private static void onPreExecute()
    {
      ;
    }

    protected abstract java.lang.Integer a();

    public final void a(android.os.Bundle p0)
    {
      new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.PushNotification.b(this, p0)).start();
    }

}
