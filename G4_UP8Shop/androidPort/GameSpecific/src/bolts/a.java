// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

public final class a extends java.lang.Exception {
    // Fields
    private static long a;
    private java.util.List b;

    // Methods
    public a(java.util.List<Exception> p0)
    {
      super("There were multiple errors.");
      this.b = p0;
    }

    private java.util.List<Exception> a()
    {
      return this.b;
    }

}
