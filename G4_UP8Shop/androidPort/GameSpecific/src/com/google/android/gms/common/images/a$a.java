// Decompiled from classes.dex (SourceFile: a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import com.google.android.gms.internal.hl;
final class a$a {
    // Fields
    public final android.net.Uri a;

    // Methods
    public a$a(android.net.Uri p0)
    {
      super();
      this.a = p0;
    }

    public final boolean equals(Object p0)
    {
      return p0 instanceof com.google.android.gms.common.images.a$a
          && (this == p0 || hl.equal(((com.google.android.gms.common.images.a$a)p0).a, this.a));
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[1];
      v1[0] = this.a;
      return hl.hashCode(v1);
    }

}
