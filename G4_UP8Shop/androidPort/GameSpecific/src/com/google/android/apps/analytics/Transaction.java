// Decompiled from classes.dex (SourceFile: Transaction.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

public final class Transaction {
    // Fields
    private final java.lang.String a;
    private final java.lang.String b;
    private final double c;
    private final double d;
    private final double e;

    // Methods
    private Transaction(com.google.android.apps.analytics.Transaction$Builder p0)
    {
      super();
      this.a = Transaction$Builder.access$000(p0);
      this.c = Transaction$Builder.access$100(p0);
      this.b = Transaction$Builder.access$200(p0);
      this.d = Transaction$Builder.access$300(p0);
      this.e = Transaction$Builder.access$400(p0);
    }

    /* synthetic */ Transaction(com.google.android.apps.analytics.Transaction$Builder p0, int p1)
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

    final double c()
    {
      return this.c;
    }

    final double d()
    {
      return this.d;
    }

    final double e()
    {
      return this.e;
    }

}
