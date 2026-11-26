// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class g implements com.google.android.gms.wearable.DataEvent {
    // Fields
    private int c;
    private com.google.android.gms.wearable.DataItem d;

    // Methods
    public g(com.google.android.gms.wearable.DataEvent p0)
    {
      super();
      this.c = p0.b();
      this.d = (com.google.android.gms.wearable.DataItem)p0.a().h();
    }

    private com.google.android.gms.wearable.DataEvent c()
    {
      return (com.google.android.gms.wearable.DataEvent)this;
    }

    public final com.google.android.gms.wearable.DataItem a()
    {
      return this.d;
    }

    public final int b()
    {
      return this.c;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final boolean i_()
    {
      return true;
    }

}
