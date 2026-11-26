// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

public class b extends com.google.android.gms.drive.metadata.a {
    // Methods
    public b(String p0, int p1)
    {
      super(p0, p1);
    }

    private void a(android.os.Bundle p0, Boolean p1)
    {
      p0.putBoolean(this.a(), p1.booleanValue());
    }

    private Boolean c(android.os.Bundle p0)
    {
      return Boolean.valueOf(p0.getBoolean(this.a()));
    }

    /* synthetic */ protected final void a(android.os.Bundle p0, Object p1)
    {
      p0.putBoolean(this.a(), ((Boolean)p1).booleanValue());
    }

    /* synthetic */ protected final Object b(android.os.Bundle p0)
    {
      return Boolean.valueOf(p0.getBoolean(this.a()));
    }

    /* synthetic */ protected Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return this.c(p0, p1, p2);
    }

    protected Boolean c(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return Boolean.valueOf(p0.d(this.a(), p1, p2));
    }

}
