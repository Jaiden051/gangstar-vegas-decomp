// Decompiled from classes.dex (SourceFile: LaunchOptions$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import com.google.android.gms.internal.gj;
public final class LaunchOptions$Builder {
    // Fields
    private com.google.android.gms.cast.LaunchOptions a;

    // Methods
    public LaunchOptions$Builder()
    {
      super();
      this.a = new com.google.android.gms.cast.LaunchOptions();
    }

    private com.google.android.gms.cast.LaunchOptions$Builder a(java.util.Locale p0)
    {
      this.a.a(gj.b(p0));
      return this;
    }

    public final com.google.android.gms.cast.LaunchOptions$Builder a(boolean p0)
    {
      this.a.a(p0);
      return this;
    }

    public final com.google.android.gms.cast.LaunchOptions a()
    {
      return this.a;
    }

}
