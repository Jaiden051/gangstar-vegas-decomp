// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

public class l extends com.google.android.gms.drive.metadata.a {
    // Methods
    public l(String p0, int p1)
    {
      super(p0, p1);
    }

    private void a(android.os.Bundle p0, String p1)
    {
      p0.putString(this.a(), p1);
    }

    private String c(android.os.Bundle p0)
    {
      return p0.getString(this.a());
    }

    private String c(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return p0.c(this.a(), p1, p2);
    }

    /* synthetic */ protected final void a(android.os.Bundle p0, Object p1)
    {
      p0.putString(this.a(), (String)p1);
    }

    /* synthetic */ protected final Object b(android.os.Bundle p0)
    {
      return p0.getString(this.a());
    }

    /* synthetic */ protected final Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return p0.c(this.a(), p1, p2);
    }

}
