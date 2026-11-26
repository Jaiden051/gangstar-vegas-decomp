// Decompiled from classes.dex (SourceFile: EventRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.event;

public final class EventRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.event.Event {
    // Methods
    EventRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private com.google.android.gms.games.event.Event l()
    {
      return (com.google.android.gms.games.event.Event)new com.google.android.gms.games.event.EventEntity((com.google.android.gms.games.event.Event)this);
    }

    public final String a()
    {
      return this.e("external_event_id");
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a("name", p0);
    }

    public final String b()
    {
      return this.e("name");
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      this.a("description", p0);
    }

    public final String c()
    {
      return this.e("description");
    }

    public final void c(android.database.CharArrayBuffer p0)
    {
      this.a("formatted_value", p0);
    }

    public final android.net.Uri d()
    {
      return this.h("icon_image_uri");
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.e("icon_image_url");
    }

    public final boolean equals(Object p0)
    {
      return EventEntity.a((com.google.android.gms.games.event.Event)this, p0);
    }

    public final com.google.android.gms.games.Player f()
    {
      return (com.google.android.gms.games.Player)new com.google.android.gms.games.PlayerRef(this.v_, this.z_);
    }

    /* synthetic */ public final Object h()
    {
      return this.l();
    }

    public final int hashCode()
    {
      return EventEntity.a((com.google.android.gms.games.event.Event)this);
    }

    public final String j()
    {
      return this.e("formatted_value");
    }

    public final long j_()
    {
      return this.b("value");
    }

    public final boolean k()
    {
      return this.d("visibility");
    }

    public final String toString()
    {
      return EventEntity.b((com.google.android.gms.games.event.Event)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.event.EventEntity)this.l()).writeToParcel(p0, p1);
    }

}
