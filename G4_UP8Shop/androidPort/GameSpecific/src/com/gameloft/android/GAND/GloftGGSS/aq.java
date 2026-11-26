// Decompiled from classes.dex (SourceFile: aq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class aq implements android.view.View.OnKeyListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.Game a;

    // Methods
    aq(com.gameloft.android.GAND.GloftGGSS.Game p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean onKey(android.view.View p0, int p1, android.view.KeyEvent p2)
    {
      if ( p1 == 66 || p1 == 4 || p1 == 82 || p1 == 84 )
      {
        if ( this.a.O == null || this.a.O.b == null )
          return false;
        this.a.O.b.a(0, 66);
      }
      if ( p1 == 67 )
        GL2JNILib.keyboardKeyPressed(' ', 0);
      return false;
    }

}
