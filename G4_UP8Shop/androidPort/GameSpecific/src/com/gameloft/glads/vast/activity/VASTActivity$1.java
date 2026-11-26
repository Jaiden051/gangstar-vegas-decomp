// Decompiled from classes.dex (SourceFile: VASTActivity$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.activity;

class VASTActivity$1 extends java.lang.Thread {
    // Fields
    final com.gameloft.glads.vast.activity.VASTActivity a;

    // Methods
    VASTActivity$1(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      try
      {
        Thread.sleep(1000);
      }
      catch ( Exception e )
      {
      }
      VASTActivity.access$002(false);
    }

}
