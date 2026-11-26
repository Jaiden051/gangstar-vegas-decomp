// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

import java.util.Arrays;
public class i {
    // Fields
    private java.lang.String a;
    private final java.util.ArrayList b;
    private java.lang.String[] c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String[] f;
    private java.lang.String g;
    private com.google.android.gms.plus.internal.PlusCommonExtras h;

    // Methods
    public i(android.content.Context p0)
    {
      super();
      this.b = new java.util.ArrayList();
      this.e = p0.getPackageName();
      this.d = p0.getPackageName();
      this.h = new com.google.android.gms.plus.internal.PlusCommonExtras();
      this.b.add("https://www.googleapis.com/auth/plus.login");
    }

    public final com.google.android.gms.plus.internal.i a()
    {
      this.b.clear();
      return this;
    }

    public final com.google.android.gms.plus.internal.i a(String p0)
    {
      this.a = p0;
      return this;
    }

    public final com.google.android.gms.plus.internal.i a(String[] p0)
    {
      this.b.clear();
      this.b.addAll(Arrays.asList(p0));
      return this;
    }

    public final com.google.android.gms.plus.internal.h b()
    {
      if ( this.a == null )
        this.a = "<<default account>>";
      return new com.google.android.gms.plus.internal.h(this.a, (String[])this.b.toArray(new String[this.b.size()]), this.c, this.f, this.d, this.e, this.g, this.h);
    }

    public final com.google.android.gms.plus.internal.i b(String[] p0)
    {
      this.c = p0;
      return this;
    }

}
