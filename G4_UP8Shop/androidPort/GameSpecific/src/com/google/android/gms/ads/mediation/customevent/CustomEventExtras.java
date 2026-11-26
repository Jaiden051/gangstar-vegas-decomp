// Decompiled from classes.dex (SourceFile: CustomEventExtras.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.mediation.customevent;

public final class CustomEventExtras implements com.google.ads.mediation.i {
    // Fields
    private final java.util.HashMap a;

    // Methods
    public CustomEventExtras()
    {
      super();
      this.a = new java.util.HashMap();
    }

    private void a(String p0, Object p1)
    {
      this.a.put(p0, p1);
    }

    public final Object a(String p0)
    {
      return this.a.get(p0);
    }

}
