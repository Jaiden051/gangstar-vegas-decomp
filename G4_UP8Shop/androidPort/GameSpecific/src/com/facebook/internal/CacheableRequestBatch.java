// Decompiled from classes.dex (SourceFile: CacheableRequestBatch.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public class CacheableRequestBatch extends com.facebook.RequestBatch {
    // Fields
    private java.lang.String cacheKey;
    private boolean forceRoundTrip;

    // Methods
    public CacheableRequestBatch()
    {
      super();
    }

    public CacheableRequestBatch(com.facebook.Request[] p0)
    {
      super(p0);
    }

    public final String getCacheKeyOverride()
    {
      return this.cacheKey;
    }

    public final boolean getForceRoundTrip()
    {
      return this.forceRoundTrip;
    }

    public final void setCacheKeyOverride(String p0)
    {
      this.cacheKey = p0;
    }

    public final void setForceRoundTrip(boolean p0)
    {
      this.forceRoundTrip = p0;
    }

}
