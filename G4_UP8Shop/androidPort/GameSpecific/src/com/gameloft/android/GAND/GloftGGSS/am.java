// Decompiled from classes.dex (SourceFile: am.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.text.method.PasswordTransformationMethod;
import android.widget.TextView;
final class am extends android.os.Handler {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.Game a;

    // Methods
    am(com.gameloft.android.GAND.GloftGGSS.Game p0)
    {
      super();
      this.a = p0;
    
    }

    public final void handleMessage(android.os.Message p0)
    {
      android.text.InputFilter[] v2;
      android.view.animation.AlphaAnimation v3;
      if ( p0 != null )
      {
        switch ( p0.what )
        {
          case 2:
            if ( this.a.N != null && this.a.O != null && Game.M != null && Game.M.a != null )
            {
              this.a.N.setPadding(Game.M.e, Game.M.f, 0, 0);
              this.a.O.setMaxHeight(Game.M.h);
              this.a.O.setMinHeight(Game.M.h);
              this.a.O.setMaxWidth(Game.M.g);
              this.a.O.setMinWidth(Game.M.g);
              Game.U = true;
              this.a.O.setImeOptions(268435462);
              if ( Game.M.d )
              {
                this.a.O.setInputType(129);
                this.a.O.setTransformationMethod(PasswordTransformationMethod.getInstance());
              }
              else
              {
                this.a.O.setInputType(1);
                this.a.O.setTransformationMethod(new android.text.method.SingleLineTransformationMethod());
              }
              v2 = new android.text.InputFilter[1];
              v2[0] = new android.text.InputFilter.LengthFilter(Game.M.i);
              this.a.O.setFilters(v2);
              this.a.O.setEnabled(true);
              v3 = new android.view.animation.AlphaAnimation(1.0f, 0.0f);
              v3.setDuration(0);
              v3.setFillAfter(true);
              this.a.O.startAnimation(v3);
              this.a.N.setVisibility(0);
              this.a.N.setFocusable(true);
              this.a.N.requestFocus();
              this.a.O.requestFocus();
            }
            break;
          case 3:
            if ( this.a.N != null )
              this.a.N.setVisibility(8);
            break;
          case 4:
            if ( this.a.O != null && Game.M != null && Game.M.a != null )
              this.a.O.setText(new String(Game.M.a), TextView.BufferType.EDITABLE);
            break;
          default:
            return;
        }
      }
    }

}
