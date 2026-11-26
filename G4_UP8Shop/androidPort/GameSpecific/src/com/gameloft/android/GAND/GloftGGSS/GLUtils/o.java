// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class o implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard a;
    final java.lang.String b;
    final int c;
    final android.view.View d;

    // Methods
    o(com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard p0, String p1, int p2, android.view.View p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    
    }

    public final void run()
    {
      android.text.InputFilter[] v1;
      android.text.InputFilter[] v2;
      android.text.InputFilter[] v3;
      android.text.InputFilter[] v4;
      this.a.setText(this.b);
      this.a.setSelection(this.a.getText().length());
      if ( this.c == 3 )
      {
        this.a.setInputType(0x80000);
        v1 = new android.text.InputFilter[2];
        v1[0] = VirtualKeyboard.f;
        v1[1] = new android.text.InputFilter.LengthFilter(110);
        this.a.setFilters(v1);
      }
      if ( this.c == 1 )
      {
        this.a.setInputType(0x80000);
        v2 = new android.text.InputFilter[2];
        v2[0] = VirtualKeyboard.f;
        v2[1] = new android.text.InputFilter.LengthFilter(15);
        this.a.setFilters(v2);
      }
      if ( this.c == 2 )
      {
        this.a.setInputType(0x80000);
        v3 = new android.text.InputFilter[2];
        v3[0] = VirtualKeyboard.f;
        v3[1] = new android.text.InputFilter.LengthFilter(10);
        this.a.setFilters(v3);
      }
      if ( this.c == 4 )
      {
        this.a.setInputType(2);
        v4 = new android.text.InputFilter[2];
        v4[0] = VirtualKeyboard.f;
        v4[1] = new android.text.InputFilter.LengthFilter(2);
        this.a.setFilters(v4);
      }
      this.a.setOnEditorActionListener(VirtualKeyboard.g);
      this.a.d = this.d;
      this.a.requestFocus();
    }

}
