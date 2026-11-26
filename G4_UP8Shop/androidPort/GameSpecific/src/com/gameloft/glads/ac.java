// Decompiled from classes.dex (SourceFile: ac.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class ac extends java.lang.Thread {
    // Fields
    final java.lang.String a;

    // Methods
    ac(String p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      String v1;
      String v2; // RETVAL
      org.json.JSONObject v3;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            if ( GLAds.access$100() == null )
            return;
            v1 = GLAds.access$100() + GLAds.access$800().replace("LOCATION", this.a);
            v2 = GLAds.access$400(v1, GLAds.access$300(), GLAds.access$900());
            if ( v2 == null )
            { _pc = 1; continue _sm; }
            try
            {
            v3 = new org.json.JSONObject(v2);
            }
            catch ( org.json.JSONException e )
            {
            v3 = null;
            }
            if ( v3 != null )
            {
            if ( v3.optString("result", "").equals("0") )
            {
            try
            {
            GLAds.access$1000(this.a, 0);
            }
            catch ( UnsatisfiedLinkError e )
            {
            }
            return;
            }
            if ( v3.optString("result", "").equals("1") )
            {
            try
            {
            GLAds.access$1000(this.a, 1);
            }
            catch ( UnsatisfiedLinkError e )
            {
            }
            return;
            }
            if ( v3.optString("result", "").equals("2") )
            {
            try
            {
            GLAds.access$1000(this.a, 2);
            }
            catch ( UnsatisfiedLinkError e )
            {
            }
            return;
            }
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            try
            {
            GLAds.access$1000(this.a, 0);
            }
            catch ( UnsatisfiedLinkError e )
            {
            }
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

}
