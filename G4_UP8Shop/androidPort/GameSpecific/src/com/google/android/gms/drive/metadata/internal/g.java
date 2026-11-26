// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

public class g extends com.google.android.gms.drive.metadata.a {
    // Methods
    public g(String p0, int p1)
    {
      super(p0, p1);
    }

    private void a(android.os.Bundle p0, Long p1)
    {
      p0.putLong(this.a(), p1.longValue());
    }

    private Long c(android.os.Bundle p0)
    {
      return Long.valueOf(p0.getLong(this.a()));
    }

    private Long c(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return Long.valueOf(p0.a(this.a(), p1, p2));
    }

    /* synthetic */ protected final void a(android.os.Bundle p0, Object p1)
    {
      p0.putLong(this.a(), ((Long)p1).longValue());
    }

    /* synthetic */ protected final Object b(android.os.Bundle p0)
    {
      return Long.valueOf(p0.getLong(this.a()));
    }

    /* synthetic */ protected final Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return Long.valueOf(p0.a(this.a(), p1, p2));
    }

}
