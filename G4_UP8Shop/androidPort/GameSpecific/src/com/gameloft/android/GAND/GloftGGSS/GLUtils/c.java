// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class c implements java.lang.Runnable {
    // Methods
    c()
    {
      super();
    }

    public final void run()
    {
      try
      {
        Device.access$202(new android.webkit.WebView(SUtils.getContext()));
        Device.access$302(Device.access$200().getSettings().getUserAgentString());
        Device.access$202(null);
      }
      catch ( Exception e )
      {
        Device.access$302("GL_EMU_001");
      }
    }

}
