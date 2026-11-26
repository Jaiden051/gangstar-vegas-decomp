// Decompiled from classes.dex (SourceFile: e$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

final class e$a extends com.google.android.gms.plus.internal.a {
    // Fields
    final com.google.android.gms.plus.internal.e a;
    private final com.google.android.gms.common.api.a$d b;

    // Methods
    public e$a(com.google.android.gms.plus.internal.e p0, com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void a(com.google.android.gms.common.api.Status p0)
    {
      this.a.a(new com.google.android.gms.plus.internal.e$d(this.a, this.b, p0));
    }

}
