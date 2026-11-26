// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

public class d extends com.google.android.gms.drive.metadata.d {
    // Methods
    public d(String p0, int p1)
    {
      super(p0, p1);
    }

    private void a(android.os.Bundle p0, java.util.Date p1)
    {
      p0.putLong(this.a(), p1.getTime());
    }

    private java.util.Date c(android.os.Bundle p0)
    {
      return new java.util.Date(p0.getLong(this.a()));
    }

    private java.util.Date c(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return new java.util.Date(p0.a(this.a(), p1, p2));
    }

    /* synthetic */ protected final void a(android.os.Bundle p0, Object p1)
    {
      p0.putLong(this.a(), ((java.util.Date)p1).getTime());
    }

    /* synthetic */ protected final Object b(android.os.Bundle p0)
    {
      return new java.util.Date(p0.getLong(this.a()));
    }

    /* synthetic */ protected final Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return new java.util.Date(p0.a(this.a(), p1, p2));
    }

}
