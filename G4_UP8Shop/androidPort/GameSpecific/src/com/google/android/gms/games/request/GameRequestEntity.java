// Decompiled from classes.dex (SourceFile: GameRequestEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.request;

import com.amazon.device.iap.model.RequestId;
import com.google.android.gms.internal.hl;
import java.util.Arrays;
public final class GameRequestEntity implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.request.GameRequest {
    // Fields
    public static final com.google.android.gms.games.request.GameRequestEntityCreator CREATOR;
    private final int h;
    private final com.google.android.gms.games.GameEntity i;
    private final com.google.android.gms.games.PlayerEntity j;
    private final byte[] k;
    private final java.lang.String l;
    private final java.util.ArrayList m;
    private final int n;
    private final long o;
    private final long p;
    private final android.os.Bundle q;
    private final int r;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.request.GameRequestEntityCreator();
    }

    GameRequestEntity(
            int p0,
            com.google.android.gms.games.GameEntity p1,
            com.google.android.gms.games.PlayerEntity p2,
            byte[] p3,
            String p4,
            java.util.ArrayList<com.google.android.gms.games.PlayerEntity> p5,
            int p6,
            long p7,
            long p9,
            android.os.Bundle p11,
            int p12)
    {
      super();
      this.h = p0;
      this.i = p1;
      this.j = p2;
      this.k = (byte[])p3;
      this.l = p4;
      this.m = p5;
      this.n = p6;
      this.o = p7;
      this.p = p9;
      this.q = p11;
      this.r = p12;
    }

    public GameRequestEntity(com.google.android.gms.games.request.GameRequest p0)
    {
      super();
      byte[] v2; // RETVAL
      java.util.List v3;
      int v4;
      int i;
      com.google.android.gms.games.Player v6;
      String v7;
      this.h = 2;
      this.i = new com.google.android.gms.games.GameEntity(p0.d());
      this.j = new com.google.android.gms.games.PlayerEntity(p0.e());
      this.l = p0.c();
      this.n = p0.x_();
      this.o = p0.j();
      this.p = p0.k();
      this.r = p0.l();
      v2 = p0.f();
      if ( v2 != null )
      {
        this.k = new byte[v2.length];
        System.arraycopy(v2, 0, this.k, 0, v2.length);
      }
      else
      {
        this.k = null;
      }
      v3 = p0.m();
      v4 = v3.size();
      this.m = new java.util.ArrayList(v4);
      this.q = new android.os.Bundle();
      for ( i = 0; i < v4; ++i )
      {
        v6 = (com.google.android.gms.games.Player)((com.google.android.gms.games.Player)v3.get(i)).h();
        v7 = v6.a();
        this.m.add((com.google.android.gms.games.PlayerEntity)v6);
        this.q.putInt(v7, p0.h_(v7));
      }
    
    }

    static int a(com.google.android.gms.games.request.GameRequest p0)
    {
      Object[] v1;
      v1 = new Object[8];
      v1[0] = p0.d();
      v1[1] = p0.m();
      v1[2] = p0.c();
      v1[3] = p0.e();
      ((int[][])v1)[4] = b(p0);
      v1[5] = Integer.valueOf(p0.x_());
      v1[6] = Long.valueOf(p0.j());
      v1[7] = Long.valueOf(p0.k());
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.request.GameRequest p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.request.GameRequest v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.request.GameRequest )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.request.GameRequest)p1;
          if ( hl.equal(v4.d(), p0.d())
            && hl.equal(v4.m(), p0.m())
            && hl.equal(v4.c(), p0.c())
            && hl.equal(v4.e(), p0.e())
            && Arrays.equals(b(v4), b(p0))
            && hl.equal(Integer.valueOf(v4.x_()), Integer.valueOf(p0.x_()))
            && hl.equal(Long.valueOf(v4.j()), Long.valueOf(p0.j())) )
          {
            return hl.equal(Long.valueOf(v4.k()), Long.valueOf(p0.k()));
          }
        }
      }
      return v2;
    }

    private static int[] b(com.google.android.gms.games.request.GameRequest p0)
    {
      java.util.List v1;
      int v2;
      int[] v3;
      int i;
      v1 = p0.m();
      v2 = v1.size();
      v3 = new int[v2];
      for ( i = 0; i < v2; ++i )
        v3[i] = p0.h_(((com.google.android.gms.games.Player)v1.get(i)).a());
      return (int[])v3;
    }

    static String c(com.google.android.gms.games.request.GameRequest p0)
    {
      return hl.e(p0).a("Game", p0.d()).a("Sender", p0.e()).a("Recipients", p0.m()).a("Data", p0.f()).a("RequestId", p0.c()).a("Type", Integer.valueOf(p0.x_())).a("CreationTimestamp", Long.valueOf(p0.j())).a("ExpirationTimestamp", Long.valueOf(p0.k())).toString();
    }

    private com.google.android.gms.games.request.GameRequest n()
    {
      return (com.google.android.gms.games.request.GameRequest)this;
    }

    public final int a()
    {
      return this.h;
    }

    public final android.os.Bundle b()
    {
      return this.q;
    }

    public final String c()
    {
      return this.l;
    }

    public final com.google.android.gms.games.Game d()
    {
      return (com.google.android.gms.games.Game)this.i;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final com.google.android.gms.games.Player e()
    {
      return (com.google.android.gms.games.Player)this.j;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.request.GameRequest)this, p0);
    }

    public final byte[] f()
    {
      return this.k;
    }

    public final boolean g_(String p0)
    {
      return this.h_(p0) == 1;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int h_(String p0)
    {
      return this.q.getInt(p0, 0);
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.request.GameRequest)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final long j()
    {
      return this.o;
    }

    public final long k()
    {
      return this.p;
    }

    public final int l()
    {
      return this.r;
    }

    public final java.util.List<com.google.android.gms.games.Player> m()
    {
      return new java.util.ArrayList(this.m);
    }

    public final String toString()
    {
      return c((com.google.android.gms.games.request.GameRequest)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      GameRequestEntityCreator.a(this, p0, p1);
    }

    public final int x_()
    {
      return this.n;
    }

}
