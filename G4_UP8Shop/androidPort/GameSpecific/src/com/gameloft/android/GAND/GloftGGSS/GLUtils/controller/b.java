// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils.controller;

final class b extends java.util.TimerTask {
    // Fields
    final int a;

    // Methods
    b(int p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      while ( true )
      {
        try
        {
          if ( !StandardHIDController.access$100() )
            return;
          if ( StandardHIDController.access$200() )
            StandardHIDController.access$300();
          Thread.sleep(1000 * this.a);
        }
        catch ( Exception e )
        {
          return;
        }
      }
    }

}
