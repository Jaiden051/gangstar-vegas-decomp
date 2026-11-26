// Decompiled from classes.dex (SourceFile: Moment$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.model.moments;

public class Moment$Builder {
    // Fields
    private java.lang.String a;
    private com.google.android.gms.internal.ko b;
    private java.lang.String c;
    private com.google.android.gms.internal.ko d;
    private java.lang.String e;
    private final java.util.Set f;

    // Methods
    public Moment$Builder()
    {
      super();
      this.f = new java.util.HashSet();
    }

    private com.google.android.gms.plus.model.moments.Moment$Builder a(
            com.google.android.gms.plus.model.moments.ItemScope p0)
    {
      this.b = (com.google.android.gms.internal.ko)p0;
      this.f.add(Integer.valueOf(4));
      return this;
    }

    private com.google.android.gms.plus.model.moments.Moment$Builder a(String p0)
    {
      this.a = p0;
      this.f.add(Integer.valueOf(2));
      return this;
    }

    private com.google.android.gms.plus.model.moments.Moment a()
    {
      return (com.google.android.gms.plus.model.moments.Moment)new com.google.android.gms.internal.kq(this.f, this.a, this.b, this.c, this.d, this.e);
    }

    private com.google.android.gms.plus.model.moments.Moment$Builder b(
            com.google.android.gms.plus.model.moments.ItemScope p0)
    {
      this.d = (com.google.android.gms.internal.ko)p0;
      this.f.add(Integer.valueOf(6));
      return this;
    }

    private com.google.android.gms.plus.model.moments.Moment$Builder b(String p0)
    {
      this.c = p0;
      this.f.add(Integer.valueOf(5));
      return this;
    }

    private com.google.android.gms.plus.model.moments.Moment$Builder c(String p0)
    {
      this.e = p0;
      this.f.add(Integer.valueOf(7));
      return this;
    }

}
