// Decompiled from classes.dex (SourceFile: ao.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class ao implements java.lang.Runnable {
    // Methods
    ao()
    {
      super();
    }

    public final void run()
    {
      if ( MRAIDBanner.access$000() != null )
        MRAIDBanner.access$000().setLayoutParams(MRAIDBanner.access$100());
    }

}
