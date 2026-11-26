// Decompiled from classes.dex (SourceFile: bz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bz extends java.lang.Thread {
    // Methods
    bz()
    {
      super();
    }

    public final void run()
    {
      String v1; // RETVAL
    
      v1 = InGameBrowser.access$1500(
             InGameBrowser.access$1200().replace("LAST_ID", InGameBrowser.access$1100()),
             InGameBrowser.access$1400(InGameBrowser.access$1300()));
      try
      {
        InGameBrowser.access$1600(new org.json.JSONObject("" + v1), false);
      }
      catch ( org.json.JSONException e )
      {
      }
    }

}
