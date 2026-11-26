// Decompiled from classes.dex (SourceFile: VASTPlayer$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast;

class VASTPlayer$4 implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.vast.VASTPlayer a;

    // Methods
    VASTPlayer$4(com.gameloft.glads.vast.VASTPlayer p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      VASTPlayer.listener.vastReady();
    }

}
