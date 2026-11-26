// Decompiled from classes.dex (SourceFile: e$g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

final class e$g extends com.google.android.gms.plus.internal.a {
    // Fields
    final com.google.android.gms.plus.internal.e a;
    private final com.google.android.gms.common.api.a$d b;

    // Methods
    public e$g(com.google.android.gms.plus.internal.e p0, com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void a(int p0, android.os.Bundle p1)
    {
      android.app.PendingIntent v3;
      if ( p1 != null )
        v3 = (android.app.PendingIntent)p1.getParcelable("pendingIntent");
      else
        v3 = null;
      this.a.a(new com.google.android.gms.plus.internal.e$h(this.a, this.b, new com.google.android.gms.common.api.Status(p0, null, v3)));
    }

}
