// Decompiled from classes.dex (SourceFile: by.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class by implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.bx a;

    // Methods
    by(com.gameloft.android.GAND.GloftGGSS.bx p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      float v1;
      float v2;
      if ( InGameBrowser.access$100(this.a.a) != null )
      {
        v1 = InGameBrowser.access$100(this.a.a).getX()
           + (InGameBrowser.access$500(this.a.a) + InGameBrowser.access$700(this.a.a)) * 10.0f;
        v2 = InGameBrowser.access$100(this.a.a).getY()
           + (InGameBrowser.access$600(this.a.a) + InGameBrowser.access$800(this.a.a)) * 10.0f;
        InGameBrowser.access$100(this.a.a).setX(v1);
        InGameBrowser.access$100(this.a.a).setY(v2);
        if ( v1 > (float)(InGameBrowser.access$900(this.a.a) - InGameBrowser.access$100(this.a.a).getWidth() / 2) )
          InGameBrowser.access$100(this.a.a).setX((float)(InGameBrowser.access$900(this.a.a)
                                                        - InGameBrowser.access$100(this.a.a).getWidth() / 2));
        if ( v1 < (float)(InGameBrowser.access$100(this.a.a).getWidth() / -2) )
          InGameBrowser.access$100(this.a.a).setX((float)(InGameBrowser.access$100(this.a.a).getWidth() / -2));
        if ( v2 > (float)(InGameBrowser.access$1000(this.a.a) - InGameBrowser.access$100(this.a.a).getHeight() / 2) )
          InGameBrowser.access$100(this.a.a).setY((float)(InGameBrowser.access$1000(this.a.a)
                                                        - InGameBrowser.access$100(this.a.a).getHeight() / 2));
        if ( v2 < (float)(InGameBrowser.access$100(this.a.a).getHeight() / -2) )
          InGameBrowser.access$100(this.a.a).setY((float)(InGameBrowser.access$100(this.a.a).getHeight() / -2));
      }
    }

}
