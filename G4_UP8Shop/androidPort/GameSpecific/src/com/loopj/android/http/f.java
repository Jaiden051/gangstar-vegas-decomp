// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

final class f {
    // Fields
    public java.io.InputStream a;
    public java.lang.String b;
    public java.lang.String c;

    // Methods
    public f(java.io.InputStream p0, String p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public final String a()
    {
      if ( this.b != null )
        return this.b;
      else
        return "nofilename";
    }

}
