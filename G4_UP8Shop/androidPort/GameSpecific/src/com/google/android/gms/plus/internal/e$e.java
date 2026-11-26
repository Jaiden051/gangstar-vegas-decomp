// Decompiled from classes.dex (SourceFile: e$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

final class e$e extends com.google.android.gms.plus.internal.a {
    // Fields
    final com.google.android.gms.plus.internal.e a;
    private final com.google.android.gms.common.api.a$d b;

    // Methods
    public e$e(com.google.android.gms.plus.internal.e p0, com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void a(com.google.android.gms.common.data.DataHolder p0, String p1)
    {
      android.app.PendingIntent v3;
      com.google.android.gms.common.api.Status v4;
      com.google.android.gms.common.data.DataHolder v5;
      if ( p0.f() != null )
        v3 = (android.app.PendingIntent)p0.f().getParcelable("pendingIntent");
      else
        v3 = null;
      v4 = new com.google.android.gms.common.api.Status(p0.e(), null, v3);
      if ( v4.e() || p0 == null )
      {
        v5 = p0;
      }
      else
      {
        if ( !p0.h() )
          p0.i();
        v5 = null;
      }
      this.a.a(new com.google.android.gms.plus.internal.e$f(this.a, this.b, v4, v5, p1));
    }

}
