// Decompiled from classes.dex (SourceFile: ae.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class ae extends java.lang.Thread {
    // Fields
    final java.lang.String a;
    final boolean b;

    // Methods
    ae(String p0, boolean p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      int v1;
      String v2;
      int v3;
      String v4;
      String v5;
      int v6;
      String v7;
      org.json.JSONObject v8;
      boolean v9;
      org.json.JSONObject v10; // RETVAL
      org.json.JSONObject v11;
      int v12;
      int v13;
      int v14;
      int v15;
      boolean v16;
      v1 = 1;
      v2 = null;
      v3 = 0;
      v4 = (GLAds.access$100() + GLAds.access$1400()).replace("LOCATION", this.a);
      v5 = GLAds.access$300();
      if ( !GLAds.hasInternetConnection() )
      {
        if ( !GLAds.access$1500() )
        {
          if ( this.b )
          {
            try
            {
              GLAds.nativeFullScreenAdWillNotDisplayCallback(2);
            }
            catch ( UnsatisfiedLinkError e )
            {
            }
          }
          else
          {
            GLAds.access$1600(this.a);
          }
        }
        return;
      }
      if ( GLAds.access$100() == null )
      {
        GLAds.setFullScreenAdState(2, false);
        return;
      }
      if ( !GLAds.access$1500() )
      {
        v6 = GLAds.access$1700();
        GLAds.startFullscreenAdTimer(this.a, v6, this.b);
        v7 = GLAds.access$400(v4, v5, GLAds.access$1700());
        if ( !GLAds.access$1500() )
        {
          if ( v7 != null )
          {
            try
            {
              v8 = new org.json.JSONObject(v7);
            }
            catch ( org.json.JSONException e )
            {
              v8 = null;
            }
            if ( v8 != null )
            {
              if ( !v8.optString("action", "").equals("show")
                || (com.gameloft.android.DecompRT.comma((v9 = v8.optString("orientation", "").equals("landscape")), (GLAds.access$1500()))) )
              {
                if ( v8.optString("action", "").equals("exit") )
                  v8.optString("error", null);
                GLAds.stopFullscreenAdTimer();
                GLAds.setFullScreenAdState(2, false);
                try
                {
                  GLAds.nativeFullScreenAdWillNotDisplayCallback(4);
                }
                catch ( UnsatisfiedLinkError e )
                {
                }
              }
              else if ( v8.optString("mraid", "0").equals("1") )
              {
                MRAIDFullScreen.show(v8.optString("content", ""), this.a, v9);
              }
              else if ( v8.optString("vast", "0").equals("1") )
              {
                v10 = v8.optJSONObject("info");
                v11 = v10;
                if ( v10 != null )
                {
                  v12 = v10.optInt("creative_id", 0);
                  v13 = v11.optInt("campaign_id", 0);
                  v14 = v11.optInt("location_id", 0);
                  v2 = v11.optString("currency", null);
                  if ( !v11.optBoolean("reward", false) || v2 == null )
                    v1 = 0;
                  v3 = v12;
                  v15 = v14;
                  v16 = v1 != 0;
                }
                else
                {
                  v16 = false;
                  v13 = 0;
                  v15 = 0;
                }
                VASTFullScreen.show(v8.optString("content", ""), v3, v13, v15, v16, v2);
              }
              else
              {
                GLAdFullScreen.show(v8.optString("content", ""), this.a, v9);
              }
            }
            else
            {
              GLAds.stopFullscreenAdTimer();
              GLAds.setFullScreenAdState(2, false);
              try
              {
                GLAds.nativeFullScreenAdWillNotDisplayCallback(1);
              }
              catch ( UnsatisfiedLinkError e )
              {
              }
            }
            return;
          }
          if ( this.b )
          {
            GLAds.stopFullscreenAdTimer();
            GLAds.setFullScreenAdState(2, false);
            try
            {
              GLAds.nativeFullScreenAdWillNotDisplayCallback(3);
            }
            catch ( UnsatisfiedLinkError e )
            {
            }
          }
          else
          {
            GLAds.stopFullscreenAdTimer();
            GLAds.access$1600(this.a);
          }
        }
      }
    }

}
