// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

public abstract class b implements com.google.android.gms.common.api.Releasable, com.google.android.gms.common.api.Result {
    // Fields
    protected final com.google.android.gms.common.api.Status a;
    protected final com.google.android.gms.common.data.DataHolder b;

    // Methods
    protected b(com.google.android.gms.common.data.DataHolder p0)
    {
      super();
      this.a = new com.google.android.gms.common.api.Status(p0.e());
      this.b = p0;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public void d()
    {
      if ( this.b != null )
        this.b.i();
    }

}
