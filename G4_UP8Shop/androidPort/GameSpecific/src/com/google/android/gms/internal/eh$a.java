// Decompiled from classes.dex (SourceFile: eh$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.SystemClock;
final class eh$a {
    // Fields
    private long a;
    private long b;

    // Methods
    public eh$a()
    {
      super();
      this.a = -1;
      this.b = -1;
    }

    public final long a()
    {
      return this.b;
    }

    public final void b()
    {
      this.b = SystemClock.elapsedRealtime();
    }

    public final void c()
    {
      this.a = SystemClock.elapsedRealtime();
    }

    public final android.os.Bundle d()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.putLong("topen", this.a);
      v1.putLong("tclose", this.b);
      return v1;
    }

}
