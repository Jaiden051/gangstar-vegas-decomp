// Decompiled from classes.dex (SourceFile: ba.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ba implements com.google.android.gms.internal.bd {
    // Fields
    private final com.google.android.gms.internal.bb a;

    // Methods
    public ba(com.google.android.gms.internal.bb p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      String v3;
      v3 = (String)p1.get("name");
      if ( v3 != null )
        this.a.a(v3, (String)p1.get("info"));
      else
        ev.D("App event with no name parameter.");
    }

}
