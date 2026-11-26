// Decompiled from classes.dex (SourceFile: at.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class at implements android.text.TextWatcher {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.Game a;

    // Methods
    at(com.gameloft.android.GAND.GloftGGSS.Game p0)
    {
      super();
      this.a = p0;
    
    }

    public final void afterTextChanged(android.text.Editable p0)
    {
      ;
    }

    public final void beforeTextChanged(CharSequence p0, int p1, int p2, int p3)
    {
      ;
    }

    public final void onTextChanged(CharSequence p0, int p1, int p2, int p3)
    {
      if ( Game.U )
      {
        Game.U = false;
      }
      else if ( p0.length() > 0 )
      {
        GL2JNILib.keyboardKeyPressed(p0.charAt(p0.length() - 1), p0.length());
      }
    }

}
