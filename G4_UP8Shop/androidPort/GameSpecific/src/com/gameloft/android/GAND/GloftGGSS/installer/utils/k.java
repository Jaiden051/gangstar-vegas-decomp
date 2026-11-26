// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

final class k implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.installer.utils.Section a;

    // Methods
    k(com.gameloft.android.GAND.GloftGGSS.installer.utils.Section p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      Object v1; // RETVAL
      Object v2;
      v1 = Section.access$000();
      v2 = v1;
      synchronized ( v2 )
      {
        try
        {
          Section.access$100(this.a).close();
        }
        catch ( java.io.IOException e )
        {
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

}
