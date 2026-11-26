// Decompiled from classes.dex (SourceFile: IABAsyncTask.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

public abstract class IABAsyncTask {
    // Fields
    private boolean a;
    private android.content.Context b;

    // Methods
    public IABAsyncTask()
    {
      super();
      this.a = false;
      this.b = null;
      this.a = false;
    }

    private void a(Integer p0)
    {
      if ( this.b != null )
        ((android.app.Activity)this.b).runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.b(this, p0));
    }

    private void a(boolean p0)
    {
      this.a = p0;
    }

    private boolean a()
    {
      return this.a;
    }

    /* synthetic */ static boolean access$000(com.gameloft.android.GAND.GloftGGSS.iab.IABAsyncTask p0)
    {
      return p0.a;
    }

    /* synthetic */ static void access$100(
            com.gameloft.android.GAND.GloftGGSS.iab.IABAsyncTask p0,
            Integer p1)
    {
      if ( p0.b != null )
        ((android.app.Activity)p0.b).runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.b(p0, p1));
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

    protected abstract java.lang.Integer a(android.os.Bundle p0);

    public final void a(android.os.Bundle p0, android.content.Context p1)
    {
      this.b = null;
      new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.c(this, p0)).start();
    }

}
