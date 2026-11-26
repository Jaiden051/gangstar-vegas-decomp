// Decompiled from classes.dex (SourceFile: ad.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class ad extends java.lang.Thread {
    // Fields
    final java.lang.String a;

    // Methods
    ad(String p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      String v1;
      String v2;
      String v3;
      org.json.JSONObject v5;
      v1 = (GLAds.access$100() + GLAds.access$1100()).replace("LOCATION", this.a);
      v2 = GLAds.access$300();
      if ( !GLAds.hasInternetConnection() )
      {
        if ( !GLAds.access$1200() )
          GLAds.access$1300(this.a);
        return;
      }
      if ( GLAds.access$100() == null )
      {
        GLAds.setBannerState(2);
        return;
      }
      if ( !GLAds.access$1200() )
      {
        GLAds.startBannerTimer(this.a, GLAds.access$900());
        v3 = GLAds.access$400(v1, v2, GLAds.access$900());
        if ( !GLAds.access$1200() )
        {
          if ( v3 == null )
          {
            GLAds.stopBannerTimer();
            GLAds.access$1300(this.a);
            return;
          }
          try
          {
            v5 = new org.json.JSONObject(v3);
          }
          catch ( org.json.JSONException e )
          {
            v5 = null;
          }
          if ( v5 != null )
          {
            if ( v5.optString("action", "").equals("show") && !GLAds.access$1200() )
            {
              if ( v5.optString("mraid", "0").equals("1") )
                MRAIDBanner.show(v5.optString("content", ""), this.a);
              else
                GLAdBanner.show(v5.optString("content", ""), this.a);
              return;
            }
            if ( v5.optString("action", "").equals("exit") )
              v5.optString("error", null);
          }
          GLAds.stopBannerTimer();
          GLAds.setBannerState(2);
        }
      }
    }

}
