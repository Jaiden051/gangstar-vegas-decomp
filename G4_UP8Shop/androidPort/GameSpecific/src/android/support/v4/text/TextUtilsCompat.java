// Decompiled from classes.dex (SourceFile: TextUtilsCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

public class TextUtilsCompat {
    // Fields
    public static final java.util.Locale a;
    private static java.lang.String b;
    private static java.lang.String c;

    // Methods
    static
    {
      a = new java.util.Locale("", "");
      b = "Arab";
      c = "Hebr";
    }

    public TextUtilsCompat()
    {
      super();
    }

    private static int getLayoutDirectionFromFirstChar(java.util.Locale p0)
    {
      int v1;
      v1 = 0;
      switch ( Character.getDirectionality(p0.getDisplayName(p0).charAt(0)) )
      {
        case 1:
        case 2:
          v1 = 1;
          break;
        default:
          return v1;
      }
      return v1;
    }

    public static int getLayoutDirectionFromLocale(java.util.Locale p0)
    {
      String Script; // RETVAL
      String v2;
      if ( p0 == null || p0.equals(a) )
        return 0;
      Script = ICUCompat.getScript(ICUCompat.addLikelySubtags(p0.toString()));
      v2 = Script;
      if ( Script != null )
        return Script.equalsIgnoreCase(b) || v2.equalsIgnoreCase(c) ? 1 : 0;
      return getLayoutDirectionFromFirstChar(p0);
    }

    public static String htmlEncode(String p0)
    {
      StringBuilder v1;
      int i;
      char v3;
      v1 = new StringBuilder();
      for ( i = 0; i < p0.length(); ++i )
      {
        v3 = p0.charAt(i);
        switch ( v3 )
        {
          case '"':
            v1.append("&quot;");
            break;
          case '&':
            v1.append("&amp;");
            break;
          case '\'':
            v1.append("&#39;");
            break;
          case '<':
            v1.append("&lt;");
            break;
          case '>':
            v1.append("&gt;");
            break;
          default:
            v1.append(v3);
            break;
        }
      }
      return v1.toString();
    }

}
