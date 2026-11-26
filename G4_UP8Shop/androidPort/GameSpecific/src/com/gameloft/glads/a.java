// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class a implements java.lang.Runnable {
    // Methods
    a()
    {
      super();
    }

    public final void run()
    {
      if ( GLAdBanner.access$000() != null )
        GLAdBanner.access$000().setLayoutParams(GLAdBanner.access$100());
    }

}
