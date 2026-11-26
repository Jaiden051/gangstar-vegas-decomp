// Decompiled from classes.dex (SourceFile: TextDirectionHeuristicsCompat$AnyStrong.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

class TextDirectionHeuristicsCompat$AnyStrong implements android.support.v4.text.g {
    // Fields
    public static final android.support.v4.text.TextDirectionHeuristicsCompat$AnyStrong a;
    public static final android.support.v4.text.TextDirectionHeuristicsCompat$AnyStrong b;
    private final boolean c;

    // Methods
    static
    {
      a = new android.support.v4.text.TextDirectionHeuristicsCompat$AnyStrong(true);
      b = new android.support.v4.text.TextDirectionHeuristicsCompat$AnyStrong(false);
    }

    private TextDirectionHeuristicsCompat$AnyStrong(boolean p0)
    {
      super();
      this.c = p0;
    }

    public final int a(CharSequence p0, int p1, int p2)
    {
      int v4 = 0;
      int v5 = 0;
      int v6 = 0;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v4 = 1;
            v5 = p1 + p2;
            v6 = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(p1 >= v5) ) { _pc = 2; continue _sm; }
            {
            if ( v6 != 0 )
            {
            if ( !this.c )
            return 0;
            }
            else
            {
            return 2;
            }
            }
            _pc = 6;
            continue _sm;
          case 2:
            _sw_1 = (TextDirectionHeuristicsCompat.access$200(Character.getDirectionality(p0.charAt(p1))));
            if ( (_sw_1 == (0)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (1)) ) { _pc = 4; continue _sm; }
            _pc = 5;
            continue _sm;
          case 3:
            if ( !this.c )
            {
            v6 = 1;
            { _pc = 5; continue _sm; }
            }
            v4 = 0;
            _pc = 6;
            continue _sm;
          case 4:
            if ( this.c )
            {
            v6 = 1;
            { _pc = 5; continue _sm; }
            }
            _pc = 6;
            continue _sm;
          case 5:
            ++p1;
            _pc = 1;
            continue _sm;
          case 6:
            return v4;
        }
      }
}

}
