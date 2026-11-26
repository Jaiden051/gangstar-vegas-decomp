// Decompiled from classes.dex (SourceFile: e$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

final class e$b extends com.google.android.gms.plus.internal.a {
    // Fields
    final com.google.android.gms.plus.internal.e a;
    private final com.google.android.gms.common.api.a$d b;

    // Methods
    public e$b(com.google.android.gms.plus.internal.e p0, com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void a(com.google.android.gms.common.data.DataHolder p0, String p1, String p2)
    {
      android.app.PendingIntent v4;
      com.google.android.gms.common.api.Status v5;
      com.google.android.gms.common.data.DataHolder v6;
      if ( p0.f() != null )
        v4 = (android.app.PendingIntent)p0.f().getParcelable("pendingIntent");
      else
        v4 = null;
      v5 = new com.google.android.gms.common.api.Status(p0.e(), null, v4);
      if ( v5.e() || p0 == null )
      {
        v6 = p0;
      }
      else
      {
        if ( !p0.h() )
          p0.i();
        v6 = null;
      }
      this.a.a(new com.google.android.gms.plus.internal.e$c(this.a, this.b, v5, v6, p1, p2));
    }

}
