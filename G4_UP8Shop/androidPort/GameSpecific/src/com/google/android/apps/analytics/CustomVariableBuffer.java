// Decompiled from classes.dex (SourceFile: CustomVariableBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

final class CustomVariableBuffer {
    // Fields
    private com.google.android.apps.analytics.b[] a;

    // Methods
    public CustomVariableBuffer()
    {
      super();
      this.a = new com.google.android.apps.analytics.b[5];
    }

    private static void throwOnInvalidIndex(int p0)
    {
      if ( p0 <= 0 || p0 > 5 )
        throw new IllegalArgumentException("Index must be between 1 and 5 inclusive.");
    }

    public final void a(com.google.android.apps.analytics.b p0)
    {
      throwOnInvalidIndex(p0.d());
      this.a[p0.d() - 1] = p0;
    }

    public final boolean a(int p0)
    {
      throwOnInvalidIndex(p0);
      return this.a[p0 - 1] == null;
    }

    public final com.google.android.apps.analytics.b[] a()
    {
      return (com.google.android.apps.analytics.b[])this.a.clone();
    }

    public final com.google.android.apps.analytics.b b(int p0)
    {
      throwOnInvalidIndex(p0);
      return this.a[p0 - 1];
    }

    public final boolean b()
    {
      boolean v1;
      int i;
      v1 = false;
      for ( i = 0; i < this.a.length; ++i )
      {
        if ( this.a[i] != null )
          return true;
      }
      return v1;
    }

    public final void c(int p0)
    {
      throwOnInvalidIndex(p0);
      this.a[p0 - 1] = null;
    }

}
