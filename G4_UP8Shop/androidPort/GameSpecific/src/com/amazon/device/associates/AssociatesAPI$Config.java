// Decompiled from classes.dex (SourceFile: AssociatesAPI$Config.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class AssociatesAPI$Config {
    // Fields
    private final java.lang.String a;
    private final android.content.Context b;
    private java.util.Set c;

    // Methods
    public AssociatesAPI$Config(String p0, android.content.Context p1)
    {
      super();
      this.c = null;
      an.a(p0, "appKey");
      an.a(p1, "appContext");
      this.a = p0;
      this.b = p1;
    }

    String a()
    {
      return this.a;
    }

    android.content.Context b()
    {
      return this.b;
    }

    java.util.Set<String> c()
    {
      return this.c;
    }

    public void setPrefetchProducts(java.util.Set<String> p0)
    {
      an.a(p0, "productIds");
      this.c = p0;
    }

}
