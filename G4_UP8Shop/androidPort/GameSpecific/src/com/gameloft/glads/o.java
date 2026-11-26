// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class o implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.n a;

    // Methods
    o(com.gameloft.glads.n p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      if ( GLAdFullScreen.access$500() && GLAdFullScreen.access$600() != null )
      {
        try
        {
          GLAdFullScreen.access$600().resume();
        }
        catch ( Exception e )
        {
        }
      }
      if ( GLAdFullScreen.access$400() != null )
        GLAds.getParentView().post((Runnable)new com.gameloft.glads.p(this));
    }

}
