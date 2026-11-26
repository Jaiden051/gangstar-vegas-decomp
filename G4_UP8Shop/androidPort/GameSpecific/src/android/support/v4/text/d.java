// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

final class d implements android.support.v4.text.b {
    // Methods
    d()
    {
      super();
    }

    public final String a(String p0)
    {
      return ICUCompatIcs.getScript(p0);
    }

    public final String b(String p0)
    {
      return ICUCompatIcs.addLikelySubtags(p0);
    }

}
