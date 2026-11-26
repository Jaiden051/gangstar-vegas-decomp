// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

public class f extends com.google.android.gms.drive.metadata.a {
    // Methods
    public f(String p0, int p1)
    {
      super(p0, 4300000);
    }

    private void a(android.os.Bundle p0, Integer p1)
    {
      p0.putInt(this.a(), p1.intValue());
    }

    private Integer c(android.os.Bundle p0)
    {
      return Integer.valueOf(p0.getInt(this.a()));
    }

    private Integer c(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return Integer.valueOf(p0.b(this.a(), p1, p2));
    }

    /* synthetic */ protected final void a(android.os.Bundle p0, Object p1)
    {
      p0.putInt(this.a(), ((Integer)p1).intValue());
    }

    /* synthetic */ protected final Object b(android.os.Bundle p0)
    {
      return Integer.valueOf(p0.getInt(this.a()));
    }

    /* synthetic */ protected final Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return Integer.valueOf(p0.b(this.a(), p1, p2));
    }

}
