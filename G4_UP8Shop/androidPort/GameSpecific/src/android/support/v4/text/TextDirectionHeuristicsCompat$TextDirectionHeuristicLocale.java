// Decompiled from classes.dex (SourceFile: TextDirectionHeuristicsCompat$TextDirectionHeuristicLocale.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

import java.util.Locale;
class TextDirectionHeuristicsCompat$TextDirectionHeuristicLocale extends android.support.v4.text.h {
    // Fields
    public static final android.support.v4.text.TextDirectionHeuristicsCompat$TextDirectionHeuristicLocale a;

    // Methods
    static
    {
      a = new android.support.v4.text.TextDirectionHeuristicsCompat$TextDirectionHeuristicLocale();
    }

    public TextDirectionHeuristicsCompat$TextDirectionHeuristicLocale()
    {
      super(null);
    }

    protected final boolean a()
    {
      return TextUtilsCompat.getLayoutDirectionFromLocale(Locale.getDefault()) == 1;
    }

}
