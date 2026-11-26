// Decompiled from classes.dex (SourceFile: gEditText.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

class gEditText extends android.widget.EditText {
    // Fields
    android.widget.FrameLayout a;
    com.gameloft.android.GAND.GloftGGSS.Keyboard b;

    // Methods
    public gEditText(android.content.Context p0)
    {
      super(p0);
      this.a = null;
      this.b = null;
    }

    public gEditText(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.a = null;
      this.b = null;
    }

    public gEditText(android.content.Context p0, android.util.AttributeSet p1, int p2)
    {
      super(p0, p1, p2);
      this.a = null;
      this.b = null;
    }

    public final void a(android.widget.FrameLayout p0, com.gameloft.android.GAND.GloftGGSS.Keyboard p1)
    {
      this.a = p0;
      this.b = p1;
    }

    public boolean onKeyPreIme(int p0, android.view.KeyEvent p1)
    {
      if ( p0 != 27 && (p0 == 66 || p0 == 4 || p0 == 82 || p0 == 84) && this.b != null )
      {
        if ( p0 != 4 && p0 != 82 && p0 != 84 )
          this.b.a(this.getText().toString());
        this.b.a(0, p0);
      }
      return false;
    }

}
