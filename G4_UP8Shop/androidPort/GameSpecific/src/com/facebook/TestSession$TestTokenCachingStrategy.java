// Decompiled from classes.dex (SourceFile: TestSession$TestTokenCachingStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class TestSession$TestTokenCachingStrategy extends com.facebook.TokenCachingStrategy {
    // Fields
    private android.os.Bundle bundle;

    // Methods
    private TestSession$TestTokenCachingStrategy()
    {
      super();
    }

    /* synthetic */ TestSession$TestTokenCachingStrategy(com.facebook.TestSession$1 p0)
    {
      this();
    }

    public final void clear()
    {
      this.bundle = null;
    }

    public final android.os.Bundle load()
    {
      return this.bundle;
    }

    public final void save(android.os.Bundle p0)
    {
      this.bundle = p0;
    }

}
