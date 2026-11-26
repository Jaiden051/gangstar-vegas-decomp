// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class b implements java.lang.Runnable {
    // Fields
    final java.lang.Integer a;
    final com.gameloft.android.GAND.GloftGGSS.iab.IABAsyncTask b;

    // Methods
    b(com.gameloft.android.GAND.GloftGGSS.iab.IABAsyncTask p0, Integer p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      try
      {
        if ( IABAsyncTask.access$000(this.b) )
          IABAsyncTask.onCancelled();
        else
          IABAsyncTask.onPostExecute$64a1e71e();
      }
      catch ( Exception e )
      {
      }
    }

}
