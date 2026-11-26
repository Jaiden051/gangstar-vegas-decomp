// Decompiled from classes.dex (SourceFile: Session$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class Session$Builder {
    // Fields
    private java.lang.String applicationId;
    private final android.content.Context context;
    private com.facebook.TokenCachingStrategy tokenCachingStrategy;

    // Methods
    public Session$Builder(android.content.Context p0)
    {
      super();
      this.context = p0;
    }

    public final com.facebook.Session build()
    {
      return new com.facebook.Session(this.context, this.applicationId, this.tokenCachingStrategy);
    }

    public final com.facebook.Session$Builder setApplicationId(String p0)
    {
      this.applicationId = p0;
      return this;
    }

    public final com.facebook.Session$Builder setTokenCachingStrategy(com.facebook.TokenCachingStrategy p0)
    {
      this.tokenCachingStrategy = p0;
      return this;
    }

}
