// Decompiled from classes.dex (SourceFile: VASTActivity$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.activity;

class VASTActivity$6 extends java.util.TimerTask {
    // Fields
    final com.gameloft.glads.vast.activity.VASTActivity a;

    // Methods
    VASTActivity$6(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      VASTActivity.access$900(this.a).post((Runnable)new com.gameloft.glads.vast.activity.VASTActivity$6$1(this));
    }

}
