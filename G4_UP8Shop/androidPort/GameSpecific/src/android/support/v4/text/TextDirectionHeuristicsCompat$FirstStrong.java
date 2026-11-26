// Decompiled from classes.dex (SourceFile: TextDirectionHeuristicsCompat$FirstStrong.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

class TextDirectionHeuristicsCompat$FirstStrong implements android.support.v4.text.g {
    // Fields
    public static final android.support.v4.text.TextDirectionHeuristicsCompat$FirstStrong a;

    // Methods
    static
    {
      a = new android.support.v4.text.TextDirectionHeuristicsCompat$FirstStrong();
    }

    private TextDirectionHeuristicsCompat$FirstStrong()
    {
      super();
    }

    public final int a(CharSequence p0, int p1, int p2)
    {
      int v4;
      int i;
      v4 = p1 + p2;
      for ( i = 2; p1 < v4 && i == 2; i = TextDirectionHeuristicsCompat.access$100(Character.getDirectionality(p0.charAt(p1++))) )
        ;
      return i;
    }

}
