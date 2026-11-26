// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class n implements java.lang.Runnable {
    // Fields
    final int a;

    // Methods
    n(int p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      try
      {
        InAppBilling.access$100(this.a);
      }
      catch ( Exception e )
      {
      }
    }

}
