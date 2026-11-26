// Decompiled from classes.dex (SourceFile: Item.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

public final class Item {
    // Fields
    private final java.lang.String a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final double e;
    private final long f;

    // Methods
    private Item(com.google.android.apps.analytics.Item$Builder p0)
    {
      super();
      this.a = Item$Builder.access$000(p0);
      this.b = Item$Builder.access$100(p0);
      this.e = Item$Builder.access$200(p0);
      this.f = Item$Builder.access$300(p0);
      this.c = Item$Builder.access$400(p0);
      this.d = Item$Builder.access$500(p0);
    }

    /* synthetic */ Item(com.google.android.apps.analytics.Item$Builder p0, int p1)
    {
      this(p0);
    }

    final String a()
    {
      return this.a;
    }

    final String b()
    {
      return this.b;
    }

    final String c()
    {
      return this.c;
    }

    final String d()
    {
      return this.d;
    }

    final double e()
    {
      return this.e;
    }

    final long f()
    {
      return this.f;
    }

}
