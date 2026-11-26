// Decompiled from classes.dex (SourceFile: el.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class el {
    // Fields
    private final java.lang.Object a;
    private int b;
    private int c;
    private final com.google.android.gms.internal.ei d;
    private final java.lang.String e;

    // Methods
    private el(com.google.android.gms.internal.ei p0, String p1)
    {
      super();
      this.a = new Object();
      this.d = p0;
      this.e = p1;
    }

    public el(String p0)
    {
      this(ei.bC(), p0);
    }

    public final android.os.Bundle a()
    {
      Object a;
      android.os.Bundle v2;
      a = this.a;
      synchronized ( a )
      {
        v2 = new android.os.Bundle();
        v2.putInt("pmnli", this.b);
        v2.putInt("pmnll", this.c);
        return v2;
      }
    }

    public final void a(int p0, int p1)
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.b = p0;
        this.c = p1;
        this.d.a(this.e, this);
      }
    }

}
