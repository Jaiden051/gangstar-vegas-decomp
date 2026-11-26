// Decompiled from classes.dex (SourceFile: bx.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class bx extends com.amazon.device.associates.bj {
    // Fields
    private java.util.HashMap a;
    private java.util.HashMap b;

    // Methods
    public bx()
    {
      super();
      this.a = new java.util.HashMap();
      this.b = new java.util.HashMap();
    }

    public java.util.HashMap<String, String> a()
    {
      return this.a;
    }

    /* bridge */ public void a(String p0)
    {
      super.a(p0);
    }

    public void a(String p0, String p1)
    {
      this.a.put(p0, p1);
    }

    public void b(String p0, String p1)
    {
      this.b.put(p0, p1);
    }

    public java.util.HashMap<String, String> e()
    {
      return this.b;
    }

}
