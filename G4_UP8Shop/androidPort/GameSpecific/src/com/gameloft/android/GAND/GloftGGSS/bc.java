// Decompiled from classes.dex (SourceFile: bc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import org.json.JSONObject;
final class bc implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final int b;
    final com.gameloft.android.GAND.GloftGGSS.bs c;

    // Methods
    bc(String p0, int p1, com.gameloft.android.GAND.GloftGGSS.bs p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    
    }

    public final void run()
    {
      String v1; // RETVAL
      org.json.JSONObject v2;
      org.json.JSONArray JSONArray;
      int i;
      org.json.JSONObject JSONObject;
      int Int;
      org.json.JSONObject v7;
      try
      {
        v1 = IGPFreemiumActivity.access$500(
               "https://ingameads.gameloft.com/redir/rewards.php?action=retrieveItems&game_code="
             + this.a
             + "&game_ver=1.8.2f"
             + "&lang="
             + IGPFreemiumActivity.c[this.b]
             + "&androidid="
             + Device.getAndroidId()
             + "&user="
             + Device.getSerial()
             + "&hdidfv="
             + Device.getHDIDFV());
        if ( v1 != null )
        {
          v2 = new org.json.JSONObject(v1);
          if ( v2.getInt("status") != 0 )
          {
            v2.getString("message");
          }
          else
          {
            JSONArray = v2.getJSONArray("items");
            for ( i = 0; i < JSONArray.length(); ++i )
            {
              JSONObject = JSONArray.getJSONObject(i);
              JSONObject.getInt("id");
              JSONObject.getString("type");
              Int = JSONObject.getInt("amount");
              JSONObject.getInt("isInstall");
              JSONObject.getString("destGameCode");
              JSONObject.getString("creation");
              this.c.a(Int);
            }
            if ( JSONArray.length() != 0 )
            {
              v7 = v2.getJSONObject("message");
              v7.getString("title");
              this.c.a(v7.getString("content"));
            }
          }
        }
      }
      catch ( Exception v8 )
      {
        com.gameloft.android.DecompRT.discard("Exception occured: " + v8.getMessage());
      }
      System.gc();
    }

}
