// Decompiled from classes.dex (SourceFile: aa.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class aa implements java.lang.Runnable {
    // Methods
    aa()
    {
      super();
    }

    public final void run()
    {
      MRAIDBanner.handleBackKey();
      MRAIDFullScreen.handleBackKey();
    }

}
