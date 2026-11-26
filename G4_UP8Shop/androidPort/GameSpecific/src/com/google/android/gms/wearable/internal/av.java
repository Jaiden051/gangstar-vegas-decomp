// Decompiled from classes.dex (SourceFile: av.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class av extends com.google.android.gms.wearable.internal.ac$a {
    // Fields
    private final com.google.android.gms.wearable.DataApi$DataListener a;
    private final com.google.android.gms.wearable.MessageApi$MessageListener b;
    private final com.google.android.gms.wearable.NodeApi$NodeListener c;
    private final android.content.IntentFilter[] d;

    // Methods
    private av(
            com.google.android.gms.wearable.DataApi$DataListener p0,
            com.google.android.gms.wearable.MessageApi$MessageListener p1,
            com.google.android.gms.wearable.NodeApi$NodeListener p2,
            android.content.IntentFilter[] p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = (android.content.IntentFilter[])p3;
    }

    public static com.google.android.gms.wearable.internal.av a(
            com.google.android.gms.wearable.DataApi$DataListener p0,
            android.content.IntentFilter[] p1)
    {
      return new com.google.android.gms.wearable.internal.av(p0, null, null, p1);
    }

    public static com.google.android.gms.wearable.internal.av a(
            com.google.android.gms.wearable.MessageApi$MessageListener p0,
            android.content.IntentFilter[] p1)
    {
      return new com.google.android.gms.wearable.internal.av(null, p0, null, p1);
    }

    public static com.google.android.gms.wearable.internal.av a(com.google.android.gms.wearable.NodeApi$NodeListener p0)
    {
      return new com.google.android.gms.wearable.internal.av(null, null, p0, null);
    }

    public final void a(com.google.android.gms.common.data.DataHolder p0)
    {
      if ( this.a != null )
      {
        try
        {
          new com.google.android.gms.wearable.DataEventBuffer(p0);
          this.a.a();
        }
        finally
        {
          p0.i();
        }
        return;
      }
      p0.i();
    }

    public final void a(com.google.android.gms.wearable.internal.af p0)
    {
      if ( this.b != null )
        this.b.b();
    }

    public final void a(com.google.android.gms.wearable.internal.ai p0)
    {
      if ( this.c != null )
        this.c.c();
    }

    public final android.content.IntentFilter[] a()
    {
      return this.d;
    }

    public final void b(com.google.android.gms.wearable.internal.ai p0)
    {
      if ( this.c != null )
        this.c.d();
    }

}
