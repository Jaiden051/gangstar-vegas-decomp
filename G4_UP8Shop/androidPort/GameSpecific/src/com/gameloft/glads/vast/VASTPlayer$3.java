// Decompiled from classes.dex (SourceFile: VASTPlayer$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast;

class VASTPlayer$3 implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.vast.VASTPlayer a;

    // Methods
    VASTPlayer$3(com.gameloft.glads.vast.VASTPlayer p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      VASTPlayer.listener.vastClosed();
    }

}
