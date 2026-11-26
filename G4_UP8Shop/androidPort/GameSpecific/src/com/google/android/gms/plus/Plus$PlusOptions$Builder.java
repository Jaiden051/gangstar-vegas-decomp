// Decompiled from classes.dex (SourceFile: Plus$PlusOptions$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

import com.google.android.gms.internal.hn;
public final class Plus$PlusOptions$Builder {
    // Fields
    java.lang.String a;
    final java.util.Set b;

    // Methods
    public Plus$PlusOptions$Builder()
    {
      super();
      this.b = new java.util.HashSet();
    }

    private com.google.android.gms.plus.Plus$PlusOptions$Builder a(String p0)
    {
      this.a = p0;
      return this;
    }

    private com.google.android.gms.plus.Plus$PlusOptions$Builder a(String[] p0)
    {
      int i;
      hn.b(p0, "activityTypes may not be null.");
      for ( i = 0; i < p0.length; ++i )
        this.b.add(p0[i]);
      return this;
    }

    private com.google.android.gms.plus.Plus$PlusOptions a()
    {
      return new com.google.android.gms.plus.Plus$PlusOptions(this, 0);
    }

}
