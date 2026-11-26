// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class i extends java.lang.Thread {
    // Fields
    final java.lang.String a;
    final boolean b;

    // Methods
    i(String p0, boolean p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      while ( GLAdFullScreen.access$000() )
      {
        try
        {
          Thread.sleep(10);
        }
        catch ( InterruptedException e )
        {
        }
      }
      GLAds.getParentView().postDelayed((Runnable)new com.gameloft.glads.j(this), 100);
    }

}
