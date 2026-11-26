// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class m implements android.text.InputFilter {
    // Methods
    m()
    {
      super();
    }

    public final CharSequence filter(CharSequence p0, int p1, int p2, android.text.Spanned p3, int p4, int p5)
    {
      while ( p1 < p2 )
      {
        if ( p0.charAt(p1) == 10 )
          return "";
        ++p1;
      }
      return null;
    }

}
