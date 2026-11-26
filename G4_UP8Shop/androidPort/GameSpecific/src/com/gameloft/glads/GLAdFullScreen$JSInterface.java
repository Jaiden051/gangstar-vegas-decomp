// Decompiled from classes.dex (SourceFile: GLAdFullScreen$JSInterface.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

class GLAdFullScreen$JSInterface {
    // Fields
    private static java.lang.String c;
    android.content.Context a;
    android.view.ViewGroup b;

    // Methods
    static
    {
      c = null;
    }

    GLAdFullScreen$JSInterface(android.content.Context p0, android.view.ViewGroup p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public static void handleBackKey()
    {
      if ( GLAdFullScreen.access$500() )
      {
        GLAdFullScreen.access$502(false);
        GLAdFullScreen.access$600().stopPlayback();
        GLAdFullScreen.access$602(null);
        GLAdFullScreen.access$700().removeAllViews();
        GLAdFullScreen.access$800().removeView(GLAdFullScreen.access$700());
        GLAdFullScreen.access$702(null);
        GLAdFullScreen.access$400().loadUrl("javascript:" + c + "()");
      }
    }

    public void checkBackPressed(String p0)
    {
      if ( p0 != null && p0.equals("true") )
        GLAdFullScreen.access$1502(true);
      else
        GLAdFullScreen.access$1502(false);
    }

    public void playVideo(String p0, String p1, String p2, String p3)
    {
      if ( !GLAdFullScreen.access$500() )
      {
        c = p2;
        ((android.app.Activity)this.a).runOnUiThread((Runnable)new com.gameloft.glads.s(this, p0, p2, p1, GLAdFullScreen.access$1600(p3)));
      }
    }

}
