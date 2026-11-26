// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public final class o extends java.util.zip.ZipInputStream {
    // Methods
    public o(java.io.InputStream p0)
    {
      super(p0);
    }

    private long b()
    {
      return this.inf.getRemaining();
    }

    private long c()
    {
      return this.inf.getTotalIn();
    }

    private long d()
    {
      return this.inf.getTotalOut();
    }

    public final long a()
    {
      return this.inf.getBytesRead();
    }

}
