// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public final class h extends com.google.android.gms.common.data.d implements com.google.android.gms.wearable.DataEvent {
    // Fields
    private final int c;

    // Methods
    public h(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      super(p0, p1);
      this.c = p2;
    }

    private com.google.android.gms.wearable.DataEvent c()
    {
      return (com.google.android.gms.wearable.DataEvent)new com.google.android.gms.wearable.internal.g((com.google.android.gms.wearable.DataEvent)this);
    }

    public final com.google.android.gms.wearable.DataItem a()
    {
      return (com.google.android.gms.wearable.DataItem)new com.google.android.gms.wearable.internal.o(this.v_, this.z_, this.c);
    }

    public final int b()
    {
      return this.c("event_type");
    }

    /* synthetic */ public final Object h()
    {
      return new com.google.android.gms.wearable.internal.g((com.google.android.gms.wearable.DataEvent)this);
    }

}
