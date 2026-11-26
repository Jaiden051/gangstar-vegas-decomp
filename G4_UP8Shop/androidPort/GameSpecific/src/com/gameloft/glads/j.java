// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class j implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.i a;

    // Methods
    j(com.gameloft.glads.i p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      android.content.Intent v1;
      try
      {
        GLAdFullScreen.access$102(this.a.a);
        v1 = new android.content.Intent(Utils.getContext(), com.gameloft.glads.GLAdFullScreen.class);
        v1.putExtra("landscape", this.a.b);
        Utils.getContext().startActivity(v1);
      }
      catch ( Exception v2 )
      {
        v2.printStackTrace();
        GLAdFullScreen.access$200();
        GLAdFullScreen.access$302(false);
        GLAdFullScreen.access$400().loadDataWithBaseURL(GLAds.getGLAdsBaseURL(), this.a.a, "text/html", "UTF-8", null);
      }
    }

}
