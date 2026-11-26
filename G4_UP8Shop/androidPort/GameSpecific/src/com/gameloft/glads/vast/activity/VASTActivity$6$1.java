// Decompiled from classes.dex (SourceFile: VASTActivity$6$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.activity;

import com.gameloft.glads.vast.util.VASTLog;
class VASTActivity$6$1 implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.vast.activity.VASTActivity$6 a;

    // Methods
    VASTActivity$6$1(com.gameloft.glads.vast.activity.VASTActivity$6 p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      VASTLog.d(VASTActivity.access$600(), "hiding buttons");
      VASTActivity.access$700(this.a.a).setVisibility(8);
      VASTActivity.access$802(this.a.a, false);
    }

}
