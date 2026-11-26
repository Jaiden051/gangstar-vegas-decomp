// Decompiled from classes.dex (SourceFile: im.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class im implements com.google.android.gms.internal.ik {
    // Fields
    private static com.google.android.gms.internal.im a;

    // Methods
    public im()
    {
      super();
    }

    public static synchronized com.google.android.gms.internal.ik fW()
    {
      if ( a == null )
        a = new com.google.android.gms.internal.im();
      return (com.google.android.gms.internal.ik)a;
    }

    public final long a()
    {
      return System.currentTimeMillis();
    }

}
