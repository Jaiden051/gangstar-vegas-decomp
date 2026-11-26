// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

final class c extends org.apache.http.entity.HttpEntityWrapper {
    // Methods
    public c(org.apache.http.HttpEntity p0)
    {
      super(p0);
    }

    public final java.io.InputStream getContent()
 throws java.io.IOException {
      return new java.util.zip.GZIPInputStream(this.wrappedEntity.getContent());
    }

    public final long getContentLength()
    {
      return -1;
    }

}
