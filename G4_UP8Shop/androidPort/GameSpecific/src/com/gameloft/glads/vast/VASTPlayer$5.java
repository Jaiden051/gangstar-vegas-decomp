// Decompiled from classes.dex (SourceFile: VASTPlayer$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast;

class VASTPlayer$5 implements java.lang.Runnable {
    // Fields
    final int a;
    final com.gameloft.glads.vast.VASTPlayer b;

    // Methods
    VASTPlayer$5(com.gameloft.glads.vast.VASTPlayer p0, int p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      VASTPlayer.listener.vastError(this.a);
    }

}
