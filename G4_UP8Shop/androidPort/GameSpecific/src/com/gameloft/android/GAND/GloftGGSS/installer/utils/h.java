// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

final class h extends java.lang.Thread {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient a;

    // Methods
    h(com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      if ( this.a.e != null )
        this.a.e.disconnect();
      HttpClient.access$002(this.a, true);
    }

}
