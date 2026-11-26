// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Base64;
class e implements com.google.android.gms.internal.n {
    // Methods
    e()
    {
      super();
    }

    public final String a(byte[] p0, boolean p1)
    {
      return Base64.encodeToString(p0, 11);
    }

    public final byte[] a(String p0, boolean p1)
    {
      return Base64.decode(p0, 2);
    }

}
