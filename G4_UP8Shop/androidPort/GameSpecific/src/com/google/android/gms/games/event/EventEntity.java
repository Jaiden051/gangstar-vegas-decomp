// Decompiled from classes.dex (SourceFile: EventEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.event;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.il;
public final class EventEntity implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.event.Event {
    // Fields
    public static final com.google.android.gms.games.event.EventEntityCreator CREATOR;
    private final int a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final android.net.Uri e;
    private final java.lang.String f;
    private final com.google.android.gms.games.PlayerEntity g;
    private final long h;
    private final java.lang.String i;
    private final boolean j;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.event.EventEntityCreator();
    }

    EventEntity(
            int p0,
            String p1,
            String p2,
            String p3,
            android.net.Uri p4,
            String p5,
            com.google.android.gms.games.Player p6,
            long p7,
            String p9,
            boolean p10)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = new com.google.android.gms.games.PlayerEntity(p6);
      this.h = p7;
      this.i = p9;
      this.j = p10;
    }

    public EventEntity(com.google.android.gms.games.event.Event p0)
    {
      super();
      this.a = 1;
      this.b = p0.a();
      this.c = p0.b();
      this.d = p0.c();
      this.e = p0.d();
      this.f = p0.e();
      this.g = (com.google.android.gms.games.PlayerEntity)p0.f().h();
      this.h = p0.j_();
      this.i = p0.j();
      this.j = p0.k();
    }

    static int a(com.google.android.gms.games.event.Event p0)
    {
      Object[] v1;
      v1 = new Object[9];
      v1[0] = p0.a();
      v1[1] = p0.b();
      v1[2] = p0.c();
      v1[3] = p0.d();
      v1[4] = p0.e();
      v1[5] = p0.f();
      v1[6] = Long.valueOf(p0.j_());
      v1[7] = p0.j();
      v1[8] = Boolean.valueOf(p0.k());
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.event.Event p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.event.Event v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.event.Event )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.event.Event)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(v4.b(), p0.b())
            && hl.equal(v4.c(), p0.c())
            && hl.equal(v4.d(), p0.d())
            && hl.equal(v4.e(), p0.e())
            && hl.equal(v4.f(), p0.f())
            && hl.equal(Long.valueOf(v4.j_()), Long.valueOf(p0.j_()))
            && hl.equal(v4.j(), p0.j()) )
          {
            return hl.equal(Boolean.valueOf(v4.k()), Boolean.valueOf(p0.k()));
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.games.event.Event p0)
    {
      return hl.e(p0).a("Id", p0.a()).a("Name", p0.b()).a("Description", p0.c()).a("IconImageUri", p0.d()).a("IconImageUrl", p0.e()).a("Player", p0.f()).a("Value", Long.valueOf(p0.j_())).a("FormattedValue", p0.j()).a("isVisible", Boolean.valueOf(p0.k())).toString();
    }

    private com.google.android.gms.games.event.Event m()
    {
      return (com.google.android.gms.games.event.Event)this;
    }

    public final String a()
    {
      return this.b;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      il.b(this.c, p0);
    }

    public final String b()
    {
      return this.c;
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      il.b(this.d, p0);
    }

    public final String c()
    {
      return this.d;
    }

    public final void c(android.database.CharArrayBuffer p0)
    {
      il.b(this.i, p0);
    }

    public final android.net.Uri d()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.f;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.event.Event)this, p0);
    }

    public final com.google.android.gms.games.Player f()
    {
      return (com.google.android.gms.games.Player)this.g;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.event.Event)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String j()
    {
      return this.i;
    }

    public final long j_()
    {
      return this.h;
    }

    public final boolean k()
    {
      return this.j;
    }

    public final int l()
    {
      return this.a;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.event.Event)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      EventEntityCreator.a(this, p0, p1);
    }

}
