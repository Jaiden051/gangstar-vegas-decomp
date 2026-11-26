// Decompiled from classes.dex (SourceFile: an.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class an implements java.lang.Runnable {
    // Methods
    an()
    {
      super();
    }

    public final void run()
    {
      android.widget.RelativeLayout.LayoutParams v1;
      try
      {
        if ( Game.F == null )
        {
          Game.F = (android.widget.LinearLayout)Game.az.getLayoutInflater().inflate(2130903064, null);
          v1 = new android.widget.RelativeLayout.LayoutParams(-1, -1);
          v1.addRule(15);
          v1.addRule(14);
          Game.az.addContentView(Game.F, v1);
        }
        Game.F.setVisibility(0);
      }
      catch ( Exception e )
      {
      }
    }

}
