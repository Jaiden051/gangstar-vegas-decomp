// Decompiled from classes.dex (SourceFile: TextDirectionHeuristicsCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

public class TextDirectionHeuristicsCompat {
    // Fields
    public static final android.support.v4.text.e a;
    public static final android.support.v4.text.e b;
    public static final android.support.v4.text.e c;
    public static final android.support.v4.text.e d;
    public static final android.support.v4.text.e e;
    public static final android.support.v4.text.e f;
    private static int g;
    private static int h;
    private static int i;

    // Methods
    static
    {
      a = (android.support.v4.text.e)new android.support.v4.text.i(null, false, 0);
      b = (android.support.v4.text.e)new android.support.v4.text.i(null, true, 0);
      c = (android.support.v4.text.e)new android.support.v4.text.i((android.support.v4.text.g)TextDirectionHeuristicsCompat$FirstStrong.a, false, 0);
      d = (android.support.v4.text.e)new android.support.v4.text.i((android.support.v4.text.g)TextDirectionHeuristicsCompat$FirstStrong.a, true, 0);
      e = (android.support.v4.text.e)new android.support.v4.text.i((android.support.v4.text.g)TextDirectionHeuristicsCompat$AnyStrong.a, false, 0);
      f = (android.support.v4.text.e)TextDirectionHeuristicsCompat$TextDirectionHeuristicLocale.a;
    }

    public TextDirectionHeuristicsCompat()
    {
      super();
    }

    /* synthetic */ static int access$100(int p0)
    {
      return isRtlTextOrFormat(p0);
    }

    /* synthetic */ static int access$200(int p0)
    {
      return isRtlText(p0);
    }

    private static int isRtlText(int p0)
    {
      int v1;
      switch ( p0 )
      {
        case 0:
          v1 = 1;
          break;
        case 1:
        case 2:
          v1 = 0;
          break;
        default:
          v1 = 2;
          break;
      }
      return v1;
    }

    private static int isRtlTextOrFormat(int p0)
    {
      int v1;
      switch ( p0 )
      {
        case 0:
        case 14:
        case 15:
          v1 = 1;
          break;
        case 1:
        case 2:
        case 16:
        case 17:
          v1 = 0;
          break;
        default:
          v1 = 2;
          break;
      }
      return v1;
    }

}
