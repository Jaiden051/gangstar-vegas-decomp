// Decompiled from classes.dex (SourceFile: VASTActivity$8$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.activity;

class VASTActivity$8$1 implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.vast.activity.VASTActivity$8 a;

    // Methods
    VASTActivity$8$1(com.gameloft.glads.vast.activity.VASTActivity$8 p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      VASTActivity.access$1500(this.a.c).setText(VASTActivity.access$1400(this.a.b));
    }

}
