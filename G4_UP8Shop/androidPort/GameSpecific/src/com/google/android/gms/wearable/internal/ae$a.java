// Decompiled from classes.dex (SourceFile: ae$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class ae$a implements com.google.android.gms.wearable.MessageApi$SendMessageResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final int b;

    // Methods
    public ae$a(com.google.android.gms.common.api.Status p0, int p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final int b()
    {
      return this.b;
    }

}
